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
					long dBInstanceMemory;
					std::string dBInstanceNetType;
					std::string port;
					std::string dBInstanceGroupCount;
					std::string instanceNetworkType;
					std::string dBInstanceClassType;
					std::string hostType;
					std::string maintainEndTime;
					std::string dBInstanceId;
					std::string securityIPList;
					long dBInstanceStorage;
					std::string lockReason;
					std::string availabilityValue;
					std::vector<DBInstanceAttribute::Tag> tags;
					std::string engine;
					std::string dBInstanceDescription;
					std::string maintainStartTime;
					long dBInstanceDiskMBPS;
					std::string engineVersion;
					std::string dBInstanceStatus;
					int maxConnections;
					std::string zoneId;
					std::string dBInstanceClass;
					int dBInstanceCpuCores;
					std::string payType;
					std::string lockMode;
					std::string vpcId;
					std::string readDelayTime;
					std::string creationTime;
					std::string connectionMode;
					std::string regionId;
					std::string connectionString;
					std::string expireTime;
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