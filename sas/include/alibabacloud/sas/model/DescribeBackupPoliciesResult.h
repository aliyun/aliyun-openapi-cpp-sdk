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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPPOLICIESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPPOLICIESRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeBackupPoliciesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct BackupPolicy
				{
					std::string status;
					std::string policyVersion;
					std::string policy;
					std::string serverType;
					std::string clientStatus;
					std::vector<std::string> serviceErrorUuidList;
					std::vector<std::string> remarkedUuidList;
					std::string name;
					std::string policyRegionId;
					std::vector<std::string> clientErrorUuidList;
					std::vector<std::string> healthClientUuidList;
					std::string upgradeStatus;
					std::vector<std::string> uuidList;
					int clientErrorCount;
					int serviceErrorCount;
					long id;
					int healthClientCount;
				};


				DescribeBackupPoliciesResult();
				explicit DescribeBackupPoliciesResult(const std::string &payload);
				~DescribeBackupPoliciesResult();
				PageInfo getPageInfo()const;
				std::vector<BackupPolicy> getPolicies()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<BackupPolicy> policies_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEBACKUPPOLICIESRESULT_H_