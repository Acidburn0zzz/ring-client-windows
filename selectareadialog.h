/***************************************************************************
 * Copyright (C) 2015-2017 by Savoir-faire Linux                                *
 * Author: Edric Ladent Milaret <edric.ladent-milaret@savoirfairelinux.com>*
 *                                                                         *
 * This program is free software; you can redistribute it and/or modify    *
 * it under the terms of the GNU General Public License as published by    *
 * the Free Software Foundation; either version 3 of the License, or       *
 * (at your option) any later version.                                     *
 *                                                                         *
 * This program is distributed in the hope that it will be useful,         *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU General Public License for more details.                            *
 *                                                                         *
 * You should have received a copy of the GNU General Public License       *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.   *
 **************************************************************************/

#pragma once

#include <QDialog>
#include <QMouseEvent>
#include <QRubberBand>
#include <QDialog>
#include <QPixmap>

class SelectAreaDialog : public QDialog
{
    Q_OBJECT
public:
    SelectAreaDialog();
protected:
     void mousePressEvent(QMouseEvent* event);
     void mouseMoveEvent(QMouseEvent* event);
     void mouseReleaseEvent(QMouseEvent* event);
     void paintEvent(QPaintEvent* event);
private:
     QPoint origin_;
     QDialog transDialog_;
     QRubberBand* rubberBand_;
     QPixmap originalPixmap_;
};

