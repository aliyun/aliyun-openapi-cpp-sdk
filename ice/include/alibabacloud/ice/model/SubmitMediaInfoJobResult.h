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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITMEDIAINFOJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITMEDIAINFOJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT SubmitMediaInfoJobResult : public ServiceResult
			{
			public:
				struct MediaInfoJob
				{
					struct Input
					{
						std::string type;
						std::string media;
					};
					struct ScheduleConfig
					{
						int priority;
						std::string pipelineId;
					};
					struct MediaInfoProperty
					{
						struct FileBasicInfo
						{
							std::string fileUrl;
							std::string fileStatus;
							std::string mediaId;
							std::string fileType;
							std::string fileName;
							std::string region;
							std::string formatName;
							std::string duration;
							std::string height;
							std::string bitrate;
							std::string width;
							std::string fileSize;
						};
						struct AudioStreamInfoListItem
						{
							std::string codecTag;
							std::string codecTimeBase;
							std::string channelLayout;
							std::string startTime;
							std::string index;
							std::string duration;
							std::string lang;
							std::string sampleFmt;
							std::string codecName;
							std::string bitrate;
							std::string channels;
							std::string timebase;
							std::string codecTagString;
							std::string sampleRate;
							std::string codecLongName;
						};
						struct VideoStreamInfoListItem
						{
							std::string rotate;
							std::string codec_tag;
							std::string sar;
							std::string start_time;
							std::string fps;
							std::string index;
							std::string duration;
							std::string lang;
							std::string codec_long_name;
							std::string pixFmt;
							std::string bit_rate;
							std::string profile;
							std::string has_b_frames;
							std::string codec_time_base;
							std::string dar;
							std::string avg_fps;
							std::string codec_tag_string;
							std::string codec_name;
							std::string height;
							std::string level;
							std::string time_base;
							std::string width;
							std::string numFrames;
						};
						std::vector<VideoStreamInfoListItem> videoStreamInfoList;
						std::vector<AudioStreamInfoListItem> audioStreamInfoList;
						FileBasicInfo fileBasicInfo;
					};
					std::string status;
					std::string requestId;
					std::string userData;
					std::string submitResultJson;
					std::string submitTime;
					std::string name;
					ScheduleConfig scheduleConfig;
					Input input;
					std::string finishTime;
					bool async;
					MediaInfoProperty mediaInfoProperty;
					std::string triggerSource;
					std::string jobId;
				};


				SubmitMediaInfoJobResult();
				explicit SubmitMediaInfoJobResult(const std::string &payload);
				~SubmitMediaInfoJobResult();
				MediaInfoJob getMediaInfoJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaInfoJob mediaInfoJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITMEDIAINFOJOBRESULT_H_