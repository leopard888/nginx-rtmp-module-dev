#ifndef _NGX_HTTP_QQFLV_MODULE_H_INCLUDED_
#define _NGX_HTTP_QQFLV_MODULE_H_INCLUDED_
#include "ngx_map.h"
#include "ngx_rtmp.h"

typedef struct ngx_http_qqflv_loc_conf_s ngx_http_qqflv_loc_conf_t;

typedef struct {
    ngx_str_t                       path;
    ngx_pool_t                     *pool;
    ngx_map_t                       channel_map;
    ngx_queue_t                     idle_block_index;
} ngx_http_qqflv_main_conf_t;

struct ngx_http_qqflv_loc_conf_s {
    ngx_http_qqflv_loc_conf_t      *parent;
};

#endif