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

#ifndef ALIBABACLOUD_VOD_MODEL_GETPLAYINFORESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETPLAYINFORESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetPlayInfoResult : public ServiceResult
			{
			public:
				struct VideoBase
				{
					struct Thumbnail
					{
						std::string uRL;
					};
					std::string status;
					std::string danMuURL;
					std::string videoId;
					std::string transcodeMode;
					std::string storageClass;
					std::string creationTime;
					std::string title;
					std::string mediaType;
					std::string coverURL;
					std::string duration;
					std::vector<Thumbnail> thumbnailList;
					std::string outputType;
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


				GetPlayInfoResult();
				explicit GetPlayInfoResult(const std::string &payload);
				~GetPlayInfoResult();
				VideoBase getVideoBase()const;
				std::vector<PlayInfo> getPlayInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				VideoBase videoBase_;
				std::vector<PlayInfo> playInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETPLAYINFORESULT_H_