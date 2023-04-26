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

#ifndef ALIBABACLOUD_VOD_MODEL_GETMEZZANINEINFORESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETMEZZANINEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetMezzanineInfoResult : public ServiceResult
			{
			public:
				struct Mezzanine
				{
					struct AudioStream
					{
						std::string codecTag;
						std::string codecTimeBase;
						std::string channelLayout;
						std::string startTime;
						std::string index;
						std::string lang;
						std::string duration;
						std::string sampleFmt;
						std::string bitrate;
						std::string codecName;
						std::string channels;
						std::string timebase;
						std::string codecTagString;
						std::string sampleRate;
						std::string codecLongName;
						std::string numFrames;
					};
					struct VideoStream
					{
						std::string codecTag;
						std::string codecTimeBase;
						std::string rotate;
						std::string sar;
						std::string hDRType;
						std::string startTime;
						std::string fps;
						std::string index;
						std::string lang;
						std::string duration;
						std::string pixFmt;
						std::string bitrate;
						std::string codecName;
						std::string avgFPS;
						std::string profile;
						std::string timebase;
						std::string codecTagString;
						std::string hasBFrames;
						std::string dar;
						std::string codecLongName;
						std::string height;
						std::string level;
						std::string numFrames;
						std::string width;
					};
					std::string status;
					std::string videoId;
					std::string cRC64;
					long size;
					std::string storageClass;
					std::string fileName;
					std::string fps;
					std::vector<VideoStream> videoStreamList;
					std::string duration;
					std::vector<AudioStream> audioStreamList;
					std::string restoreStatus;
					std::string bitrate;
					std::string preprocessStatus;
					std::string restoreExpiration;
					std::string fileURL;
					std::string creationTime;
					long height;
					long width;
					std::string outputType;
				};


				GetMezzanineInfoResult();
				explicit GetMezzanineInfoResult(const std::string &payload);
				~GetMezzanineInfoResult();
				Mezzanine getMezzanine()const;

			protected:
				void parse(const std::string &payload);
			private:
				Mezzanine mezzanine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETMEZZANINEINFORESULT_H_