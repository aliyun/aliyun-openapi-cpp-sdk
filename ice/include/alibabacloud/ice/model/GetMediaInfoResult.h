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

#ifndef ALIBABACLOUD_ICE_MODEL_GETMEDIAINFORESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETMEDIAINFORESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetMediaInfoResult : public ServiceResult
			{
			public:
				struct MediaInfo
				{
					struct MediaBasicInfo
					{
						std::string description;
						std::string category;
						std::string userData;
						std::string businessType;
						long cateId;
						std::string cateName;
						std::string inputURL;
						std::string source;
						std::string transcodeStatus;
						std::string modifiedTime;
						std::string referenceId;
						std::string mediaType;
						std::string snapshots;
						std::string status;
						std::string deletedTime;
						std::string createTime;
						std::string title;
						std::string acl;
						std::string publishState;
						std::string entityId;
						std::string biz;
						std::string mediaId;
						std::string spriteImages;
						std::string appId;
						std::string uploadSource;
						std::string coverURL;
						std::string mediaTags;
					};
					struct MediaDynamicInfo
					{
						struct DynamicMetaData
						{
							std::string entityId;
							std::string type;
							std::string data;
						};
						struct MediaExtraInfo
						{
							std::string manualAuditStatus;
							std::string aiAuditTemplate;
							std::string aiAuditJobId;
							std::string manualAuditResult;
							std::string aiAuditLabel;
							int preprocessState;
							std::string aiAuditStatus;
							std::string clearText;
							std::string aiAuditResult;
						};
						DynamicMetaData dynamicMetaData;
						MediaExtraInfo mediaExtraInfo;
					};
					struct AiRoughData1
					{
						std::string status;
						std::string aiCategory;
						std::string saveType;
						std::string aiJobId;
						std::string result;
					};
					struct AiRoughData
					{
						std::string type;
						std::string result;
					};
					struct FileInfo
					{
						struct FileBasicInfo
						{
							std::string fileBusinessType;
							std::string fileStatus;
							std::string fileName;
							std::string createTime;
							std::string duration;
							std::string bitrate;
							std::string fileMediaType;
							std::string fileUrl;
							std::string modifiedTime;
							std::string fileType;
							std::string region;
							std::string formatName;
							std::string height;
							std::string width;
							std::string fileSize;
						};
						struct FileExtraInfo
						{
							std::string extra;
							std::string crc;
							double fps;
							int height;
							double duration;
							int width;
							double bitrate;
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
						FileExtraInfo fileExtraInfo;
						std::vector<FileInfo::SubtitleStreamInfo> subtitleStreamInfoList;
					};
					std::string entityId;
					MediaDynamicInfo mediaDynamicInfo;
					std::string mediaId;
					std::vector<FileInfo> fileInfoList;
					MediaBasicInfo mediaBasicInfo;
					AiRoughData1 aiRoughData1;
					std::vector<AiRoughData> aiRoughDataList;
				};


				GetMediaInfoResult();
				explicit GetMediaInfoResult(const std::string &payload);
				~GetMediaInfoResult();
				MediaInfo getMediaInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaInfo mediaInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETMEDIAINFORESULT_H_