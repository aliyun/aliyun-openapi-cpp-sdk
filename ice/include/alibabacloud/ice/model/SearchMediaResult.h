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

#ifndef ALIBABACLOUD_ICE_MODEL_SEARCHMEDIARESULT_H_
#define ALIBABACLOUD_ICE_MODEL_SEARCHMEDIARESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT SearchMediaResult : public ServiceResult
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
							std::string aiAuditStatus;
							std::string aiAuditResult;
						};
						DynamicMetaData dynamicMetaData;
						MediaExtraInfo mediaExtraInfo;
					};
					struct AiData
					{
						struct AiLabelInfoItem
						{
							struct OccurrencesItem
							{
								struct TracksItem
								{
									std::string position;
									double size;
									double timestamp;
								};
								double score;
								std::vector<OccurrencesItem::TracksItem> tracks;
								std::string clipId;
								std::string finegrainId;
								std::string finegrainName;
								std::string content;
								std::string tableBatchSeqId;
								double from;
								double to;
								std::string image;
							};
							std::string faceId;
							std::string category;
							std::string labelType;
							std::vector<AiLabelInfoItem::OccurrencesItem> occurrences;
							std::string labelName;
							std::string labelId;
							std::string source;
						};
						struct AsrInfoItem
						{
							std::string clipId;
							std::string content;
							double from;
							double to;
							double timestamp;
						};
						struct OcrInfoItem
						{
							std::string clipId;
							std::string content;
							double from;
							double to;
							double timestamp;
						};
						std::vector<AsrInfoItem> asrInfo;
						std::vector<OcrInfoItem> ocrInfo;
						std::vector<AiLabelInfoItem> aiLabelInfo;
					};
					struct AiRoughData
					{
						std::string status;
						std::string aiCategory;
						std::string saveType;
						std::string aiJobId;
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
						FileBasicInfo fileBasicInfo;
					};
					AiData aiData;
					MediaDynamicInfo mediaDynamicInfo;
					std::string mediaId;
					std::vector<MediaInfo::FileInfo> fileInfoList;
					MediaBasicInfo mediaBasicInfo;
					AiRoughData aiRoughData;
				};


				SearchMediaResult();
				explicit SearchMediaResult(const std::string &payload);
				~SearchMediaResult();
				std::vector<MediaInfo> getMediaInfoList()const;
				long getTotal()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<MediaInfo> mediaInfoList_;
				long total_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_SEARCHMEDIARESULT_H_