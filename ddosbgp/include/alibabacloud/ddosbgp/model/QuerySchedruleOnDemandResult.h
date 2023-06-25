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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_QUERYSCHEDRULEONDEMANDRESULT_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_QUERYSCHEDRULEONDEMANDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddosbgp/DdosbgpExport.h>

namespace AlibabaCloud
{
	namespace Ddosbgp
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSBGP_EXPORT QuerySchedruleOnDemandResult : public ServiceResult
			{
			public:
				struct Config
				{
					std::string ruleSwitch;
					std::string ruleUndoEndTime;
					std::string timeZone;
					std::string ruleConditionCnt;
					std::string ruleAction;
					std::string ruleConditionMbps;
					std::string ruleConditionKpps;
					std::string ruleUndoMode;
					std::string ruleUndoBeginTime;
					std::string ruleName;
				};
				struct Status
				{
					std::string ruleSchedStatus;
					std::string net;
				};


				QuerySchedruleOnDemandResult();
				explicit QuerySchedruleOnDemandResult(const std::string &payload);
				~QuerySchedruleOnDemandResult();
				std::string getInstanceId()const;
				std::string getUserId()const;
				std::vector<Status> getRuleStatus()const;
				std::vector<Config> getRuleConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string instanceId_;
				std::string userId_;
				std::vector<Status> ruleStatus_;
				std::vector<Config> ruleConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_QUERYSCHEDRULEONDEMANDRESULT_H_