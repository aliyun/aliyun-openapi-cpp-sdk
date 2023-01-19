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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEUNIBACKUPPOLICYDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEUNIBACKUPPOLICYDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeUniBackupPolicyDetailResult : public ServiceResult
			{
			public:
				struct UniBackupPolicyDTO
				{
					struct FullPlan
					{
						std::vector<std::string> days;
						std::string startTime;
						std::string planType;
						int interval;
					};
					struct IncPlan
					{
						std::vector<std::string> days1;
						std::string startTime;
						std::string planType;
						int interval;
					};
					std::string databaseType;
					std::string instanceId;
					int retention;
					long speedLimiter;
					std::string instanceName;
					IncPlan incPlan;
					std::string agentStatus;
					FullPlan fullPlan;
					std::string policyStatus;
					std::string policyName;
					int uniBackUpCount;
					long policyId;
					std::string accountName;
				};


				DescribeUniBackupPolicyDetailResult();
				explicit DescribeUniBackupPolicyDetailResult(const std::string &payload);
				~DescribeUniBackupPolicyDetailResult();
				UniBackupPolicyDTO getUniBackupPolicyDTO()const;

			protected:
				void parse(const std::string &payload);
			private:
				UniBackupPolicyDTO uniBackupPolicyDTO_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEUNIBACKUPPOLICYDETAILRESULT_H_