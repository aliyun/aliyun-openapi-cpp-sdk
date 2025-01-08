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

#ifndef ALIBABACLOUD_VOD_MODEL_BATCHGETMEDIAINFOSRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_BATCHGETMEDIAINFOSRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT BatchGetMediaInfosResult : public ServiceResult
			{
			public:
				struct MediaBasicInfo
				{
					struct MediaInfo
					{
						std::string status;
						std::string description;
						std::string userData;
						std::string storageClass;
						std::string downloadSwitch;
						std::string title;
						std::string modificationTime;
						long cateId;
						std::string cateName;
						std::string restoreStatus;
						std::string preprocessStatus;
						std::string restoreExpiration;
						std::string mediaId;
						std::string appId;
						std::string creationTime;
						std::string coverURL;
						std::string regionId;
						std::string storageLocation;
						std::vector<std::string> snapshots;
						std::string tags;
						std::string templateGroupId;
					};
					struct MezzanineInfo
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
						std::string cRC64;
						long size;
						std::string fileName;
						std::string fps;
						std::vector<VideoStream> videoStreamList;
						std::string duration;
						std::vector<AudioStream> audioStreamList;
						std::string bitrate;
						std::string fileURL;
						std::string mediaId;
						std::string creationTime;
						long height;
						long width;
					};
					struct PlayInfo
					{
						std::string hDRType;
						long size;
						std::string watermarkId;
						std::string fps;
						std::string modificationTime;
						int bitDepth;
						std::string codecName;
						std::string preprocessStatus;
						std::string complexity;
						std::string format;
						std::string jobExt;
						std::string narrowBandType;
						std::string plaintext;
						long height;
						long width;
						std::string jobId;
						std::string templateId;
						std::string templateGroupId;
						std::string status;
						std::string streamType;
						std::string rand;
						std::string definition;
						std::string specification;
						std::string duration;
						std::string bitrate;
						long encrypt;
						std::string encryptMode;
						int jobType;
						std::string encryptType;
						std::string playURL;
						std::string creationTime;
					};
					MediaInfo mediaInfo;
					std::string mediaId;
					MezzanineInfo mezzanineInfo;
					std::vector<MediaBasicInfo::PlayInfo> playInfoList;
				};


				BatchGetMediaInfosResult();
				explicit BatchGetMediaInfosResult(const std::string &payload);
				~BatchGetMediaInfosResult();
				std::vector<std::string> getNonExistMediaIds()const;
				std::vector<MediaBasicInfo> getMediaInfos()const;
				std::vector<std::string> getForbiddenMediaIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistMediaIds_;
				std::vector<MediaBasicInfo> mediaInfos_;
				std::vector<std::string> forbiddenMediaIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_BATCHGETMEDIAINFOSRESULT_H_