/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-2003 Peter Mattis and Spencer Kimball
 *
 * gimptextlayer_pdb.c
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <https://www.gnu.org/licenses/>.
 */

/* NOTE: This file is auto-generated by pdbgen.pl */

#include "config.h"

#include "gimp.h"


/**
 * SECTION: gimptextlayer
 * @title: gimptextlayer
 * @short_description: Functions for querying and manipulating text layers.
 *
 * Functions for querying and manipulating text layers.
 **/


/**
 * gimp_text_layer_new:
 * @image_ID: The image.
 * @text: The text to generate (in UTF-8 encoding).
 * @fontname: The name of the font.
 * @size: The size of text in either pixels or points.
 * @unit: The units of specified size.
 *
 * Creates a new text layer.
 *
 * This procedure creates a new text layer. The arguments are kept as
 * simple as necessary for the normal case. All text attributes,
 * however, can be modified with the appropriate
 * gimp_text_layer_set_*() procedures. The new layer still needs to be
 * added to the image, as this is not automatic. Add the new layer
 * using gimp_image_insert_layer().
 *
 * Returns: The new text layer.
 *
 * Since: 2.6
 **/
gint32
gimp_text_layer_new (gint32       image_ID,
                     const gchar *text,
                     const gchar *fontname,
                     gdouble      size,
                     GimpUnit     unit)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gint32 layer_ID = -1;

  return_vals = gimp_run_procedure ("gimp-text-layer-new",
                                    &nreturn_vals,
                                    GIMP_PDB_IMAGE, image_ID,
                                    GIMP_PDB_STRING, text,
                                    GIMP_PDB_STRING, fontname,
                                    GIMP_PDB_FLOAT, size,
                                    GIMP_PDB_INT32, unit,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    layer_ID = return_vals[1].data.d_layer;

  gimp_destroy_params (return_vals, nreturn_vals);

  return layer_ID;
}

/**
 * gimp_text_layer_get_text:
 * @layer_ID: The text layer.
 *
 * Get the text from a text layer as string.
 *
 * This procedure returns the text from a text layer as a string.
 *
 * Returns: The text from the specified text layer.
 *
 * Since: 2.6
 **/
gchar *
gimp_text_layer_get_text (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gchar *text = NULL;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-text",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    text = g_strdup (return_vals[1].data.d_string);

  gimp_destroy_params (return_vals, nreturn_vals);

  return text;
}

/**
 * gimp_text_layer_set_text:
 * @layer_ID: The text layer.
 * @text: The new text to set.
 *
 * Set the text of a text layer.
 *
 * This procedure changes the text of a text layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_text (gint32       layer_ID,
                          const gchar *text)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-text",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_STRING, text,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_markup:
 * @layer_ID: The text layer.
 *
 * Get the markup from a text layer as string.
 *
 * This procedure returns the markup of the styles from a text layer.
 * The markup will be in the form of Pango's markup - See
 * https://www.pango.org/ for more information about Pango and its
 * markup. Note: Setting the markup of a text layer using Pango's
 * markup is not supported for now.
 *
 * Returns: The markup which represents the style of the specified text
 * layer.
 *
 * Since: 2.8
 **/
gchar *
gimp_text_layer_get_markup (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gchar *markup = NULL;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-markup",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    markup = g_strdup (return_vals[1].data.d_string);

  gimp_destroy_params (return_vals, nreturn_vals);

  return markup;
}

/**
 * gimp_text_layer_get_font:
 * @layer_ID: The text layer.
 *
 * Get the font from a text layer as string.
 *
 * This procedure returns the name of the font from a text layer.
 *
 * Returns: The font which is used in the specified text layer.
 *
 * Since: 2.6
 **/
gchar *
gimp_text_layer_get_font (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gchar *font = NULL;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-font",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    font = g_strdup (return_vals[1].data.d_string);

  gimp_destroy_params (return_vals, nreturn_vals);

  return font;
}

/**
 * gimp_text_layer_set_font:
 * @layer_ID: The text layer.
 * @font: The new font to use.
 *
 * Set the font of a text layer.
 *
 * This procedure modifies the font used in the specified text layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_font (gint32       layer_ID,
                          const gchar *font)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-font",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_STRING, font,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_font_size:
 * @layer_ID: The text layer.
 * @unit: The unit used for the font size.
 *
 * Get the font size from a text layer.
 *
 * This procedure returns the size of the font which is used in a text
 * layer. You will receive the size as a float 'font-size' in 'unit'
 * units.
 *
 * Returns: The font size.
 *
 * Since: 2.6
 **/
gdouble
gimp_text_layer_get_font_size (gint32    layer_ID,
                               GimpUnit *unit)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gdouble font_size = 0.0;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-font-size",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    {
      font_size = return_vals[1].data.d_float;
      *unit = return_vals[2].data.d_unit;
    }

  gimp_destroy_params (return_vals, nreturn_vals);

  return font_size;
}

/**
 * gimp_text_layer_set_font_size:
 * @layer_ID: The text layer.
 * @font_size: The font size.
 * @unit: The unit to use for the font size.
 *
 * Set the font size.
 *
 * This procedure changes the font size of a text layer. The size of
 * your font will be a double 'font-size' of 'unit' units.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_font_size (gint32   layer_ID,
                               gdouble  font_size,
                               GimpUnit unit)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-font-size",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_FLOAT, font_size,
                                    GIMP_PDB_INT32, unit,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_antialias:
 * @layer_ID: The text layer.
 *
 * Check if antialiasing is used in the text layer.
 *
 * This procedure checks if antialiasing is enabled in the specified
 * text layer.
 *
 * Returns: A flag which is true if antialiasing is used for rendering
 * the font in the text layer.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_get_antialias (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean antialias = FALSE;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-antialias",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    antialias = return_vals[1].data.d_int32;

  gimp_destroy_params (return_vals, nreturn_vals);

  return antialias;
}

/**
 * gimp_text_layer_set_antialias:
 * @layer_ID: The text layer.
 * @antialias: Enable/disable antialiasing of the text.
 *
 * Enable/disable anti-aliasing in a text layer.
 *
 * This procedure enables or disables anti-aliasing of the text in a
 * text layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_antialias (gint32   layer_ID,
                               gboolean antialias)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-antialias",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_INT32, antialias,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_hint_style:
 * @layer_ID: The text layer.
 *
 * Get information about hinting in the specified text layer.
 *
 * This procedure provides information about the hinting that is being
 * used in a text layer. Hinting can be optimized for fidelity or
 * contrast or it can be turned entirely off.
 *
 * Returns: The hint style used for font outlines.
 *
 * Since: 2.8
 **/
GimpTextHintStyle
gimp_text_layer_get_hint_style (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  GimpTextHintStyle style = 0;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-hint-style",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    style = return_vals[1].data.d_int32;

  gimp_destroy_params (return_vals, nreturn_vals);

  return style;
}

/**
 * gimp_text_layer_set_hint_style:
 * @layer_ID: The text layer.
 * @style: The new hint style.
 *
 * Control how font outlines are hinted in a text layer.
 *
 * This procedure sets the hint style for font outlines in a text
 * layer. This controls whether to fit font outlines to the pixel grid,
 * and if so, whether to optimize for fidelity or contrast.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.8
 **/
gboolean
gimp_text_layer_set_hint_style (gint32            layer_ID,
                                GimpTextHintStyle style)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-hint-style",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_INT32, style,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_kerning:
 * @layer_ID: The text layer.
 *
 * Check if kerning is used in the text layer.
 *
 * This procedure checks if kerning is enabled in the specified text
 * layer.
 *
 * Returns: A flag which is true if kerning is used in the text layer.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_get_kerning (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean kerning = FALSE;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-kerning",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    kerning = return_vals[1].data.d_int32;

  gimp_destroy_params (return_vals, nreturn_vals);

  return kerning;
}

/**
 * gimp_text_layer_set_kerning:
 * @layer_ID: The text layer.
 * @kerning: Enable/disable kerning in the text.
 *
 * Enable/disable kerning in a text layer.
 *
 * This procedure enables or disables kerning in a text layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_kerning (gint32   layer_ID,
                             gboolean kerning)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-kerning",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_INT32, kerning,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_language:
 * @layer_ID: The text layer.
 *
 * Get the language used in the text layer.
 *
 * This procedure returns the language string which is set for the text
 * in the text layer.
 *
 * Returns: The language used in the text layer.
 *
 * Since: 2.6
 **/
gchar *
gimp_text_layer_get_language (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gchar *language = NULL;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-language",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    language = g_strdup (return_vals[1].data.d_string);

  gimp_destroy_params (return_vals, nreturn_vals);

  return language;
}

/**
 * gimp_text_layer_set_language:
 * @layer_ID: The text layer.
 * @language: The new language to use for the text layer.
 *
 * Set the language of the text layer.
 *
 * This procedure sets the language of the text in text layer. For some
 * scripts the language has an influence of how the text is rendered.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_language (gint32       layer_ID,
                              const gchar *language)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-language",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_STRING, language,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_base_direction:
 * @layer_ID: The text layer.
 *
 * Get the base direction used for rendering the text layer.
 *
 * This procedure returns the base direction used for rendering the
 * text in the text layer
 *
 * Returns: The based direction used for the text layer.
 *
 * Since: 2.6
 **/
GimpTextDirection
gimp_text_layer_get_base_direction (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  GimpTextDirection direction = 0;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-base-direction",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    direction = return_vals[1].data.d_int32;

  gimp_destroy_params (return_vals, nreturn_vals);

  return direction;
}

/**
 * gimp_text_layer_set_base_direction:
 * @layer_ID: The text layer.
 * @direction: The base direction of the text.
 *
 * Set the base direction in the text layer.
 *
 * This procedure sets the base direction used in applying the Unicode
 * bidirectional algorithm when rendering the text.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_base_direction (gint32            layer_ID,
                                    GimpTextDirection direction)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-base-direction",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_INT32, direction,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_justification:
 * @layer_ID: The text layer.
 *
 * Get the text justification information of the text layer.
 *
 * This procedure returns the alignment of the lines in the text layer
 * relative to each other.
 *
 * Returns: The justification used in the text layer.
 *
 * Since: 2.6
 **/
GimpTextJustification
gimp_text_layer_get_justification (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  GimpTextJustification justify = 0;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-justification",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    justify = return_vals[1].data.d_int32;

  gimp_destroy_params (return_vals, nreturn_vals);

  return justify;
}

/**
 * gimp_text_layer_set_justification:
 * @layer_ID: The text layer.
 * @justify: The justification for your text.
 *
 * Set the justification of the text in a text layer.
 *
 * This procedure sets the alignment of the lines in the text layer
 * relative to each other.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_justification (gint32                layer_ID,
                                   GimpTextJustification justify)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-justification",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_INT32, justify,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_color:
 * @layer_ID: The text layer.
 * @color: The color of the text.
 *
 * Get the color of the text in a text layer.
 *
 * This procedure returns the color of the text in a text layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_get_color (gint32   layer_ID,
                           GimpRGB *color)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-color",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  if (success)
    *color = return_vals[1].data.d_color;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_set_color:
 * @layer_ID: The text layer.
 * @color: The color to use for the text.
 *
 * Set the color of the text in the text layer.
 *
 * This procedure sets the text color in the text layer 'layer'.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_color (gint32         layer_ID,
                           const GimpRGB *color)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-color",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_COLOR, color,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_indent:
 * @layer_ID: The text layer.
 *
 * Get the line indentation of text layer.
 *
 * This procedure returns the indentation of the first line in a text
 * layer.
 *
 * Returns: The indentation value of the first line.
 *
 * Since: 2.6
 **/
gdouble
gimp_text_layer_get_indent (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gdouble indent = 0.0;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-indent",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    indent = return_vals[1].data.d_float;

  gimp_destroy_params (return_vals, nreturn_vals);

  return indent;
}

/**
 * gimp_text_layer_set_indent:
 * @layer_ID: The text layer.
 * @indent: The indentation for the first line.
 *
 * Set the indentation of the first line in a text layer.
 *
 * This procedure sets the indentation of the first line in the text
 * layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_indent (gint32  layer_ID,
                            gdouble indent)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-indent",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_FLOAT, indent,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_line_spacing:
 * @layer_ID: The text layer.
 *
 * Get the spacing between lines of text.
 *
 * This procedure returns the line-spacing between lines of text in a
 * text layer.
 *
 * Returns: The line-spacing value.
 *
 * Since: 2.6
 **/
gdouble
gimp_text_layer_get_line_spacing (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gdouble line_spacing = 0.0;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-line-spacing",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    line_spacing = return_vals[1].data.d_float;

  gimp_destroy_params (return_vals, nreturn_vals);

  return line_spacing;
}

/**
 * gimp_text_layer_set_line_spacing:
 * @layer_ID: The text layer.
 * @line_spacing: The additional line spacing to use.
 *
 * Adjust the line spacing in a text layer.
 *
 * This procedure sets the additional spacing used between lines a text
 * layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_line_spacing (gint32  layer_ID,
                                  gdouble line_spacing)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-line-spacing",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_FLOAT, line_spacing,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_letter_spacing:
 * @layer_ID: The text layer.
 *
 * Get the letter spacing used in a text layer.
 *
 * This procedure returns the additional spacing between the single
 * glyphs in a text layer.
 *
 * Returns: The letter-spacing value.
 *
 * Since: 2.6
 **/
gdouble
gimp_text_layer_get_letter_spacing (gint32 layer_ID)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gdouble letter_spacing = 0.0;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-letter-spacing",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    letter_spacing = return_vals[1].data.d_float;

  gimp_destroy_params (return_vals, nreturn_vals);

  return letter_spacing;
}

/**
 * gimp_text_layer_set_letter_spacing:
 * @layer_ID: The text layer.
 * @letter_spacing: The additional letter spacing to use.
 *
 * Adjust the letter spacing in a text layer.
 *
 * This procedure sets the additional spacing between the single glyphs
 * in a text layer.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_letter_spacing (gint32  layer_ID,
                                    gdouble letter_spacing)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-letter-spacing",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_FLOAT, letter_spacing,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_resize:
 * @layer_ID: The text layer.
 * @width: The new box width in pixels.
 * @height: The new box height in pixels.
 *
 * Resize the box of a text layer.
 *
 * This procedure changes the width and height of a text layer while
 * keeping it as a text layer and not converting it to a bitmap like
 * gimp_layer_resize() would do.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.8
 **/
gboolean
gimp_text_layer_resize (gint32  layer_ID,
                        gdouble width,
                        gdouble height)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-resize",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_FLOAT, width,
                                    GIMP_PDB_FLOAT, height,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}

/**
 * gimp_text_layer_get_hinting:
 * @layer_ID: The text layer.
 * @autohint: A flag which is true if the text layer is forced to use the autohinter from FreeType.
 *
 * Deprecated: Use gimp_text_layer_get_hint_style() instead.
 *
 * Returns: A flag which is true if hinting is used on the font.
 **/
gboolean
gimp_text_layer_get_hinting (gint32    layer_ID,
                             gboolean *autohint)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean hinting = FALSE;

  return_vals = gimp_run_procedure ("gimp-text-layer-get-hinting",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_END);

  if (return_vals[0].data.d_status == GIMP_PDB_SUCCESS)
    {
      hinting = return_vals[1].data.d_int32;
      *autohint = return_vals[2].data.d_int32;
    }

  gimp_destroy_params (return_vals, nreturn_vals);

  return hinting;
}

/**
 * gimp_text_layer_set_hinting:
 * @layer_ID: The text layer.
 * @hinting: Enable/disable the use of hinting on the text.
 * @autohint: Force the use of the autohinter provided through FreeType.
 *
 * Enable/disable the use of hinting in a text layer.
 *
 * This procedure enables or disables hinting on the text of a text
 * layer. If you enable 'auto-hint', FreeType\'s automatic hinter will
 * be used and hinting information from the font will be ignored.
 *
 * Deprecated: Use gimp_text_layer_set_hint_style() instead.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.6
 **/
gboolean
gimp_text_layer_set_hinting (gint32   layer_ID,
                             gboolean hinting,
                             gboolean autohint)
{
  GimpParam *return_vals;
  gint nreturn_vals;
  gboolean success = TRUE;

  return_vals = gimp_run_procedure ("gimp-text-layer-set-hinting",
                                    &nreturn_vals,
                                    GIMP_PDB_LAYER, layer_ID,
                                    GIMP_PDB_INT32, hinting,
                                    GIMP_PDB_INT32, autohint,
                                    GIMP_PDB_END);

  success = return_vals[0].data.d_status == GIMP_PDB_SUCCESS;

  gimp_destroy_params (return_vals, nreturn_vals);

  return success;
}
