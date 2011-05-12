/*
 * Hedgewars, a free turn based strategy game
 * Copyright (c) 2006-2011 Andrey Korotaev <unC0Rr@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef PAGE_OPTIONS_H
#define PAGE_OPTIONS_H

#include "AbstractPage.h"

class FPSEdit;
class IconedGroupBox;

class PageOptions : public AbstractPage
{
    Q_OBJECT

public:
    PageOptions(QWidget* parent = 0);

    QCheckBox *WeaponTooltip;
    QPushButton *WeaponNew;
    QPushButton *WeaponEdit;
    QPushButton *WeaponDelete;
    QComboBox *WeaponsName;
    QPushButton *SchemeNew;
    QPushButton *SchemeEdit;
    QPushButton *SchemeDelete;
    QComboBox *SchemesName;

    QComboBox *CBLanguage;

    QPushButton *BtnBack;
    IconedGroupBox *teamsBox;
    QPushButton *BtnNewTeam;
    QPushButton *BtnEditTeam;
    QPushButton *BtnDeleteTeam;
    QPushButton *BtnAssociateFiles;
    QLabel *LblNoEditTeam;
    QComboBox *CBTeamName;
    IconedGroupBox *AGGroupBox;
    QComboBox *CBResolution;
    QComboBox *CBStereoMode;
    QCheckBox *CBEnableSound;
    QCheckBox *CBEnableFrontendSound;
    QCheckBox *CBEnableMusic;
    QCheckBox *CBEnableFrontendMusic;
    QCheckBox *CBFullscreen;
    QCheckBox *CBFrontendFullscreen;
    QCheckBox *CBShowFPS;
    QCheckBox *CBAltDamage;
    QCheckBox *CBNameWithDate;
#ifdef __APPLE__
    QCheckBox *CBAutoUpdate;
#endif

    FPSEdit *fpsedit;
    QPushButton *BtnSaveOptions;
    QLabel *labelNN;
    QSpinBox * volumeBox;
    QLineEdit *editNetNick;
    QSlider *SLQuality;
    QCheckBox *CBFrontendEffects;

private:
    bool previousFullscreenValue;
    int previousResolutionIndex;
    int previousQuality;

private slots:
    void forceFullscreen(int index);
    void setFullscreen(void);
    void trimNetNick();
};

#endif
