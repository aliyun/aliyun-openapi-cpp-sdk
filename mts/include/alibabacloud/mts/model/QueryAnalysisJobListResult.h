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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYANALYSISJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYANALYSISJOBLISTRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT QueryAnalysisJobListResult : public ServiceResult
			{
			public:
				struct AnalysisJob
				{
					struct AnalysisConfig
					{
						struct QualityControl
						{
							std::string methodStreaming;
							std::string rateQuality;
						};
						struct PropertiesControl
						{
							struct Crop
							{
								std::string left;
								std::string top;
								std::string mode;
								std::string height;
								std::string width;
							};
							Crop crop;
							std::string deinterlace;
						};
						PropertiesControl propertiesControl;
						QualityControl qualityControl;
					};
					struct MNSMessageResult
					{
						std::string errorCode;
						std::string errorMessage;
						std::string messageId;
					};
					struct InputFile
					{
						std::string bucket;
						std::string object;
						std::string location;
					};
					struct _Template
					{
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
							BitrateBnd bitrateBnd;
							std::string pixFmt;
							std::string bitrate;
							std::string profile;
							std::string codec;
							std::string maxrate;
							std::string crf;
							std::string height;
							std::string degrain;
							std::string width;
						};
						struct TransConfig
						{
							std::string transMode;
						};
						struct MuxConfig
						{
							struct Gif
							{
								std::string finalDelay;
								std::string loop;
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
					std::vector<AnalysisJob::_Template> templateList;
					std::string message;
					long percent;
					std::string userData;
					std::string priority;
					std::string code;
					InputFile inputFile;
					AnalysisConfig analysisConfig;
					std::string state;
					MNSMessageResult mNSMessageResult;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
				};


				QueryAnalysisJobListResult();
				explicit QueryAnalysisJobListResult(const std::string &payload);
				~QueryAnalysisJobListResult();
				std::vector<AnalysisJob> getAnalysisJobList()const;
				std::vector<std::string> getNonExistAnalysisJobIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AnalysisJob> analysisJobList_;
				std::vector<std::string> nonExistAnalysisJobIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYANALYSISJOBLISTRESULT_H_