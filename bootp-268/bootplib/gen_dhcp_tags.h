/*
 * Copyright (c) 1999-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 * This file was auto-generated by ./genoptionfiles -dhcptag, do not edit!
 */
#ifndef _S_DHCP_TAG
#define _S_DHCP_TAG

#include <stdint.h>

enum {
    /* rfc 1497 vendor extensions: 0..18, 255 */
    dhcptag_pad_e                      	= 0,
    dhcptag_end_e                      	= 255,
    dhcptag_subnet_mask_e              	= 1,
    dhcptag_time_offset_e              	= 2,
    dhcptag_router_e                   	= 3,
    dhcptag_time_server_e              	= 4,
    dhcptag_name_server_e              	= 5,
    dhcptag_domain_name_server_e       	= 6,
    dhcptag_log_server_e               	= 7,
    dhcptag_cookie_server_e            	= 8,
    dhcptag_lpr_server_e               	= 9,
    dhcptag_impress_server_e           	= 10,
    dhcptag_resource_location_server_e 	= 11,
    dhcptag_host_name_e                	= 12,
    dhcptag_boot_file_size_e           	= 13,
    dhcptag_merit_dump_file_e          	= 14,
    dhcptag_domain_name_e              	= 15,
    dhcptag_swap_server_e              	= 16,
    dhcptag_root_path_e                	= 17,
    dhcptag_extensions_path_e          	= 18,

    /* ip layer parameters per host: 19..25 */
    dhcptag_ip_forwarding_e            	= 19,
    dhcptag_non_local_source_routing_e 	= 20,
    dhcptag_policy_filter_e            	= 21,
    dhcptag_max_dgram_reassembly_size_e	= 22,
    dhcptag_default_ip_time_to_live_e  	= 23,
    dhcptag_path_mtu_aging_timeout_e   	= 24,
    dhcptag_path_mtu_plateau_table_e   	= 25,

    /* ip layer parameters per interface: 26..33 */
    dhcptag_interface_mtu_e            	= 26,
    dhcptag_all_subnets_local_e        	= 27,
    dhcptag_broadcast_address_e        	= 28,
    dhcptag_perform_mask_discovery_e   	= 29,
    dhcptag_mask_supplier_e            	= 30,
    dhcptag_perform_router_discovery_e 	= 31,
    dhcptag_router_solicitation_address_e	= 32,
    dhcptag_static_route_e             	= 33,
    dhcptag_trailer_encapsulation_e    	= 34,
    dhcptag_arp_cache_timeout_e        	= 35,
    dhcptag_ethernet_encapsulation_e   	= 36,

    /* tcp parameters: 37..39 */
    dhcptag_default_ttl_e              	= 37,
    dhcptag_keepalive_interval_e       	= 38,
    dhcptag_keepalive_garbage_e        	= 39,

    /* application & service parameters: 40..49, 64, 65, 68..76, 78, 79, 95 */
    dhcptag_nis_domain_e               	= 40,
    dhcptag_nis_servers_e              	= 41,
    dhcptag_network_time_protocol_servers_e	= 42,
    dhcptag_vendor_specific_e          	= 43,
    dhcptag_nb_over_tcpip_name_server_e	= 44,
    dhcptag_nb_over_tcpip_dgram_dist_server_e	= 45,
    dhcptag_nb_over_tcpip_node_type_e  	= 46,
    dhcptag_nb_over_tcpip_scope_e      	= 47,
    dhcptag_x_windows_font_server_e    	= 48,
    dhcptag_x_windows_display_manager_e	= 49,
    dhcptag_nis_plus_domain_e          	= 64,
    dhcptag_nis_plus_servers_e         	= 65,
    dhcptag_mobile_ip_home_agent_e     	= 68,
    dhcptag_smtp_server_e              	= 69,
    dhcptag_pop3_server_e              	= 70,
    dhcptag_nntp_server_e              	= 71,
    dhcptag_default_www_server_e       	= 72,
    dhcptag_default_finger_server_e    	= 73,
    dhcptag_default_irc_server_e       	= 74,
    dhcptag_streettalk_server_e        	= 75,
    dhcptag_stda_server_e              	= 76,
    dhcptag_slp_directory_agent_e      	= 78,
    dhcptag_slp_service_scope_e        	= 79,
    dhcptag_ldap_url_e                 	= 95,
    dhcptag_swap_path_e                	= 108,
    dhcptag_url_e                      	= 114,

    /* dhcp-specific extensions: 50..61, 66, 67 */
    dhcptag_requested_ip_address_e     	= 50,
    dhcptag_lease_time_e               	= 51,
    dhcptag_option_overload_e          	= 52,
    dhcptag_dhcp_message_type_e        	= 53,
    dhcptag_server_identifier_e        	= 54,
    dhcptag_parameter_request_list_e   	= 55,
    dhcptag_message_e                  	= 56,
    dhcptag_max_dhcp_message_size_e    	= 57,
    dhcptag_renewal_t1_time_value_e    	= 58,
    dhcptag_rebinding_t2_time_value_e  	= 59,
    dhcptag_vendor_class_identifier_e  	= 60,
    dhcptag_client_identifier_e        	= 61,
    dhcptag_tftp_server_name_e         	= 66,
    dhcptag_bootfile_name_e            	= 67,

    /* netinfo parent tags: 112, 113 */
    dhcptag_netinfo_server_address_e   	= 112,
    dhcptag_netinfo_server_tag_e       	= 113,

    /* ad-hoc network disable option */
    dhcptag_auto_configure_e           	= 116,

    /* DNS domain search option (RFC 3397) */
    dhcptag_domain_search_e            	= 119,

    /* proxy auto discovery */
    dhcptag_proxy_auto_discovery_url_e 	= 252,

    /* undefined */
    dhcptag_62_e                       	= 62,
    dhcptag_63_e                       	= 63,
    dhcptag_77_e                       	= 77,
    dhcptag_80_e                       	= 80,
    dhcptag_81_e                       	= 81,
    dhcptag_82_e                       	= 82,
    dhcptag_83_e                       	= 83,
    dhcptag_84_e                       	= 84,
    dhcptag_85_e                       	= 85,
    dhcptag_86_e                       	= 86,
    dhcptag_87_e                       	= 87,
    dhcptag_88_e                       	= 88,
    dhcptag_89_e                       	= 89,
    dhcptag_90_e                       	= 90,
    dhcptag_91_e                       	= 91,
    dhcptag_92_e                       	= 92,
    dhcptag_93_e                       	= 93,
    dhcptag_94_e                       	= 94,
    dhcptag_96_e                       	= 96,
    dhcptag_97_e                       	= 97,
    dhcptag_98_e                       	= 98,
    dhcptag_99_e                       	= 99,
    dhcptag_100_e                      	= 100,
    dhcptag_101_e                      	= 101,
    dhcptag_102_e                      	= 102,
    dhcptag_103_e                      	= 103,
    dhcptag_104_e                      	= 104,
    dhcptag_105_e                      	= 105,
    dhcptag_106_e                      	= 106,
    dhcptag_107_e                      	= 107,
    dhcptag_109_e                      	= 109,
    dhcptag_110_e                      	= 110,
    dhcptag_111_e                      	= 111,
    dhcptag_115_e                      	= 115,
    dhcptag_117_e                      	= 117,
    dhcptag_118_e                      	= 118,
    dhcptag_120_e                      	= 120,
    dhcptag_121_e                      	= 121,
    dhcptag_122_e                      	= 122,
    dhcptag_123_e                      	= 123,
    dhcptag_124_e                      	= 124,
    dhcptag_125_e                      	= 125,
    dhcptag_126_e                      	= 126,
    dhcptag_127_e                      	= 127,

    /* site-specific 128..254 */
    dhcptag_128_e                      	= 128,
    dhcptag_129_e                      	= 129,
    dhcptag_130_e                      	= 130,
    dhcptag_131_e                      	= 131,
    dhcptag_132_e                      	= 132,
    dhcptag_133_e                      	= 133,
    dhcptag_134_e                      	= 134,
    dhcptag_135_e                      	= 135,
    dhcptag_136_e                      	= 136,
    dhcptag_137_e                      	= 137,
    dhcptag_138_e                      	= 138,
    dhcptag_139_e                      	= 139,
    dhcptag_140_e                      	= 140,
    dhcptag_141_e                      	= 141,
    dhcptag_142_e                      	= 142,
    dhcptag_143_e                      	= 143,
    dhcptag_144_e                      	= 144,
    dhcptag_145_e                      	= 145,
    dhcptag_146_e                      	= 146,
    dhcptag_147_e                      	= 147,
    dhcptag_148_e                      	= 148,
    dhcptag_149_e                      	= 149,
    dhcptag_150_e                      	= 150,
    dhcptag_151_e                      	= 151,
    dhcptag_152_e                      	= 152,
    dhcptag_153_e                      	= 153,
    dhcptag_154_e                      	= 154,
    dhcptag_155_e                      	= 155,
    dhcptag_156_e                      	= 156,
    dhcptag_157_e                      	= 157,
    dhcptag_158_e                      	= 158,
    dhcptag_159_e                      	= 159,
    dhcptag_160_e                      	= 160,
    dhcptag_161_e                      	= 161,
    dhcptag_162_e                      	= 162,
    dhcptag_163_e                      	= 163,
    dhcptag_164_e                      	= 164,
    dhcptag_165_e                      	= 165,
    dhcptag_166_e                      	= 166,
    dhcptag_167_e                      	= 167,
    dhcptag_168_e                      	= 168,
    dhcptag_169_e                      	= 169,
    dhcptag_170_e                      	= 170,
    dhcptag_171_e                      	= 171,
    dhcptag_172_e                      	= 172,
    dhcptag_173_e                      	= 173,
    dhcptag_174_e                      	= 174,
    dhcptag_175_e                      	= 175,
    dhcptag_176_e                      	= 176,
    dhcptag_177_e                      	= 177,
    dhcptag_178_e                      	= 178,
    dhcptag_179_e                      	= 179,
    dhcptag_180_e                      	= 180,
    dhcptag_181_e                      	= 181,
    dhcptag_182_e                      	= 182,
    dhcptag_183_e                      	= 183,
    dhcptag_184_e                      	= 184,
    dhcptag_185_e                      	= 185,
    dhcptag_186_e                      	= 186,
    dhcptag_187_e                      	= 187,
    dhcptag_188_e                      	= 188,
    dhcptag_189_e                      	= 189,
    dhcptag_190_e                      	= 190,
    dhcptag_191_e                      	= 191,
    dhcptag_192_e                      	= 192,
    dhcptag_193_e                      	= 193,
    dhcptag_194_e                      	= 194,
    dhcptag_195_e                      	= 195,
    dhcptag_196_e                      	= 196,
    dhcptag_197_e                      	= 197,
    dhcptag_198_e                      	= 198,
    dhcptag_199_e                      	= 199,
    dhcptag_200_e                      	= 200,
    dhcptag_201_e                      	= 201,
    dhcptag_202_e                      	= 202,
    dhcptag_203_e                      	= 203,
    dhcptag_204_e                      	= 204,
    dhcptag_205_e                      	= 205,
    dhcptag_206_e                      	= 206,
    dhcptag_207_e                      	= 207,
    dhcptag_208_e                      	= 208,
    dhcptag_209_e                      	= 209,
    dhcptag_210_e                      	= 210,
    dhcptag_211_e                      	= 211,
    dhcptag_212_e                      	= 212,
    dhcptag_213_e                      	= 213,
    dhcptag_214_e                      	= 214,
    dhcptag_215_e                      	= 215,
    dhcptag_216_e                      	= 216,
    dhcptag_217_e                      	= 217,
    dhcptag_218_e                      	= 218,
    dhcptag_219_e                      	= 219,
    dhcptag_220_e                      	= 220,
    dhcptag_221_e                      	= 221,
    dhcptag_222_e                      	= 222,
    dhcptag_223_e                      	= 223,
    dhcptag_224_e                      	= 224,
    dhcptag_225_e                      	= 225,
    dhcptag_226_e                      	= 226,
    dhcptag_227_e                      	= 227,
    dhcptag_228_e                      	= 228,
    dhcptag_229_e                      	= 229,
    dhcptag_230_e                      	= 230,
    dhcptag_231_e                      	= 231,
    dhcptag_232_e                      	= 232,
    dhcptag_233_e                      	= 233,
    dhcptag_234_e                      	= 234,
    dhcptag_235_e                      	= 235,
    dhcptag_236_e                      	= 236,
    dhcptag_237_e                      	= 237,
    dhcptag_238_e                      	= 238,
    dhcptag_239_e                      	= 239,
    dhcptag_240_e                      	= 240,
    dhcptag_241_e                      	= 241,
    dhcptag_242_e                      	= 242,
    dhcptag_243_e                      	= 243,
    dhcptag_244_e                      	= 244,
    dhcptag_245_e                      	= 245,
    dhcptag_246_e                      	= 246,
    dhcptag_247_e                      	= 247,
    dhcptag_248_e                      	= 248,
    dhcptag_249_e                      	= 249,
    dhcptag_250_e                      	= 250,
    dhcptag_251_e                      	= 251,
    dhcptag_252_e                      	= 252,
    dhcptag_253_e                      	= 253,
    dhcptag_254_e                      	= 254,
};

/* defined tags */
#define DHCPTAG_PAD                        	"pad"
#define DHCPTAG_END                        	"end"
#define DHCPTAG_SUBNET_MASK                	"subnet_mask"
#define DHCPTAG_TIME_OFFSET                	"time_offset"
#define DHCPTAG_ROUTER                     	"router"
#define DHCPTAG_TIME_SERVER                	"time_server"
#define DHCPTAG_NAME_SERVER                	"name_server"
#define DHCPTAG_DOMAIN_NAME_SERVER         	"domain_name_server"
#define DHCPTAG_LOG_SERVER                 	"log_server"
#define DHCPTAG_COOKIE_SERVER              	"cookie_server"
#define DHCPTAG_LPR_SERVER                 	"lpr_server"
#define DHCPTAG_IMPRESS_SERVER             	"impress_server"
#define DHCPTAG_RESOURCE_LOCATION_SERVER   	"resource_location_server"
#define DHCPTAG_HOST_NAME                  	"host_name"
#define DHCPTAG_BOOT_FILE_SIZE             	"boot_file_size"
#define DHCPTAG_MERIT_DUMP_FILE            	"merit_dump_file"
#define DHCPTAG_DOMAIN_NAME                	"domain_name"
#define DHCPTAG_SWAP_SERVER                	"swap_server"
#define DHCPTAG_ROOT_PATH                  	"root_path"
#define DHCPTAG_EXTENSIONS_PATH            	"extensions_path"
#define DHCPTAG_IP_FORWARDING              	"ip_forwarding"
#define DHCPTAG_NON_LOCAL_SOURCE_ROUTING   	"non_local_source_routing"
#define DHCPTAG_POLICY_FILTER              	"policy_filter"
#define DHCPTAG_MAX_DGRAM_REASSEMBLY_SIZE  	"max_dgram_reassembly_size"
#define DHCPTAG_DEFAULT_IP_TIME_TO_LIVE    	"default_ip_time_to_live"
#define DHCPTAG_PATH_MTU_AGING_TIMEOUT     	"path_mtu_aging_timeout"
#define DHCPTAG_PATH_MTU_PLATEAU_TABLE     	"path_mtu_plateau_table"
#define DHCPTAG_INTERFACE_MTU              	"interface_mtu"
#define DHCPTAG_ALL_SUBNETS_LOCAL          	"all_subnets_local"
#define DHCPTAG_BROADCAST_ADDRESS          	"broadcast_address"
#define DHCPTAG_PERFORM_MASK_DISCOVERY     	"perform_mask_discovery"
#define DHCPTAG_MASK_SUPPLIER              	"mask_supplier"
#define DHCPTAG_PERFORM_ROUTER_DISCOVERY   	"perform_router_discovery"
#define DHCPTAG_ROUTER_SOLICITATION_ADDRESS	"router_solicitation_address"
#define DHCPTAG_STATIC_ROUTE               	"static_route"
#define DHCPTAG_TRAILER_ENCAPSULATION      	"trailer_encapsulation"
#define DHCPTAG_ARP_CACHE_TIMEOUT          	"arp_cache_timeout"
#define DHCPTAG_ETHERNET_ENCAPSULATION     	"ethernet_encapsulation"
#define DHCPTAG_DEFAULT_TTL                	"default_ttl"
#define DHCPTAG_KEEPALIVE_INTERVAL         	"keepalive_interval"
#define DHCPTAG_KEEPALIVE_GARBAGE          	"keepalive_garbage"
#define DHCPTAG_NIS_DOMAIN                 	"nis_domain"
#define DHCPTAG_NIS_SERVERS                	"nis_servers"
#define DHCPTAG_NETWORK_TIME_PROTOCOL_SERVERS	"network_time_protocol_servers"
#define DHCPTAG_VENDOR_SPECIFIC            	"vendor_specific"
#define DHCPTAG_NB_OVER_TCPIP_NAME_SERVER  	"nb_over_tcpip_name_server"
#define DHCPTAG_NB_OVER_TCPIP_DGRAM_DIST_SERVER	"nb_over_tcpip_dgram_dist_server"
#define DHCPTAG_NB_OVER_TCPIP_NODE_TYPE    	"nb_over_tcpip_node_type"
#define DHCPTAG_NB_OVER_TCPIP_SCOPE        	"nb_over_tcpip_scope"
#define DHCPTAG_X_WINDOWS_FONT_SERVER      	"x_windows_font_server"
#define DHCPTAG_X_WINDOWS_DISPLAY_MANAGER  	"x_windows_display_manager"
#define DHCPTAG_NIS_PLUS_DOMAIN            	"nis_plus_domain"
#define DHCPTAG_NIS_PLUS_SERVERS           	"nis_plus_servers"
#define DHCPTAG_MOBILE_IP_HOME_AGENT       	"mobile_ip_home_agent"
#define DHCPTAG_SMTP_SERVER                	"smtp_server"
#define DHCPTAG_POP3_SERVER                	"pop3_server"
#define DHCPTAG_NNTP_SERVER                	"nntp_server"
#define DHCPTAG_DEFAULT_WWW_SERVER         	"default_www_server"
#define DHCPTAG_DEFAULT_FINGER_SERVER      	"default_finger_server"
#define DHCPTAG_DEFAULT_IRC_SERVER         	"default_irc_server"
#define DHCPTAG_STREETTALK_SERVER          	"streettalk_server"
#define DHCPTAG_STDA_SERVER                	"stda_server"
#define DHCPTAG_SLP_DIRECTORY_AGENT        	"slp_directory_agent"
#define DHCPTAG_SLP_SERVICE_SCOPE          	"slp_service_scope"
#define DHCPTAG_LDAP_URL                   	"ldap_url"
#define DHCPTAG_SWAP_PATH                  	"swap_path"
#define DHCPTAG_URL                        	"url"
#define DHCPTAG_REQUESTED_IP_ADDRESS       	"requested_ip_address"
#define DHCPTAG_LEASE_TIME                 	"lease_time"
#define DHCPTAG_OPTION_OVERLOAD            	"option_overload"
#define DHCPTAG_DHCP_MESSAGE_TYPE          	"dhcp_message_type"
#define DHCPTAG_SERVER_IDENTIFIER          	"server_identifier"
#define DHCPTAG_PARAMETER_REQUEST_LIST     	"parameter_request_list"
#define DHCPTAG_MESSAGE                    	"message"
#define DHCPTAG_MAX_DHCP_MESSAGE_SIZE      	"max_dhcp_message_size"
#define DHCPTAG_RENEWAL_T1_TIME_VALUE      	"renewal_t1_time_value"
#define DHCPTAG_REBINDING_T2_TIME_VALUE    	"rebinding_t2_time_value"
#define DHCPTAG_VENDOR_CLASS_IDENTIFIER    	"vendor_class_identifier"
#define DHCPTAG_CLIENT_IDENTIFIER          	"client_identifier"
#define DHCPTAG_TFTP_SERVER_NAME           	"tftp_server_name"
#define DHCPTAG_BOOTFILE_NAME              	"bootfile_name"
#define DHCPTAG_NETINFO_SERVER_ADDRESS     	"netinfo_server_address"
#define DHCPTAG_NETINFO_SERVER_TAG         	"netinfo_server_tag"
#define DHCPTAG_AUTO_CONFIGURE             	"auto_configure"
#define DHCPTAG_DOMAIN_SEARCH              	"domain_search"
#define DHCPTAG_PROXY_AUTO_DISCOVERY_URL   	"proxy_auto_discovery_url"

/* undefined */
#define DHCPTAG_62                         	"62"
#define DHCPTAG_63                         	"63"
#define DHCPTAG_77                         	"77"
#define DHCPTAG_80                         	"80"
#define DHCPTAG_81                         	"81"
#define DHCPTAG_82                         	"82"
#define DHCPTAG_83                         	"83"
#define DHCPTAG_84                         	"84"
#define DHCPTAG_85                         	"85"
#define DHCPTAG_86                         	"86"
#define DHCPTAG_87                         	"87"
#define DHCPTAG_88                         	"88"
#define DHCPTAG_89                         	"89"
#define DHCPTAG_90                         	"90"
#define DHCPTAG_91                         	"91"
#define DHCPTAG_92                         	"92"
#define DHCPTAG_93                         	"93"
#define DHCPTAG_94                         	"94"
#define DHCPTAG_96                         	"96"
#define DHCPTAG_97                         	"97"
#define DHCPTAG_98                         	"98"
#define DHCPTAG_99                         	"99"
#define DHCPTAG_100                        	"100"
#define DHCPTAG_101                        	"101"
#define DHCPTAG_102                        	"102"
#define DHCPTAG_103                        	"103"
#define DHCPTAG_104                        	"104"
#define DHCPTAG_105                        	"105"
#define DHCPTAG_106                        	"106"
#define DHCPTAG_107                        	"107"
#define DHCPTAG_109                        	"109"
#define DHCPTAG_110                        	"110"
#define DHCPTAG_111                        	"111"
#define DHCPTAG_115                        	"115"
#define DHCPTAG_117                        	"117"
#define DHCPTAG_118                        	"118"
#define DHCPTAG_120                        	"120"
#define DHCPTAG_121                        	"121"
#define DHCPTAG_122                        	"122"
#define DHCPTAG_123                        	"123"
#define DHCPTAG_124                        	"124"
#define DHCPTAG_125                        	"125"
#define DHCPTAG_126                        	"126"
#define DHCPTAG_127                        	"127"

/* site-specific 128..254 */
#define DHCPTAG_128                        	"128"
#define DHCPTAG_129                        	"129"
#define DHCPTAG_130                        	"130"
#define DHCPTAG_131                        	"131"
#define DHCPTAG_132                        	"132"
#define DHCPTAG_133                        	"133"
#define DHCPTAG_134                        	"134"
#define DHCPTAG_135                        	"135"
#define DHCPTAG_136                        	"136"
#define DHCPTAG_137                        	"137"
#define DHCPTAG_138                        	"138"
#define DHCPTAG_139                        	"139"
#define DHCPTAG_140                        	"140"
#define DHCPTAG_141                        	"141"
#define DHCPTAG_142                        	"142"
#define DHCPTAG_143                        	"143"
#define DHCPTAG_144                        	"144"
#define DHCPTAG_145                        	"145"
#define DHCPTAG_146                        	"146"
#define DHCPTAG_147                        	"147"
#define DHCPTAG_148                        	"148"
#define DHCPTAG_149                        	"149"
#define DHCPTAG_150                        	"150"
#define DHCPTAG_151                        	"151"
#define DHCPTAG_152                        	"152"
#define DHCPTAG_153                        	"153"
#define DHCPTAG_154                        	"154"
#define DHCPTAG_155                        	"155"
#define DHCPTAG_156                        	"156"
#define DHCPTAG_157                        	"157"
#define DHCPTAG_158                        	"158"
#define DHCPTAG_159                        	"159"
#define DHCPTAG_160                        	"160"
#define DHCPTAG_161                        	"161"
#define DHCPTAG_162                        	"162"
#define DHCPTAG_163                        	"163"
#define DHCPTAG_164                        	"164"
#define DHCPTAG_165                        	"165"
#define DHCPTAG_166                        	"166"
#define DHCPTAG_167                        	"167"
#define DHCPTAG_168                        	"168"
#define DHCPTAG_169                        	"169"
#define DHCPTAG_170                        	"170"
#define DHCPTAG_171                        	"171"
#define DHCPTAG_172                        	"172"
#define DHCPTAG_173                        	"173"
#define DHCPTAG_174                        	"174"
#define DHCPTAG_175                        	"175"
#define DHCPTAG_176                        	"176"
#define DHCPTAG_177                        	"177"
#define DHCPTAG_178                        	"178"
#define DHCPTAG_179                        	"179"
#define DHCPTAG_180                        	"180"
#define DHCPTAG_181                        	"181"
#define DHCPTAG_182                        	"182"
#define DHCPTAG_183                        	"183"
#define DHCPTAG_184                        	"184"
#define DHCPTAG_185                        	"185"
#define DHCPTAG_186                        	"186"
#define DHCPTAG_187                        	"187"
#define DHCPTAG_188                        	"188"
#define DHCPTAG_189                        	"189"
#define DHCPTAG_190                        	"190"
#define DHCPTAG_191                        	"191"
#define DHCPTAG_192                        	"192"
#define DHCPTAG_193                        	"193"
#define DHCPTAG_194                        	"194"
#define DHCPTAG_195                        	"195"
#define DHCPTAG_196                        	"196"
#define DHCPTAG_197                        	"197"
#define DHCPTAG_198                        	"198"
#define DHCPTAG_199                        	"199"
#define DHCPTAG_200                        	"200"
#define DHCPTAG_201                        	"201"
#define DHCPTAG_202                        	"202"
#define DHCPTAG_203                        	"203"
#define DHCPTAG_204                        	"204"
#define DHCPTAG_205                        	"205"
#define DHCPTAG_206                        	"206"
#define DHCPTAG_207                        	"207"
#define DHCPTAG_208                        	"208"
#define DHCPTAG_209                        	"209"
#define DHCPTAG_210                        	"210"
#define DHCPTAG_211                        	"211"
#define DHCPTAG_212                        	"212"
#define DHCPTAG_213                        	"213"
#define DHCPTAG_214                        	"214"
#define DHCPTAG_215                        	"215"
#define DHCPTAG_216                        	"216"
#define DHCPTAG_217                        	"217"
#define DHCPTAG_218                        	"218"
#define DHCPTAG_219                        	"219"
#define DHCPTAG_220                        	"220"
#define DHCPTAG_221                        	"221"
#define DHCPTAG_222                        	"222"
#define DHCPTAG_223                        	"223"
#define DHCPTAG_224                        	"224"
#define DHCPTAG_225                        	"225"
#define DHCPTAG_226                        	"226"
#define DHCPTAG_227                        	"227"
#define DHCPTAG_228                        	"228"
#define DHCPTAG_229                        	"229"
#define DHCPTAG_230                        	"230"
#define DHCPTAG_231                        	"231"
#define DHCPTAG_232                        	"232"
#define DHCPTAG_233                        	"233"
#define DHCPTAG_234                        	"234"
#define DHCPTAG_235                        	"235"
#define DHCPTAG_236                        	"236"
#define DHCPTAG_237                        	"237"
#define DHCPTAG_238                        	"238"
#define DHCPTAG_239                        	"239"
#define DHCPTAG_240                        	"240"
#define DHCPTAG_241                        	"241"
#define DHCPTAG_242                        	"242"
#define DHCPTAG_243                        	"243"
#define DHCPTAG_244                        	"244"
#define DHCPTAG_245                        	"245"
#define DHCPTAG_246                        	"246"
#define DHCPTAG_247                        	"247"
#define DHCPTAG_248                        	"248"
#define DHCPTAG_249                        	"249"
#define DHCPTAG_250                        	"250"
#define DHCPTAG_251                        	"251"
#define DHCPTAG_252                        	"252"
#define DHCPTAG_253                        	"253"
#define DHCPTAG_254                        	"254"
#endif /* _S_DHCP_TAG */