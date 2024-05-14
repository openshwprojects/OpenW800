TOP_DIR = ..
sinclude $(TOP_DIR)/tools/w800/conf.mk

EXCLUDES = wm_slave_spi_demo.c wm_fatfs_demo.c wm_sdio_host_demo.c wm_7816_demo.c wm_adc_demo.c wm_apsta_demo.c wm_connect_net_demo.c wm_crypt_demo.c wm_crypt_hard_demo.c wm_flash_demo.c wm_gpio_demo.c wm_https_demo.c wm_http_demo.c wm_i2c_demo.c wm_i2s_demo.c wm_iperf_auto_demo.c wm_master_spi_demo.c wm_mbedtls_demo.c wm_mcast_demo.c wm_mqtt_demo.c wm_ntp_demo.c wm_pmu_demo.c wm_pwm_demo.c wm_rsa_demo.c wm_rtc_demo.c wm_scan_demo.c wm_sck_client_demo.c wm_sck_server_demo.c wm_socket_client_demo.c wm_socket_server_demo.c wm_softap_demo.c wm_ssl_server_demo.c wm_timer_demo.c wm_uart_demo.c wm_udp_demo.c wm_websockets_demo.c wm_wps_demo.c

ifndef PDIR
GEN_LIBS = libdemo$(LIB_EXT)
COMPONENTS_libdemo = console/libconsole$(LIB_EXT)
endif

#DEFINES +=

sinclude $(TOP_DIR)/tools/w800/rules.mk
INCLUDES := $(INCLUDES) -I $(PDIR)include
PDIR := ../$(PDIR)
sinclude $(PDIR)Makefile