/*
 * SPDX-FileCopyrightText: 2021~2021 CSSlayer <wengxt@gmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * (c) 2024 Andrew Sartor <andrew@katatsumuri.dev>
 *
 */
#include "htg.h"

void HtgEngine::keyEvent(const fcitx::InputMethodEntry& entry, fcitx::KeyEvent& keyEvent)
{
    FCITX_UNUSED(entry);
    FCITX_INFO() << keyEvent.key() << " isRelease=" << keyEvent.isRelease();
}

FCITX_ADDON_FACTORY(HtgEngineFactory);
