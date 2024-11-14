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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAISTUDIORESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAISTUDIORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveAIStudioResult : public ServiceResult
			{
			public:
				struct SubtitleConfig
				{
					std::string mediaResourceUrl;
					std::string mediaResourceId;
					std::string description;
					std::string mattingLayout;
					std::string backgroundResourceUrl;
					std::string backgroundType;
					std::string mattingType;
					std::string mediaLayout;
					std::string mediaType;
					std::string templateName;
					std::string height;
					std::vector<std::string> ruleIds;
					std::string backgroundResourceId;
					std::string width;
					std::string templateId;
				};


				DescribeLiveAIStudioResult();
				explicit DescribeLiveAIStudioResult(const std::string &payload);
				~DescribeLiveAIStudioResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<SubtitleConfig> getStudioConfigs()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<SubtitleConfig> studioConfigs_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAISTUDIORESULT_H_