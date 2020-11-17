/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-data-get.m2c
 *
 * @file iotUserTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef IOTUSERTABLE_DATA_GET_H
#define IOTUSERTABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table iotUserTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * IOT-MIB::iotUserTable is subid 1 of Tables.
 * Its status is Current.
 * OID: .1.3.6.1.3.9999.2.1, length: 8
*/
    /*
     * indexes
     */

    int ROIntCol2_get( iotUserTable_rowreq_ctx *rowreq_ctx, long * ROIntCol2_val_ptr );


int iotUserTable_indexes_set_tbl_idx(iotUserTable_mib_index *tbl_idx, char *ROStringCol1_val_ptr,  size_t ROStringCol1_val_ptr_len);
int iotUserTable_indexes_set(iotUserTable_rowreq_ctx *rowreq_ctx, char *ROStringCol1_val_ptr,  size_t ROStringCol1_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* IOTUSERTABLE_DATA_GET_H */
/** @} */