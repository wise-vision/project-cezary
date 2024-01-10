#define CONFIG_SPI 1
#define CONFIG_BOARD "lora_e5_dev_board"
#define CONFIG_NUM_IRQS 62
#define CONFIG_SOC_SERIES "stm32wl"
#define CONFIG_CORTEX_M_SYSTICK 1
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 48000000
#define CONFIG_SOC "stm32wle5xx"
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 1
#define CONFIG_FLASH_SIZE 256
#define CONFIG_FLASH_BASE_ADDRESS 0x8000000
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_PINCTRL 1
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_RESET 1
#define CONFIG_GPIO 1
#define CONFIG_LOG_DOMAIN_NAME ""
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 10000
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_SERIAL_INIT_PRIORITY 55
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_SERIAL 1
#define CONFIG_HW_STACK_PROTECTION 1
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_FLASH_LOAD_OFFSET 0x0
#define CONFIG_IDLE_STACK_SIZE 256
#define CONFIG_CLOCK_CONTROL_STM32_CUBE 1
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_DT_HAS_ARM_ARMV7M_SYSTICK_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M4F_ENABLED 1
#define CONFIG_DT_HAS_ARM_V7M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_KEYS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_LEDS_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_REGULATOR_FIXED_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_ADC_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_AES_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_EXTI_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_GPIO_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_I2C_V2_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_LPTIM_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_LPUART_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_MSI_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_RCC_RCTL_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_RTC_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_SPI_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_SPI_FIFO_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_SPI_SUBGHZ_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_UART_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_USART_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_WATCHDOG_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32L4_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32WL_RCC_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32WL_SUBGHZ_RADIO_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_POWER_STATE_ENABLED 1
#define CONFIG_ZEPHYR_ACPICA_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_ZEPHYR_CMSIS_DSP_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_NN_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_ALTERA_MODULE 1
#define CONFIG_ZEPHYR_HAL_AMBIQ_MODULE 1
#define CONFIG_ZEPHYR_ATMEL_MODULE 1
#define CONFIG_ZEPHYR_HAL_ESPRESSIF_MODULE 1
#define CONFIG_ZEPHYR_HAL_ETHOS_U_MODULE 1
#define CONFIG_ZEPHYR_HAL_GIGADEVICE_MODULE 1
#define CONFIG_ZEPHYR_HAL_INFINEON_MODULE 1
#define CONFIG_ZEPHYR_HAL_INTEL_MODULE 1
#define CONFIG_ZEPHYR_MICROCHIP_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_ZEPHYR_NUVOTON_MODULE 1
#define CONFIG_ZEPHYR_HAL_NXP_MODULE 1
#define CONFIG_ZEPHYR_OPENISA_MODULE 1
#define CONFIG_ZEPHYR_QUICKLOGIC_MODULE 1
#define CONFIG_ZEPHYR_HAL_RENESAS_MODULE 1
#define CONFIG_ZEPHYR_HAL_RPI_PICO_MODULE 1
#define CONFIG_ZEPHYR_SILABS_MODULE 1
#define CONFIG_ZEPHYR_ST_MODULE 1
#define CONFIG_ZEPHYR_STM32_MODULE 1
#define CONFIG_ZEPHYR_HAL_TELINK_MODULE 1
#define CONFIG_ZEPHYR_TI_MODULE 1
#define CONFIG_ZEPHYR_HAL_WURTHELEKTRONIK_MODULE 1
#define CONFIG_ZEPHYR_XTENSA_MODULE 1
#define CONFIG_WIFI_NM_WPA_SUPPLICANT_THREAD_STACK_SIZE 8192
#define CONFIG_WIFI_NM_WPA_SUPPLICANT_LOG_LEVEL_DEFAULT 1
#define CONFIG_WIFI_NM_WPA_SUPPLICANT_LOG_LEVEL 3
#define CONFIG_WIFI_NM_WPA_SUPPLICANT_DEBUG_LEVEL 6
#define CONFIG_ZEPHYR_HOSTAP_MODULE 1
#define CONFIG_ZEPHYR_LIBMETAL_MODULE 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_HAS_SEMTECH_RADIO_DRIVERS 1
#define CONFIG_HAS_SEMTECH_SX126X 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MIPI_SYS_T_MODULE 1
#define CONFIG_ZEPHYR_NRF_HW_MODELS_MODULE 1
#define CONFIG_ZEPHYR_OPEN_AMP_MODULE 1
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_ZEPHYR_PERCEPIO_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TINYCRYPT_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_A_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_HAS_STM32CUBE 1
#define CONFIG_USE_STM32_LL_SPI 1
#define CONFIG_USE_STM32_LL_UTILS 1
#define CONFIG_BOARD_REVISION ""
#define CONFIG_BOARD_LORA_E5_DEV_BOARD 1
#define CONFIG_SOC_SERIES_STM32WLX 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_SOC_FAMILY "st_stm32"
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_SOC_FAMILY_STM32 1
#define CONFIG_STM32H7_BOOT_M4_AT_INIT 1
#define CONFIG_SOC_STM32WLE5XX 1
#define CONFIG_SOC_LOG_LEVEL_DEFAULT 1
#define CONFIG_SOC_LOG_LEVEL 3
#define CONFIG_ARCH "arm"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_ARM_STACK_PROTECTION 1
#define CONFIG_FP16 1
#define CONFIG_FP16_IEEE 1
#define CONFIG_CPU_CORTEX_M4 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_ARM_MPU 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_MPU_STACK_GUARD 1
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_ARCH_LOG_LEVEL_DEFAULT 1
#define CONFIG_ARCH_LOG_LEVEL 3
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_SRAM_SIZE 64
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_PRIVILEGED_STACK_SIZE 1024
#define CONFIG_KOBJECT_TEXT_AREA 256
#define CONFIG_KOBJECT_DATA_AREA_RESERVE_EXTRA_PERCENT 100
#define CONFIG_KOBJECT_RODATA_AREA_EXTRA_BYTES 16
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_EXCEPTION_DEBUG 1
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_SUPPORTS_ROM_START 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU 1
#define CONFIG_MPU_LOG_LEVEL_DEFAULT 1
#define CONFIG_MPU_LOG_LEVEL 3
#define CONFIG_MPU_REQUIRES_POWER_OF_TWO_ALIGNMENT 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_KERNEL_LOG_LEVEL_DEFAULT 1
#define CONFIG_KERNEL_LOG_LEVEL 3
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_LIBC_ERRNO 1
#define CONFIG_ERRNO 1
#define CONFIG_CURRENT_THREAD_USE_TLS 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_BANNER_STRING "Booting Zephyr OS build"
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_BARRIER_OPERATIONS_ARCH 1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_POLL 1
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_XIP 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_THREAD_LOCAL_STORAGE 1
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL_DEFAULT 1
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL 3
#define CONFIG_CLOCK_STM32_HSE_CLOCK 8000000
#define CONFIG_CLOCK_STM32_MCO1_SRC_NOCLOCK 1
#define CONFIG_CLOCK_STM32_MCO2_SRC_NOCLOCK 1
#define CONFIG_CLOCK_CONTROL_NPCX_SUPP_APB4 1
#define CONFIG_CONSOLE 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_CONSOLE_INIT_PRIORITY 60
#define CONFIG_UART_CONSOLE 1
#define CONFIG_UART_CONSOLE_LOG_LEVEL_DEFAULT 1
#define CONFIG_UART_CONSOLE_LOG_LEVEL 3
#define CONFIG_GPIO_LOG_LEVEL_DEFAULT 1
#define CONFIG_GPIO_LOG_LEVEL 3
#define CONFIG_GPIO_STM32 1
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_INTC_LOG_LEVEL_DEFAULT 1
#define CONFIG_INTC_LOG_LEVEL 3
#define CONFIG_EXTI_STM32 1
#define CONFIG_LORA 1
#define CONFIG_LORA_LOG_LEVEL_DEFAULT 1
#define CONFIG_LORA_LOG_LEVEL 3
#define CONFIG_LORA_INIT_PRIORITY 90
#define CONFIG_LORA_STM32WL_SUBGHZ_RADIO 1
#define CONFIG_PINCTRL_LOG_LEVEL_DEFAULT 1
#define CONFIG_PINCTRL_LOG_LEVEL 3
#define CONFIG_PINCTRL_STM32 1
#define CONFIG_PINCTRL_STM32_REMAP_INIT_PRIORITY 2
#define CONFIG_REGULATOR 1
#define CONFIG_REGULATOR_THREAD_SAFE_REFCNT 1
#define CONFIG_REGULATOR_LOG_LEVEL_DEFAULT 1
#define CONFIG_REGULATOR_LOG_LEVEL 3
#define CONFIG_REGULATOR_FIXED 1
#define CONFIG_REGULATOR_FIXED_INIT_PRIORITY 75
#define CONFIG_REGULATOR_NXP_VREF_INIT_PRIORITY 45
#define CONFIG_RESET_INIT_PRIORITY 35
#define CONFIG_RESET_STM32 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_LOG_LEVEL_DEFAULT 1
#define CONFIG_UART_LOG_LEVEL 3
#define CONFIG_UART_USE_RUNTIME_CONFIGURE 1
#define CONFIG_UART_STM32 1
#define CONFIG_SPI_INIT_PRIORITY 70
#define CONFIG_SPI_COMPLETION_TIMEOUT_TOLERANCE 200
#define CONFIG_SPI_LOG_LEVEL_DEFAULT 1
#define CONFIG_SPI_LOG_LEVEL 3
#define CONFIG_SPI_STM32 1
#define CONFIG_SPI_STM32_USE_HW_SS 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_CORTEX_M_SYSTICK_INSTALL_ISR 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL_DEFAULT 1
#define CONFIG_NRF_USBD_COMMON_LOG_LEVEL 3
#define CONFIG_USBC_LOG_LEVEL_DEFAULT 1
#define CONFIG_USBC_LOG_LEVEL 3
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_PICOLIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE -1
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_PICOLIBC_USE_TOOLCHAIN 1
#define CONFIG_PICOLIBC_HEAP_SIZE -2
#define CONFIG_PICOLIBC_IO_FLOAT 1
#define CONFIG_STDOUT_CONSOLE 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_SMALL_ONLY 1
#define CONFIG_MPSC_PBUF 1
#define CONFIG_HAS_POWEROFF 1
#define CONFIG_CBPRINTF_COMPLETE 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_FP_SUPPORT 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL_DEFAULT 1
#define CONFIG_CBPRINTF_PACKAGE_LOG_LEVEL 3
#define CONFIG_CBPRINTF_CONVERT_CHECK_PTR 1
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_PTHREAD_BARRIER_LOG_LEVEL_DEFAULT 1
#define CONFIG_PTHREAD_BARRIER_LOG_LEVEL 3
#define CONFIG_PTHREAD_COND_LOG_LEVEL_DEFAULT 1
#define CONFIG_PTHREAD_COND_LOG_LEVEL 3
#define CONFIG_PTHREAD_KEY_LOG_LEVEL_DEFAULT 1
#define CONFIG_PTHREAD_KEY_LOG_LEVEL 3
#define CONFIG_PTHREAD_MUTEX_LOG_LEVEL_DEFAULT 1
#define CONFIG_PTHREAD_MUTEX_LOG_LEVEL 3
#define CONFIG_PTHREAD_LOG_LEVEL_DEFAULT 1
#define CONFIG_PTHREAD_LOG_LEVEL 3
#define CONFIG_SEM_VALUE_MAX 32767
#define CONFIG_SEM_NAMELEN_MAX 16
#define CONFIG_POSIX_RTSIG_MAX 0
#define CONFIG_PTHREAD_SPINLOCK_LOG_LEVEL_DEFAULT 1
#define CONFIG_PTHREAD_SPINLOCK_LOG_LEVEL 3
#define CONFIG_TIMER_LOG_LEVEL_DEFAULT 1
#define CONFIG_TIMER_LOG_LEVEL 3
#define CONFIG_MAX_TIMER_COUNT 5
#define CONFIG_TIMER_CREATE_WAIT 100
#define CONFIG_TIMER_DELAYTIMER_MAX 20
#define CONFIG_ACPI_HID_LEN_MAX 12
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_LOG 1
#define CONFIG_LOG_CORE_INIT_PRIORITY 0
#define CONFIG_LOG_MODE_DEFERRED 1
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_OVERRIDE_LEVEL 0
#define CONFIG_LOG_MAX_LEVEL 4
#define CONFIG_LOG_PRINTK 1
#define CONFIG_LOG_MODE_OVERFLOW 1
#define CONFIG_LOG_PROCESS_TRIGGER_THRESHOLD 10
#define CONFIG_LOG_PROCESS_THREAD 1
#define CONFIG_LOG_PROCESS_THREAD_STARTUP_DELAY_MS 0
#define CONFIG_LOG_PROCESS_THREAD_SLEEP_MS 1000
#define CONFIG_LOG_PROCESS_THREAD_STACK_SIZE 768
#define CONFIG_LOG_BUFFER_SIZE 1024
#define CONFIG_LOG_TRACE_SHORT_TIMESTAMP 1
#define CONFIG_LOG_FUNC_NAME_PREFIX_DBG 1
#define CONFIG_LOG_BACKEND_SHOW_COLOR 1
#define CONFIG_LOG_TAG_MAX_LEN 0
#define CONFIG_LOG_BACKEND_FORMAT_TIMESTAMP 1
#define CONFIG_LOG_BACKEND_UART 1
#define CONFIG_LOG_BACKEND_UART_BUFFER_SIZE 1
#define CONFIG_LOG_BACKEND_UART_AUTOSTART 1
#define CONFIG_LOG_BACKEND_UART_OUTPUT_TEXT 1
#define CONFIG_LOG_BACKEND_UART_OUTPUT_DEFAULT 0
#define CONFIG_LOG_DOMAIN_ID 0
#define CONFIG_LOG_USE_VLA 1
#define CONFIG_LOG_SIMPLE_MSG_OPTIMIZE 1
#define CONFIG_LOG_FAILURE_REPORT_PERIOD 1000
#define CONFIG_LOG_OUTPUT 1
#define CONFIG_MEM_ATTR 1
#define CONFIG_HAS_PM 1
#define CONFIG_TIMER_RANDOM_INITIAL_STATE 123456789
#define CONFIG_COVERAGE_GCOV_HEAP_SIZE 16384
#define CONFIG_TOOLCHAIN_ZEPHYR_0_16 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_FLASH_LOAD_SIZE 0x0
#define CONFIG_ROM_END_OFFSET 0x0
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_LINKER_DEVNULL_SUPPORT 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_COMPILE_TIME 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_EXPERIMENTAL 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_APP_LOG_LEVEL_DEFAULT 1
#define CONFIG_APP_LOG_LEVEL 3
