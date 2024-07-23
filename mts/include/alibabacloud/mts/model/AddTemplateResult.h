/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_MTS_MODEL_ADDTEMPLATERESULT_H_
#define ALIBABACLOUD_MTS_MODEL_ADDTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT AddTemplateResult : public ServiceResult
			{
			public:
				struct _Template
				{
					struct Video
					{
						struct BitrateBnd
						{
							std::string min;
							std::string max;
						};
						struct NarrowBand
						{
							float maxAbrRatio;
							std::string version;
							float abrmax;
						};
						NarrowBand narrowBand;
						std::string bufsize;
						std::string hdr2sdr;
						std::string qscale;
						std::string scanMode;
						std::string preset;
						std::string longShortMode;
						std::string fps;
						std::string gop;
						std::string remove;
						BitrateBnd bitrateBnd;
						std::string pixFmt;
						std::string bitrate;
						std::string profile;
						std::string crop;
						std::string pad;
						std::string codec;
						std::string maxrate;
						std::string maxFps;
						std::string crf;
						std::string height;
						std::string degrain;
						std::string width;
						std::string resoPriority;
					};
					struct TransConfig
					{
						std::string isCheckAudioBitrate;
						std::string adjDarMethod;
						std::string isCheckAudioBitrateFail;
						std::string isCheckVideoBitrateFail;
						std::string isCheckReso;
						std::string isCheckVideoBitrate;
						std::string transMode;
						std::string isCheckResoFail;
					};
					struct MuxConfig
					{
						struct Webp
						{
							std::string loop;
						};
						struct Gif
						{
							std::string finalDelay;
							std::string loop;
							std::string ditherMode;
							std::string isCustomPalette;
						};
						struct Segment
						{
							std::string duration;
						};
						Webp webp;
						Gif gif;
						Segment segment;
					};
					struct Audio
					{
						struct Volume
						{
							std::string loudnessRangeTarget;
							std::string truePeak;
							std::string integratedLoudnessTarget;
							std::string level;
							std::string method;
							std::string peakLevel;
						};
						std::string codec;
						std::string qscale;
						Volume volume;
						std::string remove;
						std::string samplerate;
						std::string bitrate;
						std::string profile;
						std::string channels;
					};
					struct Container
					{
						std::string format;
					};
					Container container;
					TransConfig transConfig;
					Video video;
					std::string state;
					std::string id;
					Audio audio;
					MuxConfig muxConfig;
					std::string name;
				};


				AddTemplateResult();
				explicit AddTemplateResult(const std::string &payload);
				~AddTemplateResult();
				_Template get_Template()const;

			protected:
				void parse(const std::string &payload);
			private:
				_Template _template_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_ADDTEMPLATERESULT_H_