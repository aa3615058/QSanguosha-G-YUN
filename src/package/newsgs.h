/********************************************************************
    Copyright (c) 2013-2015 - Mogara

    This file is part of QSanguosha-Hegemony.

    This game is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 3.0
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    See the LICENSE file for more details.

    Mogara
    *********************************************************************/

#ifndef NEWSGS
#define NEWSGS

#include "package.h"
#include "card.h"
#include "wrappedcard.h"
#include "skill.h"
#include "standard.h"
#include "generaloverview.h"












class ManoeuvrePackage : public Package
{
    Q_OBJECT

public:
    ManoeuvrePackage();
};

ADD_PACKAGE(Manoeuvre)

#endif // NEWSGS

