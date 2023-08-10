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

#ifndef ALIBABACLOUD_ADCP_MODEL_DESCRIBEPOLICYINSTANCESRESULT_H_
#define ALIBABACLOUD_ADCP_MODEL_DESCRIBEPOLICYINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ADCP_EXPORT DescribePolicyInstancesResult : public ServiceResult
			{
			public:
				struct Policy
				{
					std::string instanceName;
					std::string policyParameters;
					std::string policyDescription;
					std::string clusterId;
					std::string policyName;
					std::string policyCategory;
					std::string policySeverity;
					long totalViolations;
					std::string policyAction;
					std::string policyScope;
				};


				DescribePolicyInstancesResult();
				explicit DescribePolicyInstancesResult(const std::string &payload);
				~DescribePolicyInstancesResult();
				std::vector<Policy> getPolicies()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Policy> policies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADCP_MODEL_DESCRIBEPOLICYINSTANCESRESULT_H_