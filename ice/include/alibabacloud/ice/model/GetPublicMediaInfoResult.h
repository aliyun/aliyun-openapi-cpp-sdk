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

#ifndef ALIBABACLOUD_ICE_MODEL_GETPUBLICMEDIAINFORESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETPUBLICMEDIAINFORESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetPublicMediaInfoResult : public ServiceResult
			{
			public:
				struct MediaInfo
				{
					struct MediaBasicInfo
					{
						std::string status;
						std::string description;
						std::string category;
						std::string userData;
						std::string deletedTime;
						std::string createTime;
						std::string businessType;
						std::string title;
						std::string source;
						std::string transcodeStatus;
						std::string mediaId;
						std::string modifiedTime;
						std::string spriteImages;
						std::string mediaType;
						std::string coverURL;
						std::string mediaTags;
						std::string snapshots;
					};
					struct DynamicMetaData
					{
						std::string type;
						std::string data;
					};
					struct FileInfo
					{
						struct FileBasicInfo
						{
							std::string fileUrl;
							std::string fileStatus;
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
						struct AudioStreamInfo
						{
							std::string codecTag;
							std::string codecTimeBase;
							std::string channelLayout;
							std::string startTime;
							std::string fps;
							std::string index;
							std::string duration;
							std::string lang;
							std::string sampleFmt;
							std::string codecName;
							std::string bitrate;
							std::string profile;
							std::string channels;
							std::string timebase;
							std::string codecTagString;
							std::string sampleRate;
							std::string codecLongName;
							std::string numFrames;
						};
						struct VideoStreamInfo
						{
							std::string codecTag;
							std::string codecTimeBase;
							std::string rotate;
							std::string sar;
							std::string fps;
							std::string startTime;
							std::string index;
							std::string duration;
							std::string lang;
							std::string pixFmt;
							std::string codecName;
							std::string bitrate;
							std::string profile;
							std::string avgFPS;
							std::string nb_frames;
							std::string timebase;
							std::string codecTagString;
							std::string hasBFrames;
							std::string dar;
							std::string codecLongName;
							std::string height;
							std::string level;
							std::string width;
							std::string numFrames;
						};
						struct SubtitleStreamInfo
						{
							std::string codecTag;
							std::string timebase;
							std::string codecTagString;
							std::string codecTimeBase;
							std::string codecLongName;
							std::string startTime;
							std::string index;
							std::string duration;
							std::string lang;
							std::string codecName;
						};
						std::vector<FileInfo::VideoStreamInfo> videoStreamInfoList;
						std::vector<FileInfo::AudioStreamInfo> audioStreamInfoList;
						FileBasicInfo fileBasicInfo;
						std::vector<FileInfo::SubtitleStreamInfo> subtitleStreamInfoList;
					};
					std::string mediaId;
					std::vector<FileInfo> fileInfoList;
					DynamicMetaData dynamicMetaData;
					MediaBasicInfo mediaBasicInfo;
				};


				GetPublicMediaInfoResult();
				explicit GetPublicMediaInfoResult(const std::string &payload);
				~GetPublicMediaInfoResult();
				MediaInfo getMediaInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaInfo mediaInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETPUBLICMEDIAINFORESULT_H_