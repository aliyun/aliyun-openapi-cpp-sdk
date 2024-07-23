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

#ifndef ALIBABACLOUD_MTS_MODEL_SEARCHTEMPLATERESULT_H_
#define ALIBABACLOUD_MTS_MODEL_SEARCHTEMPLATERESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT SearchTemplateResult : public ServiceResult
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
						Gif gif;
						Segment segment;
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
					struct Container
					{
						std::string format;
					};
					struct FrontendHint
					{
						std::string bitrateControlType;
						bool isDynamic;
						std::string transcodeType;
						std::string source;
						bool hasOldHdr2Sdr;
					};
					Container container;
					TransConfig transConfig;
					Video video;
					std::string state;
					std::string creationTime;
					FrontendHint frontendHint;
					std::string id;
					Audio audio;
					MuxConfig muxConfig;
					std::string name;
				};


				SearchTemplateResult();
				explicit SearchTemplateResult(const std::string &payload);
				~SearchTemplateResult();
				long getTotalCount()const;
				std::vector<_Template> getTemplateList()const;
				long getPageSize()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<_Template> templateList_;
				long pageSize_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SEARCHTEMPLATERESULT_H_