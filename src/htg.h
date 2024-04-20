/*
 * SPDX-FileCopyrightText: 2021~2021 CSSlayer <wengxt@gmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * (c) 2024 Andrew Sartor <andrew@katatsumuri.dev>
 *
 */
#ifndef _FCITX5_HTG_HTG_H_
#define _FCITX5_HTG_HTG_H_

#include <fcitx/inputmethodengine.h>
#include <fcitx/addonfactory.h>

class HtgEngine : public fcitx::InputMethodEngineV2 {
    void keyEvent(const fcitx::InputMethodEntry & entry, fcitx::KeyEvent & keyEvent) override;
};

class HtgEngineFactory : public fcitx::AddonFactory {
    fcitx::AddonInstance * create(fcitx::AddonManager * manager) override {
        FCITX_UNUSED(manager);
        return new HtgEngine;
    }
};

#endif // _FCITX5_HTG_HTG_H
