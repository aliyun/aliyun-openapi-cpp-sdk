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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstanceAttribute
				{
					struct Extra
					{
						std::string replicaGroupStatus;
						std::string replicaGroupID;
						std::string activeReplicaDBInstanceID;
						std::vector<std::string> dBInstanceIds;
					};
					struct SlaveZone
					{
						std::string zoneId;
					};
					struct ReadOnlyDBInstanceId
					{
						std::string dBInstanceId;
					};
					long dBInstanceMemory;
					std::string resourceGroupId;
					std::string incrementSourceDBInstanceId;
					std::string port;
					std::string masterZone;
					std::string latestKernelVersion;
					std::string dBInstanceType;
					std::string consoleVersion;
					std::string instanceNetworkType;
					std::string dBInstanceClassType;
					std::string tempUpgradeRecoveryMaxIOPS;
					std::string replicateId;
					std::string dBInstanceId;
					std::string autoUpgradeMinorVersion;
					int dBInstanceStorage;
					std::string lockReason;
					std::string availabilityValue;
					std::string tempUpgradeRecoveryClass;
					std::string engine;
					std::string dBInstanceDescription;
					std::string iPType;
					std::string dBInstanceDiskUsed;
					std::string engineVersion;
					std::string dBInstanceStatus;
					int maxConnections;
					std::string dBInstanceClass;
					int accountMaxQuantity;
					std::string vSwitchId;
					std::string payType;
					std::string lockMode;
					std::string guardDBInstanceId;
					std::string supportCreateSuperAccount;
					int insId;
					std::string timeZone;
					std::string vpcId;
					std::string masterInstanceId;
					std::string currentKernelVersion;
					std::string tempUpgradeTimeStart;
					std::string tempUpgradeTimeEnd;
					std::string readDelayTime;
					std::string creationTime;
					std::string connectionMode;
					std::string vpcCloudInstanceId;
					std::string readonlyInstanceSQLDelayedTime;
					int proxyType;
					std::string connectionString;
					std::string expireTime;
					std::string advancedFeatures;
					int dBMaxQuantity;
					std::string category;
					std::string dBInstanceNetType;
					std::string superPermissionMode;
					int tempUpgradeRecoveryCpu;
					std::string dedicatedHostGroupId;
					std::string tempDBInstanceId;
					std::string dBInstanceCPU;
					int tempUpgradeRecoveryMemory;
					std::string guardDBInstanceName;
					std::string tempUpgradeRecoveryMaxConnections;
					std::string securityIPList;
					std::string originConfiguration;
					std::vector<DBInstanceAttribute::ReadOnlyDBInstanceId> readOnlyDBInstanceIds;
					std::string securityIPMode;
					std::string maintainTime;
					std::string dispenseMode;
					std::string zoneId;
					std::string tempUpgradeRecoveryTime;
					std::string dBInstanceStorageType;
					std::string collation;
					std::string accountType;
					int maxIOPS;
					std::vector<DBInstanceAttribute::SlaveZone> slaveZones;
					std::string supportUpgradeAccountType;
					Extra extra;
					bool multipleTempUpgrade;
					bool canTempUpgrade;
					std::string regionId;
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
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_