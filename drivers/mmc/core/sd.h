#ifndef _MMC_CORE_SD_H
#define _MMC_CORE_SD_H

#include <linux/mmc/card.h>

extern struct device_type sd_type;

int mmc_sd_get_cid(struct mmc_host *host, u32 ocr, u32 *cid, u32 *rocr);
int mmc_sd_get_csd(struct mmc_host *host, struct mmc_card *card);
void mmc_decode_cid(struct mmc_card *card);
int mmc_sd_setup_card(struct mmc_host *host, struct mmc_card *card,
	bool reinit);
unsigned mmc_sd_get_max_clock(struct mmc_card *card);
int mmc_sd_switch_hs(struct mmc_card *card);

static inline void mmc_stop_tracing(struct mmc_host *mmc) {}
static inline void mmc_trace_write(struct mmc_host *mmc,
		const char *fmt, ...) {}
static inline void mmc_trace_init(struct mmc_host *mmc) {}
static inline void mmc_trace_free(struct mmc_host *mmc) {}
static inline void mmc_dump_trace_buffer(struct mmc_host *mmc,
		struct seq_file *s) {}

#define MMC_TRACE(mmc, fmt, ...) \
		mmc_trace_write(mmc, fmt, ##__VA_ARGS__)

#endif
