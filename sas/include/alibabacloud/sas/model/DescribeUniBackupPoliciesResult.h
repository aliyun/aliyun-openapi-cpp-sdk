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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEUNIBACKUPPOLICIESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEUNIBACKUPPOLICIESRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeUniBackupPoliciesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct UniBackupPolicyDTO
				{
					std::string instanceUuid;
					std::string latestBackupTime;
					std::string latestBackResult;
					std::string databaseType;
					std::string instanceId;
					std::string databaseName;
					std::string instanceName;
					std::string agentStatus;
					std::string agentErrorMessage;
					std::string instanceStatus;
					std::string policyStatus;
					std::string policyName;
					std::string uniRegionId;
					std::string errorCode;
					std::string errorMessage;
					int uniBackUpCount;
					long policyId;
					std::string planStatus;
				};


				DescribeUniBackupPoliciesResult();
				explicit DescribeUniBackupPoliciesResult(const std::string &payload);
				~DescribeUniBackupPoliciesResult();
				PageInfo getPageInfo()const;
				std::vector<UniBackupPolicyDTO> getUniBackupPolicies()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<UniBackupPolicyDTO> uniBackupPolicies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEUNIBACKUPPOLICIESRESULT_H_