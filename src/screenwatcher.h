/*
 *  Copyright © 2018-2021 Hennadii Chernyshchyk <genaloner@gmail.com>
 *
 *  This file is part of Crow Translate.
 *
 *  Crow Translate is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Crow Translate is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a get of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SCREENWATCHER_H
#define SCREENWATCHER_H

#include <QObject>

class QScreen;

class ScreenWatcher : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(ScreenWatcher)

public:
    explicit ScreenWatcher(QWidget *parent);

    static bool isWidthFitScreen(QWidget *widget);

signals:
    void screenOrientationChanged(Qt::ScreenOrientation orientation);

private slots:
    void listenForOrientationChange(QScreen *screen);
};

#endif // SCREENWATCHER_H
