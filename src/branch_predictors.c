//
// This file contains all of the implementations of the branch predictor
// constructors from the branch_predictors.h file.
//
// It also contains stubs of all of the functions that are added to each
// branch_predictor struct at construction time.
//
// Feel free to create any additional structs or global variables that you
// want.
//
// ============================================================================
// NOTE: It is recommended that you read the comments in the
// branch_predictors.h file for further context on what each function is for.
// ============================================================================
//

#include "branch_predictors.h"

// ANT Branch Predictor
// ============================================================================

enum branch_direction ant_branch_predictor_predict(struct branch_predictor *branch_predictor,
                                                   uint32_t address)
{
    // TODO: return this branch predictors prediction for the branch at the
    // given address.
}

void ant_branch_predictor_handle_result(struct branch_predictor *branch_predictor, uint32_t address,
                                        enum branch_direction branch_direction)
{
    // TODO: use this function to update the state of the branch predictor
    // given the most recent branch direction.
}

void ant_branch_predictor_cleanup(struct branch_predictor *branch_predictor)
{
    // TODO cleanup if necessary
}

struct branch_predictor *ant_branch_predictor_new(uint32_t num_branches,
                                                  struct branch_metadata *branch_metadatas)
{
    struct branch_predictor *ant_bp = calloc(1, sizeof(struct branch_predictor));
    ant_bp->cleanup = &ant_branch_predictor_cleanup;
    ant_bp->predict = &ant_branch_predictor_predict;
    ant_bp->handle_result = &ant_branch_predictor_handle_result;

    // TODO allocate storage for any data necessary for this branch predictor

    return ant_bp;
}

// AT Branch Predictor
// ============================================================================

enum branch_direction at_branch_predictor_predict(struct branch_predictor *branch_predictor,
                                                  uint32_t address)
{
    // TODO: return this branch predictors prediction for the branch at the
    // given address.
}

void at_branch_predictor_handle_result(struct branch_predictor *branch_predictor, uint32_t address,
                                       enum branch_direction branch_direction)
{
    // TODO: use this function to update the state of the branch predictor
    // given the most recent branch direction.
}

void at_branch_predictor_cleanup(struct branch_predictor *branch_predictor)
{
    // TODO cleanup if necessary
}

struct branch_predictor *at_branch_predictor_new(uint32_t num_branches,
                                                 struct branch_metadata *branch_metadatas)
{
    struct branch_predictor *at_bp = calloc(1, sizeof(struct branch_predictor));
    at_bp->cleanup = &at_branch_predictor_cleanup;
    at_bp->predict = &at_branch_predictor_predict;
    at_bp->handle_result = &at_branch_predictor_handle_result;

    // TODO allocate storage for any data necessary for this branch predictor

    return at_bp;
}

// BTFNT Branch Predictor
// ============================================================================

enum branch_direction btfnt_branch_predictor_predict(struct branch_predictor *branch_predictor,
                                                     uint32_t address)
{
    // TODO: return this branch predictors prediction for the branch at the
    // given address.
}

void btfnt_branch_predictor_handle_result(struct branch_predictor *branch_predictor,
                                          uint32_t address, enum branch_direction branch_direction)
{
    // TODO: use this function to update the state of the branch predictor
    // given the most recent branch direction.
}

void btfnt_branch_predictor_cleanup(struct branch_predictor *branch_predictor)
{
    // TODO cleanup if necessary
}

struct branch_predictor *btfnt_branch_predictor_new(uint32_t num_branches,
                                                    struct branch_metadata *branch_metadatas)
{
    struct branch_predictor *btfnt_bp = calloc(1, sizeof(struct branch_predictor));
    btfnt_bp->cleanup = &btfnt_branch_predictor_cleanup;
    btfnt_bp->predict = &btfnt_branch_predictor_predict;
    btfnt_bp->handle_result = &btfnt_branch_predictor_handle_result;

    // TODO allocate storage for any data necessary for this branch predictor

    return btfnt_bp;
}

// LTG Branch Predictor
// ============================================================================

enum branch_direction ltg_branch_predictor_predict(struct branch_predictor *branch_predictor,
                                                   uint32_t address)
{
    // TODO: return this branch predictors prediction for the branch at the
    // given address.
}

void ltg_branch_predictor_handle_result(struct branch_predictor *branch_predictor, uint32_t address,
                                        enum branch_direction branch_direction)
{
    // TODO: use this function to update the state of the branch predictor
    // given the most recent branch direction.
}

void ltg_branch_predictor_cleanup(struct branch_predictor *branch_predictor)
{
    // TODO cleanup if necessary
}

struct branch_predictor *ltg_branch_predictor_new(uint32_t num_branches,
                                                  struct branch_metadata *branch_metadatas)
{
    struct branch_predictor *ltg_bp = calloc(1, sizeof(struct branch_predictor));
    ltg_bp->cleanup = &ltg_branch_predictor_cleanup;
    ltg_bp->predict = &ltg_branch_predictor_predict;
    ltg_bp->handle_result = &ltg_branch_predictor_handle_result;

    // TODO allocate storage for any data necessary for this branch predictor

    return ltg_bp;
}

// LTL Branch Predictor
// ============================================================================

enum branch_direction ltl_branch_predictor_predict(struct branch_predictor *branch_predictor,
                                                   uint32_t address)
{
    // TODO: return this branch predictors prediction for the branch at the
    // given address.
}

void ltl_branch_predictor_handle_result(struct branch_predictor *branch_predictor, uint32_t address,
                                        enum branch_direction branch_direction)
{
    // TODO: use this function to update the state of the branch predictor
    // given the most recent branch direction.
}

void ltl_branch_predictor_cleanup(struct branch_predictor *branch_predictor)
{
    // TODO cleanup if necessary
}

struct branch_predictor *ltl_branch_predictor_new(uint32_t num_branches,
                                                  struct branch_metadata *branch_metadatas)
{
    struct branch_predictor *ltl_bp = calloc(1, sizeof(struct branch_predictor));
    ltl_bp->cleanup = &ltl_branch_predictor_cleanup;
    ltl_bp->predict = &ltl_branch_predictor_predict;
    ltl_bp->handle_result = &ltl_branch_predictor_handle_result;

    // TODO allocate storage for any data necessary for this branch predictor

    return ltl_bp;
}

// 2BG Branch Predictor
// ============================================================================

enum branch_direction tbg_branch_predictor_predict(struct branch_predictor *branch_predictor,
                                                   uint32_t address)
{
    // TODO: return this branch predictors prediction for the branch at the
    // given address.
}

void tbg_branch_predictor_handle_result(struct branch_predictor *branch_predictor, uint32_t address,
                                        enum branch_direction branch_direction)
{
    // TODO: use this function to update the state of the branch predictor
    // given the most recent branch direction.
}

void tbg_branch_predictor_cleanup(struct branch_predictor *branch_predictor)
{
    // TODO cleanup if necessary
}

struct branch_predictor *tbg_branch_predictor_new(uint32_t num_branches,
                                                  struct branch_metadata *branch_metadatas)
{
    struct branch_predictor *tbg_bp = calloc(1, sizeof(struct branch_predictor));
    tbg_bp->cleanup = &tbg_branch_predictor_cleanup;
    tbg_bp->predict = &tbg_branch_predictor_predict;
    tbg_bp->handle_result = &tbg_branch_predictor_handle_result;

    // TODO allocate storage for any data necessary for this branch predictor

    return tbg_bp;
}

// 2BL Branch Predictor
// ============================================================================

enum branch_direction tbl_branch_predictor_predict(struct branch_predictor *branch_predictor,
                                                   uint32_t address)
{
    // TODO: return this branch predictors prediction for the branch at the
    // given address.
}

void tbl_branch_predictor_handle_result(struct branch_predictor *branch_predictor, uint32_t address,
                                        enum branch_direction branch_direction)
{
    // TODO: use this function to update the state of the branch predictor
    // given the most recent branch direction.
}

void tbl_branch_predictor_cleanup(struct branch_predictor *branch_predictor)
{
    // TODO cleanup if necessary
}

struct branch_predictor *tbl_branch_predictor_new(uint32_t num_branches,
                                                  struct branch_metadata *branch_metadatas)
{
    struct branch_predictor *tbl_bp = calloc(1, sizeof(struct branch_predictor));
    tbl_bp->cleanup = &tbl_branch_predictor_cleanup;
    tbl_bp->predict = &tbl_branch_predictor_predict;
    tbl_bp->handle_result = &tbl_branch_predictor_handle_result;

    // TODO allocate storage for any data necessary for this branch predictor

    return tbl_bp;
}
