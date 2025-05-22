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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESFORCLONERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESFORCLONERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstancesForCloneResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct ReadOnlyDBInstanceId
					{
						std::string dBInstanceId;
					};
					std::string category;
					std::string resourceGroupId;
					std::string dBInstanceNetType;
					std::string destroyTime;
					std::string dBInstanceType;
					std::string tempDBInstanceId;
					bool mutriORsignle;
					std::string instanceNetworkType;
					std::string replicateId;
					std::string dBInstanceId;
					std::vector<DBInstance::ReadOnlyDBInstanceId> readOnlyDBInstanceIds;
					std::string lockReason;
					std::string dBInstanceDescription;
					std::string engine;
					std::string engineVersion;
					std::string dBInstanceStatus;
					std::string zoneId;
					std::string dBInstanceClass;
					std::string createTime;
					std::string vSwitchId;
					std::string guardDBInstanceId;
					std::string lockMode;
					std::string payType;
					std::string dBInstanceStorageType;
					int insId;
					std::string vpcId;
					std::string masterInstanceId;
					std::string connectionMode;
					std::string vpcCloudInstanceId;
					std::string regionId;
					std::string expireTime;
				};


				DescribeDBInstancesForCloneResult();
				explicit DescribeDBInstancesForCloneResult(const std::string &payload);
				~DescribeDBInstancesForCloneResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<DBInstance> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<DBInstance> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESFORCLONERESULT_H_