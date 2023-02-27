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

#ifndef ALIBABACLOUD_ICE_MODEL_GETPLAYINFORESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETPLAYINFORESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetPlayInfoResult : public ServiceResult
			{
			public:
				struct MediaBase
				{
					std::string status;
					std::string mediaId;
					std::string creationTime;
					std::string title;
					std::string mediaType;
					std::string coverURL;
				};
				struct PlayInfo
				{
					std::string status;
					std::string transTemplateType;
					std::string streamType;
					std::string streamTags;
					std::string hDRType;
					long size;
					std::string watermarkId;
					std::string definition;
					std::string fps;
					std::string modificationTime;
					std::string duration;
					std::string bitrate;
					int bitDepth;
					long encrypt;
					std::string fileURL;
					std::string format;
					std::string encryptType;
					std::string narrowBandType;
					std::string playURL;
					std::string creationTime;
					long height;
					long width;
					std::string jobId;
				};


				GetPlayInfoResult();
				explicit GetPlayInfoResult(const std::string &payload);
				~GetPlayInfoResult();
				MediaBase getMediaBase()const;
				std::vector<PlayInfo> getPlayInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				MediaBase mediaBase_;
				std::vector<PlayInfo> playInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETPLAYINFORESULT_H_