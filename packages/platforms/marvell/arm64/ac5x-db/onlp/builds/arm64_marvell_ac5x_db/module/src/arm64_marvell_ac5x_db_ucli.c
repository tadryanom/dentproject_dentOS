/**************************************************************************//**
 *
 *
 *
 *****************************************************************************/
#include <arm64_marvell_ac5x_db/arm64_marvell_ac5x_db_config.h>

#if ARM64_MARVELL_AC5X_DB_CONFIG_INCLUDE_UCLI == 1

#include <uCli/ucli.h>
#include <uCli/ucli_argparse.h>
#include <uCli/ucli_handler_macros.h>

static ucli_status_t
arm64_marvell_ac5x_db_ucli_ucli__config__(ucli_context_t* uc)
{
    UCLI_HANDLER_MACRO_MODULE_CONFIG(arm64_marvell_ac5x_db)
}

/* <auto.ucli.handlers.start> */
/******************************************************************************
 *
 * These handler table(s) were autogenerated from the symbols in this
 * source file.
 *
 *****************************************************************************/
static ucli_command_handler_f arm64_marvell_ac5x_db_ucli_ucli_handlers__[] =
{
    arm64_marvell_ac5x_db_ucli_ucli__config__,
    NULL
};
/******************************************************************************/
/* <auto.ucli.handlers.end> */

static ucli_module_t
arm64_marvell_ac5x_db_ucli_module__ =
    {
        "arm64_marvell_ac5x_db_ucli",
        NULL,
        arm64_marvell_ac5x_db_ucli_ucli_handlers__,
        NULL,
        NULL,
    };

ucli_node_t*
arm64_marvell_ac5x_db_ucli_node_create(void)
{
    ucli_node_t* n;
    ucli_module_init(&arm64_marvell_ac5x_db_ucli_module__);
    n = ucli_node_create("arm64_marvell_ac5x_db", NULL, &arm64_marvell_ac5x_db_ucli_module__);
    ucli_node_subnode_add(n, ucli_module_log_node_create("arm64_marvell_ac5x_db"));
    return n;
}

#else
void*
arm64_marvell_ac5x_db_ucli_node_create(void)
{
    return NULL;
}
#endif