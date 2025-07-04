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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESASCSVRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESASCSVRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstancesAsCsvResult : public ServiceResult
			{
			public:
				struct DBInstanceAttribute
				{
					long dBInstanceMemory;
					std::string category;
					std::string dBInstanceNetType;
					std::string incrementSourceDBInstanceId;
					std::string port;
					std::string dBInstanceType;
					std::string tempDBInstanceId;
					std::string dBInstanceCPU;
					std::string instanceNetworkType;
					std::string dBInstanceClassType;
					std::string dBInstanceId;
					std::string securityIPList;
					int dBInstanceStorage;
					std::string lockReason;
					std::string availabilityValue;
					std::string maintainTime;
					std::string dBInstanceDescription;
					std::string engine;
					std::string tags;
					std::string engineVersion;
					std::string dBInstanceStatus;
					int maxConnections;
					std::string zoneId;
					std::string dBInstanceClass;
					int accountMaxQuantity;
					std::string vSwitchId;
					std::string guardDBInstanceId;
					std::string lockMode;
					std::string payType;
					std::string dBInstanceStorageType;
					std::string accountType;
					int maxIOPS;
					std::string supportUpgradeAccountType;
					std::vector<std::string> slaveZones;
					std::string exportKey;
					std::string vpcId;
					std::string masterInstanceId;
					std::string connectionMode;
					std::string creationTime;
					std::string readDelayTime;
					std::string regionId;
					std::string connectionString;
					std::string expireTime;
					int dBMaxQuantity;
				};


				DescribeDBInstancesAsCsvResult();
				explicit DescribeDBInstancesAsCsvResult(const std::string &payload);
				~DescribeDBInstancesAsCsvResult();
				std::vector<DBInstanceAttribute> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceAttribute> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESASCSVRESULT_H_