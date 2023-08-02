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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstanceAttribute
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int masterNodeNum;
					long dBInstanceMemory;
					int cpuCoresPerNode;
					std::string resourceGroupId;
					std::string port;
					int segNodeNum;
					int memoryPerNode;
					std::string dBInstanceGroupCount;
					std::string instanceNetworkType;
					std::string dBInstanceClassType;
					std::string dBInstanceCategory;
					std::string dBInstanceId;
					long dBInstanceStorage;
					int serverlessResource;
					std::string lockReason;
					std::string availabilityValue;
					std::vector<DBInstanceAttribute::Tag> tags;
					std::string dBInstanceDescription;
					std::string engine;
					int segmentCounts;
					std::string encryptionType;
					long dBInstanceDiskMBPS;
					std::string serverlessMode;
					std::string storageType;
					std::string engineVersion;
					std::string dBInstanceStatus;
					int maxConnections;
					int dBInstanceCpuCores;
					std::string dBInstanceClass;
					std::string vSwitchId;
					std::string startTime;
					std::string coreVersion;
					std::string payType;
					std::string lockMode;
					std::string vpcId;
					std::string creationTime;
					std::string readDelayTime;
					std::string connectionMode;
					int cpuCores;
					std::string connectionString;
					std::string expireTime;
					std::string segDiskPerformanceLevel;
					std::string dBInstanceNetType;
					int idleTime;
					std::string encryptionKey;
					bool supportRestore;
					std::string hostType;
					std::string maintainEndTime;
					std::string vectorConfigurationStatus;
					std::string securityIPList;
					std::string maintainStartTime;
					std::string memoryUnit;
					long memorySize;
					std::string zoneId;
					std::string storageUnit;
					long storageSize;
					std::string minorVersion;
					int storagePerNode;
					std::string dBInstanceMode;
					std::string regionId;
					std::string runningTime;
				};


				DescribeDBInstanceAttributeResult();
				explicit DescribeDBInstanceAttributeResult(const std::string &payload);
				~DescribeDBInstanceAttributeResult();
				std::vector<DBInstanceAttribute> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceAttribute> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_