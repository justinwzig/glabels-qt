/*  Paper.h
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef libglabels_Paper_h
#define libglabels_Paper_h


#include <QString>


namespace libglabels
{

	class Paper
	{
	public:
		Paper( const QString &id,
		       const QString &name,
		       double         width,
		       double         height,
		       const QString &pwgSize ) : mId(id), mName(name), mWidth(width), mHeight(height), mPwgSize(pwgSize)
		{
		}

		inline const QString &id() const { return mId; }

		inline const QString &name() const { return mName; }

		/* Width (in points) */
		inline double width() const { return mWidth; }

		/* Height (in points) */
		inline double height() const { return mHeight; }

		/* PWG 5101.1-2002 size name */
		inline QString pwgSize() const { return mPwgSize; }

		inline bool isSizeIso() const { return mPwgSize.startsWith( "iso_" ); }
		inline bool isSizeUs() const { return mPwgSize.startsWith( "na_" ); }

	private:
		QString mId;
		QString mName;
		double  mWidth;
		double  mHeight;
		QString mPwgSize;
	};

}

#endif // libglabels_Paper_h
