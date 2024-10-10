/*
 * SPDX-FileCopyrightText: 2017-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "sdkconfig.h"
#include "esp_efuse.h"
#include <assert.h>
#include "esp_efuse_custom_table.h"

// md5_digest_table c56616a23d4c3aa6283ce9eef94c8b2b
// This file was generated from the file esp_efuse_custom_table.csv. DO NOT CHANGE THIS FILE MANUALLY.
// If you want to change some fields, you need to change esp_efuse_custom_table.csv file
// then run `efuse_common_table` or `efuse_custom_table` command it will generate this file.
// To show efuse_table run the command 'show_efuse_table'.

#define MAX_BLK_LEN CONFIG_EFUSE_MAX_BLK_LEN

// The last free bit in the block is counted over the entire file.
#define LAST_FREE_BIT_BLK3 82

_Static_assert(LAST_FREE_BIT_BLK3 <= MAX_BLK_LEN, "The eFuse table does not match the coding scheme. Edit the table and restart the efuse_common_table or efuse_custom_table command to regenerate the new files.");

static const esp_efuse_desc_t EP_DATA[] = {
    {EFUSE_BLK3, 56, 26}, 	 // EP DATA,
};

static const esp_efuse_desc_t EP_DATA_SERIAL_NO[] = {
    {EFUSE_BLK3, 56, 20}, 	 // EP SERIAL,
};

static const esp_efuse_desc_t EP_DATA_RESERVED[] = {
    {EFUSE_BLK3, 76, 6}, 	 // RESERVED,
};





const esp_efuse_desc_t* ESP_EFUSE_EP_DATA[] = {
    &EP_DATA[0],    		// EP DATA
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_EP_DATA_SERIAL_NO[] = {
    &EP_DATA_SERIAL_NO[0],    		// EP SERIAL
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_EP_DATA_RESERVED[] = {
    &EP_DATA_RESERVED[0],    		// RESERVED
    NULL
};
