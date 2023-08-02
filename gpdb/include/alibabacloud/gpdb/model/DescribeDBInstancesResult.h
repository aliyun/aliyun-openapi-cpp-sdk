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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstancesResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int masterNodeNum;
					std::string resourceGroupId;
					std::string dBInstanceNetType;
					std::string segNodeNum;
					std::string instanceNetworkType;
					std::string dBInstanceCategory;
					std::string dBInstanceId;
					std::string lockReason;
					std::vector<DBInstance::Tag> tags;
					std::string engine;
					std::string dBInstanceDescription;
					std::string serverlessMode;
					std::string storageType;
					std::string engineVersion;
					std::string dBInstanceStatus;
					std::string zoneId;
					std::string createTime;
					std::string vSwitchId;
					std::string storageSize;
					std::string payType;
					std::string lockMode;
					std::string vpcId;
					std::string dBInstanceMode;
					std::string instanceDeployType;
					std::string connectionMode;
					std::string regionId;
					std::string expireTime;
				};


				DescribeDBInstancesResult();
				explicit DescribeDBInstancesResult(const std::string &payload);
				~DescribeDBInstancesResult();
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
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESRESULT_H_