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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAIPRODUCERULESRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAIPRODUCERULESRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveAIProduceRulesResult : public ServiceResult
			{
			public:
				struct RuleInfo
				{
					std::string app;
					std::string description;
					bool isLazy;
					std::string gmtModifyTime;
					std::string rulesId;
					std::string subtitleName;
					bool isOrigin;
					std::string suffixName;
					std::string domain;
					std::string liveTemplate;
				};


				DescribeLiveAIProduceRulesResult();
				explicit DescribeLiveAIProduceRulesResult(const std::string &payload);
				~DescribeLiveAIProduceRulesResult();
				std::vector<RuleInfo> getRuleInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RuleInfo> ruleInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAIPRODUCERULESRESULT_H_