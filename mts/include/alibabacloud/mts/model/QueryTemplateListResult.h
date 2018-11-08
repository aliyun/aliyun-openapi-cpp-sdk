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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYTEMPLATELISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYTEMPLATELISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryTemplateListResult : public ServiceResult
			{
			public:
				struct _Template
				{
					struct Container
					{
						std::string format;
					};
					struct Video
					{
						struct BitrateBnd
						{
							std::string min;
							std::string max;
						};
						std::string bufsize;
						std::string qscale;
						std::string scanMode;
						std::string preset;
						std::string fps;
						std::string gop;
						std::string remove;
						BitrateBnd bitrateBnd;
						std::string pixFmt;
						std::string bitrate;
						std::string profile;
						std::string crop;
						std::string codec;
						std::string maxrate;
						std::string pad;
						std::string crf;
						std::string maxFps;
						std::string height;
						std::string degrain;
						std::string width;
					};
					struct Audio
					{
						std::string codec;
						std::string qscale;
						std::string remove;
						std::string samplerate;
						std::string bitrate;
						std::string profile;
						std::string channels;
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
						struct Segment
						{
							std::string duration;
						};
						struct Gif
						{
							std::string loop;
							std::string finalDelay;
							std::string ditherMode;
							std::string isCustomPalette;
						};
						Gif gif;
						Segment segment;
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


				QueryTemplateListResult();
				explicit QueryTemplateListResult(const std::string &payload);
				~QueryTemplateListResult();
				std::vector<_Template> getTemplateList()const;
				std::vector<std::string> getNonExistTids()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<_Template> templateList_;
				std::vector<std::string> nonExistTids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYTEMPLATELISTRESULT_H_