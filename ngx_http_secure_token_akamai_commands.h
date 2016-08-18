	{ ngx_string("secure_token_akamai_acl"),
	NGX_HTTP_MAIN_CONF | NGX_HTTP_SRV_CONF | NGX_HTTP_LOC_CONF | NGX_CONF_TAKE1,
	ngx_http_set_complex_value_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_secure_token_loc_conf_t, akamai.acl),
	NULL },

	{ ngx_string("secure_token_akamai_key"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
	ngx_http_set_complex_value_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_secure_token_loc_conf_t, akamai.key),
	NULL },

	{ ngx_string("secure_token_akamai_param_name"),
	NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
	ngx_conf_set_str_slot,
	NGX_HTTP_LOC_CONF_OFFSET,
	offsetof(ngx_http_secure_token_loc_conf_t, akamai.param_name),
	NULL },
