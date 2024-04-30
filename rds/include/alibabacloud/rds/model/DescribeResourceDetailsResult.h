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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEDETAILSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEDETAILSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeResourceDetailsResult : public ServiceResult
			{
			public:
				struct RdsEcsSecurityGroupRelItem
				{
					std::string securityGroupName;
				};


				DescribeResourceDetailsResult();
				explicit DescribeResourceDetailsResult(const std::string &payload);
				~DescribeResourceDetailsResult();
				std::string getResourceGroupId()const;
				long getBackupSize()const;
				std::string getVSwitchId()const;
				std::vector<RdsEcsSecurityGroupRelItem> getRdsEcsSecurityGroupRel()const;
				std::string getDbProxyInstanceName()const;
				long getDbInstanceStorage()const;
				std::string getInstanceStorageType()const;
				std::string getVpcId()const;
				std::string getSecurityIPList()const;
				long getBackupDataSize()const;
				long getBackupLogSize()const;
				std::string getRegion()const;
				long getDiskUsed()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string resourceGroupId_;
				long backupSize_;
				std::string vSwitchId_;
				std::vector<RdsEcsSecurityGroupRelItem> rdsEcsSecurityGroupRel_;
				std::string dbProxyInstanceName_;
				long dbInstanceStorage_;
				std::string instanceStorageType_;
				std::string vpcId_;
				std::string securityIPList_;
				long backupDataSize_;
				long backupLogSize_;
				std::string region_;
				long diskUsed_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEDETAILSRESULT_H_