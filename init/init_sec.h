#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_G610F = 0,
    VARIANT_G610L,
    VARIANT_G610K,
    VARIANT_G610S,
    VARIANT_G610M,
    VARIANT_G610Y,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant G610F_model = {
    .model = "SM-G610F",
    .codename = "on7xeltedd"
};

static const variant G610L_model = {
    .model = "SM-G610L",
    .codename = "on7xeltekl"
};

static const variant G610K_model = {
    .model = "SM-G610K",
    .codename = "on7xeltekk"
};

static const variant G610S_model = {
    .model = "SM-G610S",
    .codename = "on7xelteks"
};

static const variant G610M_model = {
    .model = "SM-G610M",
    .codename = "on7xelteub"
};

static const variant G610Y_model = {
    .model = "SM-G610Y",
    .codename = "on7xeltezt"
};

static const variant *all_variants[VARIANT_MAX] = {
    &G610F_model,
    &G610L_model,
    &G610K_model,
    &G610S_model,
    &G610M_model,
    &G610Y_model
};

#endif // INIT_SEC_H
