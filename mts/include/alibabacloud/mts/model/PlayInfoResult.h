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

#ifndef ALIBABACLOUD_MTS_MODEL_PLAYINFORESULT_H_
#define ALIBABACLOUD_MTS_MODEL_PLAYINFORESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT PlayInfoResult : public ServiceResult
			{
			public:
				struct PlayInfo
				{
					std::string encryptionType;
					std::string rand;
					std::string downloadType;
					std::string activityName;
					std::string size;
					std::string definition;
					std::string fps;
					std::string duration;
					std::string encryption;
					std::string bitrate;
					std::string url;
					std::string complexity;
					std::string format;
					std::string plaintext;
					std::string height;
					std::string width;
				};


				PlayInfoResult();
				explicit PlayInfoResult(const std::string &payload);
				~PlayInfoResult();
				std::vector<PlayInfo> getPlayInfoList()const;
				std::vector<std::string> getNotFoundCDNDomain()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PlayInfo> playInfoList_;
				std::vector<std::string> notFoundCDNDomain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_PLAYINFORESULT_H_