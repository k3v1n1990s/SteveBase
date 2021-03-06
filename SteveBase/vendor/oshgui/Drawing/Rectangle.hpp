/*
 * OldSchoolHack GUI
 *
 * Copyright (c) 2011 KN4CK3R http://www.oldschoolhack.de
 *
 * See license in OSHGui.hpp
 */

#ifndef OSHGUI_DRAWING_RECTANGLE_HPP
#define OSHGUI_DRAWING_RECTANGLE_HPP

#include "../Exports.hpp"
#include "Point.hpp"
#include "Size.hpp"

namespace OSHGui
{
	namespace Drawing
	{
		/**
		 * Speichert einen Satz von vier ganzen Zahlen, die die Position und Gr��e
		 * eines Rechtecks angeben.
		 */
		class OSHGUI_EXPORT Rectangle
		{
		public:
			/**
			 * Erstellt ein Rechteck ohne Ausma�e.
			 */
			Rectangle();
			/**
			 * Erstellt ein Rechteckt mit den Koordinaten (0, 0, size.Width, size.Height);
			 *
			 * @param size
			 */
			Rectangle(const Size &size);
			/**
			 * Erstellt ein Rechteck an der angegeben Position mit der angegeben Gr��e.
			 *
			 * @param location
			 * @param size
			 */
			Rectangle(const Point &location, const Size &size);
			/**
			 * Erstellt ein Rechteck an der angegeben Position mit der angegeben Gr��e.
			 *
			 * @param left
			 * @param top
			 * @param width
			 * @param height
			 */
			Rectangle(int left, int top, int width, int height);
			
			/**
			 * Legt die Position des linken Rands fest.
			 *
			 * @param left
			 */
			void SetLeft(int left);
			/**
			 * Ruft die Position des linken Rands ab.
			 *
			 * @return linker Rand
			 */
			int GetLeft() const;
			/**
			 * Legt die Position des oberen Rands fest.
			 *
			 * @param top
			 */
			void SetTop(int top);
			/**
			 * Ruft die Position des oberen Rands ab.
			 *
			 * @return oberer Rand
			 */
			int GetTop() const;
			/**
			 * Legt die Breite des Rechtecks fest.
			 *
			 * @param width
			 */
			void SetWidth(int width);
			/**
			 * Ruft die Breite des Rechtecks ab.
			 *
			 * @return die Breite
			 */
			int GetWidth() const;
			/**
			 * Legt die H�he des Rechtecks fest.
			 *
			 * @param height
			 */
			void SetHeight(int height);
			/**
			 * Ruft die H�he des Rechtecks ab.
			 *
			 * @return die H�he
			 */
			int GetHeight() const;
			/**
			 * Ruft die Position des rechten Rands ab.
			 *
			 * @return rechter Rand
			 */
			int GetRight() const;
			/**
			 * Ruft die Position des unteren Rands ab.
			 *
			 * @return unterer Rand
			 */
			int GetBottom() const;
			/**
			 * Ruft die Position des Rechtecks ab.
			 *
			 * @return position
			 */
			Point GetLocation() const;
			/**
			 * Ruft die Gr��e des Rechtecks ab.
			 *
			 * @return size
			 */
			Size GetSize() const;
			
			bool operator == (const Rectangle &equal) const;
			bool operator != (const Rectangle &equal) const;
			const Rectangle operator + (const Rectangle& add) const;
			const Rectangle operator + (const Point& add) const;
			const Rectangle operator - (const Rectangle& add) const;
			const Rectangle operator - (const Point& add) const;
			
			/**
			 * Verschiebt das Rechteck um X/Y.
			 *
			 * @param left
			 * @param top
			 */
			void Offset(int left, int top);
			/**
			 * Kopiert das Rechteck und verschiebt ihn um X/Y.
			 *
			 * @param left
			 * @param top
			 * @return rectangle
			 */
			Rectangle OffsetEx(int left, int top) const;
			/**
			 * Erweitert das Rectangle-Objekt um die angegebe Breite und H�he.
			 *
			 * @param width
			 * @param height
			 */
			void Inflate(int width, int height);
			/**
			 * Kopiert das Rectangle-Objekt und erweitert es um die angegebe Breite und H�he.
			 *
			 * @param width
			 * @param height
			 * @return rectangle
			 */
			Rectangle InflateEx(int width, int height) const;
			
			/**
			 * Gibt zur�ck, ob der Punkt innerhalb des Rechtecks liegt.
			 *
			 * @param point
			 * @return ja/nein
			 */
			bool Contains(const Point &point) const;

		private:
			int left,
				top,
				width,
				height;
			int bottom,
				right;
		};
	}
}

#endif