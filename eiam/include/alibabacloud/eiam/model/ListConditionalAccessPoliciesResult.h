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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTCONDITIONALACCESSPOLICIESRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTCONDITIONALACCESSPOLICIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT ListConditionalAccessPoliciesResult : public ServiceResult
			{
			public:
				struct ConditionalAccessPolicy
				{
					struct DecisionConfig
					{
						std::vector<std::string> mfaAuthenticationMethods;
						long mfaAuthenticationIntervalSeconds;
						std::string activeSessionReuseStatus;
						std::string effect;
						std::string mfaType;
					};
					struct ConditionsConfig
					{
						struct Applications
						{
							std::vector<std::string> excludeApplications;
							std::vector<std::string> includeApplications;
						};
						struct Users
						{
							std::vector<std::string> excludeOrganizationalUnits;
							std::vector<std::string> includeUsers;
							std::vector<std::string> excludeGroups;
							std::vector<std::string> excludeUsers;
							std::vector<std::string> includeOrganizationalUnits;
							std::vector<std::string> includeGroups;
						};
						struct NetworkZones
						{
							std::vector<std::string> includeNetworkZones;
							std::vector<std::string> excludeNetworkZones;
						};
						NetworkZones networkZones;
						Applications applications;
						Users users;
					};
					std::string status;
					DecisionConfig decisionConfig;
					std::string description;
					std::string instanceId;
					int priority;
					long createTime;
					std::string conditionalAccessPolicyId;
					std::string conditionalAccessPolicyType;
					long lastUpdatedTime;
					std::string decisionType;
					std::string evaluateAt;
					std::string conditionalAccessPolicyName;
					ConditionsConfig conditionsConfig;
				};


				ListConditionalAccessPoliciesResult();
				explicit ListConditionalAccessPoliciesResult(const std::string &payload);
				~ListConditionalAccessPoliciesResult();
				long getTotalCount()const;
				std::string getPreviousToken()const;
				std::vector<ConditionalAccessPolicy> getConditionalAccessPolicies()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string previousToken_;
				std::vector<ConditionalAccessPolicy> conditionalAccessPolicies_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTCONDITIONALACCESSPOLICIESRESULT_H_