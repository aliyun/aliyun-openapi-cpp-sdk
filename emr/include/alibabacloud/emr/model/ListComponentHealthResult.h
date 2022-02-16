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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCOMPONENTHEALTHRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCOMPONENTHEALTHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListComponentHealthResult : public ServiceResult
			{
			public:
				struct Health
				{
					struct HealthDetail
					{
						struct HealthRuleParam
						{
							std::string ruleDescription;
							std::string applicationName;
							std::string pass;
							std::string ruleId;
							std::string hostNames;
							std::string component;
							std::string ruleTitle;
						};
						HealthRuleParam healthRuleParam;
						std::string code;
					};
					long stoppedNum;
					std::string applicationName;
					float normalNum;
					long totalNum;
					std::vector<Health::HealthDetail> healthDetails;
					long createTime;
					float manualStoppedNum;
					std::string componentName;
					std::string healthLevel;
					long agentHeartBeatLostNum;
				};


				ListComponentHealthResult();
				explicit ListComponentHealthResult(const std::string &payload);
				~ListComponentHealthResult();
				int getTotalCount()const;
				std::vector<Health> getHealths()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Health> healths_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCOMPONENTHEALTHRESULT_H_