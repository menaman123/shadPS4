// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <QDialog>

#include "common/config.h"
#include "common/path_util.h"

class QLineEdit;

class GameInstallDialog final : public QDialog {
public:
    GameInstallDialog();
    ~GameInstallDialog();

private slots:
    void Browse();

private:
    QWidget* SetupGamesDirectory();
    QWidget* SetupDialogActions();
    void Save();

private:
    QLineEdit* m_gamesDirectory;
};