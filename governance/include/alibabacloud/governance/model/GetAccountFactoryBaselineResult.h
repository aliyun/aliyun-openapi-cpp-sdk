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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_GETACCOUNTFACTORYBASELINERESULT_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_GETACCOUNTFACTORYBASELINERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/governance/GovernanceExport.h>

namespace AlibabaCloud
{
	namespace Governance
	{
		namespace Model
		{
			class ALIBABACLOUD_GOVERNANCE_EXPORT GetAccountFactoryBaselineResult : public ServiceResult
			{
			public:
				struct BaselineItem
				{
					std::string version;
					std::string config;
					std::string name;
				};


				GetAccountFactoryBaselineResult();
				explicit GetAccountFactoryBaselineResult(const std::string &payload);
				~GetAccountFactoryBaselineResult();
				std::string getBaselineId()const;
				std::vector<BaselineItem> getBaselineItems()const;
				std::string getType()const;
				std::string getDescription()const;
				std::string getCreateTime()const;
				std::string getBaselineName()const;
				std::string getUpdateTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string baselineId_;
				std::vector<BaselineItem> baselineItems_;
				std::string type_;
				std::string description_;
				std::string createTime_;
				std::string baselineName_;
				std::string updateTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_GETACCOUNTFACTORYBASELINERESULT_H_