/* GStreamer
 * Copyright (C) <2009> Sebastian Dröge <sebastian.droege@collabora.co.uk>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __MXF_QUARK_H__
#define __MXF_QUARK_H__

#include <gst/gst.h>

typedef enum {
  MXF_QUARK_INSTANCE_UID = 0,
  MXF_QUARK_GENERATION_UID = 1,
  MXF_QUARK_OTHER_TAGS = 2,
  MXF_QUARK_TAG = 3,
  MXF_QUARK_DATA = 4,
  MXF_QUARK_PREFACE = 5,
  MXF_QUARK_LAST_MODIFIED_DATE = 6,
  MXF_QUARK_VERSION = 7,
  MXF_QUARK_OBJECT_MODEL_VERSION = 8,
  MXF_QUARK_PRIMARY_PACKAGE = 9,
  MXF_QUARK_IDENTIFICATIONS = 10,
  MXF_QUARK_CONTENT_STORAGE = 11,
  MXF_QUARK_OPERATIONAL_PATTERN = 12,
  MXF_QUARK_ESSENCE_CONTAINERS = 13,
  MXF_QUARK_DM_SCHEMES = 14,
  MXF_QUARK_IDENTIFICATION = 15,
  MXF_QUARK_THIS_GENERATION_UID = 16,
  MXF_QUARK_COMPANY_NAME = 17,
  MXF_QUARK_PRODUCT_NAME = 18,
  MXF_QUARK_PRODUCT_VERSION = 19,
  MXF_QUARK_VERSION_STRING = 20,
  MXF_QUARK_PRODUCT_UID = 21,
  MXF_QUARK_MODIFICATION_DATE = 22,
  MXF_QUARK_TOOLKIT_VERSION = 23,
  MXF_QUARK_PLATFORM = 24,
  MXF_QUARK_PACKAGES = 25,
  MXF_QUARK_ESSENCE_CONTAINER_DATA = 26,
  MXF_QUARK_LINKED_PACKAGE = 27,
  MXF_QUARK_INDEX_SID = 28,
  MXF_QUARK_BODY_SID = 29,
  MXF_QUARK_PACKAGE_UID = 30,
  MXF_QUARK_NAME = 31,
  MXF_QUARK_PACKAGE_CREATION_DATE = 32,
  MXF_QUARK_PACKAGE_MODIFIED_DATE = 33,
  MXF_QUARK_TRACKS = 34,
  MXF_QUARK_MATERIAL_PACKAGE = 35,
  MXF_QUARK_SOURCE_PACKAGE = 36,
  MXF_QUARK_DESCRIPTOR = 37,
  MXF_QUARK_TRACK_ID = 38,
  MXF_QUARK_TRACK_NUMBER = 39,
  MXF_QUARK_TRACK_NAME = 40,
  MXF_QUARK_SEQUENCE = 41,
  MXF_QUARK_TIMELINE_TRACK = 42,
  MXF_QUARK_EDIT_RATE = 43,
  MXF_QUARK_ORIGIN = 44,
  MXF_QUARK_EVENT_TRACK = 45,
  MXF_QUARK_EVENT_EDIT_RATE = 46,
  MXF_QUARK_EVENT_ORIGIN = 47,
  MXF_QUARK_STATIC_TRACK = 48,
  MXF_QUARK_DATA_DEFINITION = 49,
  MXF_QUARK_DURATION = 50,
  MXF_QUARK_STRUCTURAL_COMPONENTS = 51,
  MXF_QUARK_TIMECODE_COMPONENT = 52,
  MXF_QUARK_START_TIMECODE = 53,
  MXF_QUARK_ROUNDED_TIMECODE_BASE = 54,
  MXF_QUARK_DROP_FRAME = 55,
  MXF_QUARK_SOURCE_CLIP = 56,
  MXF_QUARK_START_POSITION = 57,
  MXF_QUARK_SOURCE_TRACK_ID = 58,
  MXF_QUARK_DM_SOURCE_CLIP = 59,
  MXF_QUARK_TRACK_IDS = 60,
  MXF_QUARK_DM_SEGMENT = 61,
  MXF_QUARK_EVENT_START_POSITION = 62,
  MXF_QUARK_EVENT_COMMENT = 63,
  MXF_QUARK_DM_FRAMEWORK = 64,
  MXF_QUARK_LOCATORS = 65,
  MXF_QUARK_FILE_DESCRIPTOR = 66,
  MXF_QUARK_LINKED_TRACK_ID = 67,
  MXF_QUARK_SAMPLE_RATE = 68,
  MXF_QUARK_CONTAINER_DURATION = 69,
  MXF_QUARK_ESSENCE_CONTAINER = 70,
  MXF_QUARK_CODEC = 71,
  MXF_QUARK_GENERIC_PICTURE_ESSENCE_DESCRIPTOR = 72,
  MXF_QUARK_SIGNAL_STANDARD = 73,
  MXF_QUARK_FRAME_LAYOUT = 74,
  MXF_QUARK_STORED_WIDTH = 75,
  MXF_QUARK_STORED_HEIGHT = 76,
  MXF_QUARK_STORED_F2_OFFSET = 77,
  MXF_QUARK_SAMPLED_WIDTH = 78,
  MXF_QUARK_SAMPLED_HEIGHT = 79,
  MXF_QUARK_SAMPLED_X_OFFSET = 80,
  MXF_QUARK_SAMPLED_Y_OFFSET = 81,
  MXF_QUARK_DISPLAY_HEIGHT = 82,
  MXF_QUARK_DISPLAY_WIDTH = 83,
  MXF_QUARK_DISPLAY_X_OFFSET = 84,
  MXF_QUARK_DISPLAY_Y_OFFSET = 85,
  MXF_QUARK_DISPLAY_F2_OFFSET = 86,
  MXF_QUARK_ASPECT_RATIO = 87,
  MXF_QUARK_ACTIVE_FORMAT_DESCRIPTOR = 88,
  MXF_QUARK_VIDEO_LINE_MAP_0 = 89,
  MXF_QUARK_VIDEO_LINE_MAP_1 = 90,
  MXF_QUARK_ALPHA_TRANSPARENCY = 91,
  MXF_QUARK_CAPTURE_GAMMA = 92,
  MXF_QUARK_IMAGE_ALIGNMENT_OFFSET = 93,
  MXF_QUARK_IMAGE_START_OFFSET = 94,
  MXF_QUARK_IMAGE_END_OFFSET = 95,
  MXF_QUARK_FIELD_DOMINANCE = 96,
  MXF_QUARK_PICTURE_ESSENCE_CODING = 97,
  MXF_QUARK_CDCI_PICTURE_ESSENCE_DESCRIPTOR = 98,
  MXF_QUARK_COMPONENT_DEPTH = 99,
  MXF_QUARK_HORIZONTAL_SUBSAMPLING = 100,
  MXF_QUARK_VERTICAL_SUBSAMPLING = 101,
  MXF_QUARK_COLOR_SITING = 102,
  MXF_QUARK_REVERSED_BYTE_ORDER = 103,
  MXF_QUARK_PADDING_BITS = 104,
  MXF_QUARK_ALPHA_SAMPLE_DEPTH = 105,
  MXF_QUARK_BLACK_REF_LEVEL = 106,
  MXF_QUARK_WHITE_REF_LEVEL = 107,
  MXF_QUARK_COLOR_RANGE = 108,
  MXF_QUARK_RGBA_PICTURE_ESSENCE_DESCRIPTOR = 109,
  MXF_QUARK_COMPONENT_MAX_REF = 110,
  MXF_QUARK_COMPONENT_MIN_REF = 111,
  MXF_QUARK_ALPHA_MAX_REF = 112,
  MXF_QUARK_ALPHA_MIN_REF = 113,
  MXF_QUARK_SCANNING_DIRECTION = 114,
  MXF_QUARK_PIXEL_LAYOUT = 115,
  MXF_QUARK_GENERIC_SOUND_ESSENCE_DESCRIPTOR = 116,
  MXF_QUARK_AUDIO_SAMPLING_RATE = 117,
  MXF_QUARK_LOCKED = 118,
  MXF_QUARK_AUDIO_REF_LEVEL = 119,
  MXF_QUARK_ELECTRO_SPATIAL_FORMULATION = 120,
  MXF_QUARK_CHANNEL_COUNT = 121,
  MXF_QUARK_QUANTIZATION_BITS = 122,
  MXF_QUARK_DIAL_NORM = 123,
  MXF_QUARK_SOUND_ESSENCE_COMPRESSION = 124,
  MXF_QUARK_GENERIC_DATA_ESSENCE_DESCRIPTOR = 125,
  MXF_QUARK_DATA_ESSENCE_CODING = 126,
  MXF_QUARK_MULTIPLE_DESCRIPTOR = 127,
  MXF_QUARK_SUB_DESCRIPTORS = 128,
  MXF_QUARK_TEXT_LOCATOR = 129,
  MXF_QUARK_LOCATOR_NAME = 130,
  MXF_QUARK_NETWORK_LOCATOR = 131,
  MXF_QUARK_URL_STRING = 132,
  MXF_QUARK_WAVE_AUDIO_ESSENCE_DESCRIPTOR = 133,
  MXF_QUARK_BLOCK_ALIGN = 134,
  MXF_QUARK_SEQUENCE_OFFSET = 135,
  MXF_QUARK_AVG_BPS = 136,
  MXF_QUARK_CHANNEL_ASSIGNMENT = 137,
  MXF_QUARK_PEAK_ENVELOPE_VERSION = 138,
  MXF_QUARK_PEAK_ENVELOPE_FORMAT = 139,
  MXF_QUARK_POINTS_PER_PEAK_VALUE = 140,
  MXF_QUARK_PEAK_ENVELOPE_BLOCK_SIZE = 141,
  MXF_QUARK_PEAK_CHANNELS = 142,
  MXF_QUARK_PEAK_FRAMES = 143,
  MXF_QUARK_PEAK_OF_PEAKS_POSITION = 144,
  MXF_QUARK_PEAK_ENVELOPE_TIMESTAMP = 145,
  MXF_QUARK_PEAK_ENVELOPE_DATA = 146,
  MXF_QUARK_AES3_AUDIO_ESSENCE_DESCRIPTOR = 147,
  MXF_QUARK_EMPHASIS = 148,
  MXF_QUARK_BLOCK_START_OFFSET = 149,
  MXF_QUARK_AUXILIARY_BITS_MODE = 150,
  MXF_QUARK_CHANNEL_STATUS_MODE = 151,
  MXF_QUARK_FIXED_CHANNEL_STATUS_DATA = 152,
  MXF_QUARK_USER_DATA_MODE = 153,
  MXF_QUARK_FIXED_USER_DATA = 154,
  MXF_QUARK_LINKED_TIMECODE_TRACK_ID = 155,
  MXF_QUARK_STREAM_NUMBER = 156,
  MXF_QUARK_MPEG_VIDEO_DESCRIPTOR = 157,
  MXF_QUARK_SINGLE_SEQUENCE = 158,
  MXF_QUARK_CONST_B_FRAMES = 159,
  MXF_QUARK_CODED_CONTENT_TYPE = 160,
  MXF_QUARK_LOW_DELAY = 161,
  MXF_QUARK_CLOSED_GOP = 162,
  MXF_QUARK_IDENTICAL_GOP = 163,
  MXF_QUARK_MAX_GOP = 164,
  MXF_QUARK_B_PICTURE_COUNT = 165,
  MXF_QUARK_BITRATE = 166,
  MXF_QUARK_PROFILE_AND_LEVEL = 167,
  MXF_QUARK_FILLER = 168,

  MXF_QUARK_MAX
} MXFQuarkId;

extern GQuark _mxf_quark_table[MXF_QUARK_MAX];

#define MXF_QUARK(q) _mxf_quark_table[MXF_QUARK_##q]

void mxf_quark_initialize (void);

#endif /* __MXF_QUARK_H__ */
