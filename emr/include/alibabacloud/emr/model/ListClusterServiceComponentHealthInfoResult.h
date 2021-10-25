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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICECOMPONENTHEALTHINFORESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICECOMPONENTHEALTHINFORESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListClusterServiceComponentHealthInfoResult : public ServiceResult
			{
			public:
				struct HealthInfo
				{
					struct HealthDetail
					{
						struct HealthRuleParam
						{
							std::string ruleDescription;
							std::string pass;
							std::string ruleId;
							std::string service;
							std::string hostNames;
							std::string component;
							std::string ruleTitle;
						};
						HealthRuleParam healthRuleParam;
						std::string code;
					};
					long createdTime;
					int goodHealthNum;
					std::string healthStatus;
					std::string healthLevel;
					int agentHeartBeatLostNum;
					int warningHealthNum;
					int unknownHealthNum;
					int disabledHealthNum;
					int badHealthNum;
					int noneHealthNum;
					int stoppedNum;
					std::vector<HealthInfo::HealthDetail> healthDetailList;
					int normalNum;
					int totalNum;
					std::string serviceName;
					int stoppedHealthNum;
					int manualStoppedNum;
					std::string componentName;
				};


				ListClusterServiceComponentHealthInfoResult();
				explicit ListClusterServiceComponentHealthInfoResult(const std::string &payload);
				~ListClusterServiceComponentHealthInfoResult();
				std::string getClusterId()const;
				std::vector<HealthInfo> getHealthInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string clusterId_;
				std::vector<HealthInfo> healthInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERSERVICECOMPONENTHEALTHINFORESULT_H_