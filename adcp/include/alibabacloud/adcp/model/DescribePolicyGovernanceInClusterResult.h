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

#ifndef ALIBABACLOUD_ADCP_MODEL_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESULT_H_
#define ALIBABACLOUD_ADCP_MODEL_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adcp/AdcpExport.h>

namespace AlibabaCloud
{
	namespace Adcp
	{
		namespace Model
		{
			class ALIBABACLOUD_ADCP_EXPORT DescribePolicyGovernanceInClusterResult : public ServiceResult
			{
			public:
				struct PolicyGovernance
				{
					struct Cluster
					{
						std::string clusterId;
						std::string state;
						std::string regionId;
						std::string clusterType;
						std::string clusterSpec;
						std::string profile;
						std::string name;
					};
					struct PolicyGovernance1
					{
						struct AdmitLog
						{
							std::string progress;
							std::string logStore;
							std::string count;
							std::vector<std::string> logs;
							std::string logProject;
						};
						struct Violation
						{
							struct TotalViolations
							{
								struct DenySeverity
								{
									long violations;
									std::string severity;
								};
								struct WarnSeverity
								{
									std::string violations;
									std::string severity;
								};
								std::vector<DenySeverity> deny;
								std::vector<WarnSeverity> warn;
							};
							struct Violations
							{
								struct DenyViolations
								{
									std::string policyDescription;
									long violations;
									std::string policyName;
									std::string severity;
								};
								struct WarnViolations
								{
									std::string policyDescription;
									long violations;
									std::string policyName;
									std::string severity;
								};
								std::vector<WarnViolations> warn3;
								std::vector<DenyViolations> deny2;
							};
							Violations violations;
							TotalViolations totalViolations;
						};
						struct State
						{
							long totalCount;
							long enabledCount;
							std::string severity;
						};
						Violation violation;
						AdmitLog admitLog;
						std::vector<State> onState;
					};
					PolicyGovernance1 policyGovernance1;
					Cluster cluster;
				};


				DescribePolicyGovernanceInClusterResult();
				explicit DescribePolicyGovernanceInClusterResult(const std::string &payload);
				~DescribePolicyGovernanceInClusterResult();
				std::vector<PolicyGovernance> getPolicyGovernances()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PolicyGovernance> policyGovernances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADCP_MODEL_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESULT_H_