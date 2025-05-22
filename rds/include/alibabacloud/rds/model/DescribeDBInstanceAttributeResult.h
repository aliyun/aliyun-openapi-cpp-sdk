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
					struct BabelfishConfig
					{
						std::string babelfishEnabled;
						std::string migrationMode;
					};
					struct Extra
					{
						std::string replicaGroupStatus;
						std::string activeReplicaDBInstanceID;
						std::string replicaGroupID;
						std::vector<std::string> dBInstanceIds;
						std::string accountSecurityPolicy;
						std::string recoveryModel;
					};
					struct ServerlessConfig
					{
						bool switchForce;
						double scaleMin;
						double scaleMax;
						bool autoPause;
					};
					struct DBClusterNode
					{
						std::string status;
						std::string nodeRole;
						std::string nodeZoneId;
						std::string classCode;
						std::string memory;
						std::string nodeId;
						std::string cpu;
						std::string classType;
						std::string nodeRegionId;
					};
					struct ReadOnlyDBInstanceId
					{
						std::string dBInstanceId;
					};
					struct SlaveZone
					{
						std::string zoneId;
					};
					std::string blueGreenDeploymentName;
					std::string greenInstanceName;
					std::string resourceGroupId;
					std::string incrementSourceDBInstanceId;
					std::string masterZone;
					std::string latestKernelVersion;
					std::string consoleVersion;
					std::string generalGroupName;
					std::string instanceNetworkType;
					std::string replicateId;
					std::string autoUpgradeMinorVersion;
					std::string dBInstanceId;
					std::string pGBouncerEnabled;
					std::string instructionSetArch;
					std::string lockReason;
					std::string availabilityValue;
					std::string dBInstanceDescription;
					std::string iPType;
					int maxIOMBPS;
					std::string engineVersion;
					std::string dBInstanceClass;
					std::string vSwitchId;
					int tipsLevel;
					std::string guardDBInstanceId;
					std::string lockMode;
					std::string supportCreateSuperAccount;
					std::string timeZone;
					bool computeBurstEnabled;
					std::string vpcId;
					std::string masterInstanceId;
					std::string currentKernelVersion;
					std::string connectionMode;
					std::string creationTime;
					std::string readDelayTime;
					std::string vpcCloudInstanceId;
					std::string readonlyInstanceSQLDelayedTime;
					std::string connectionString;
					std::string disasterRecoveryInfo;
					std::string advancedFeatures;
					int dBMaxQuantity;
					std::string dBInstanceNetType;
					std::string superPermissionMode;
					std::string dedicatedHostGroupId;
					int tempUpgradeRecoveryCpu;
					std::string tempDBInstanceId;
					std::string blueInstanceName;
					int tempUpgradeRecoveryMemory;
					std::string guardDBInstanceName;
					std::string originConfiguration;
					std::string securityIPList;
					std::string tempUpgradeRecoveryMaxConnections;
					std::string securityIPMode;
					std::string maintainTime;
					std::string dispenseMode;
					std::string readOnlyStatus;
					std::string dBInstanceStorageType;
					int maxIOPS;
					std::vector<DBInstanceAttribute::SlaveZone> slaveZones;
					std::string bpeEnabled;
					bool multipleTempUpgrade;
					std::string kindCode;
					std::string tips;
					long dBInstanceMemory;
					std::string port;
					std::string dBInstanceType;
					std::string dBInstanceClassType;
					std::string tempUpgradeRecoveryMaxIOPS;
					int dBInstanceStorage;
					std::string engine;
					std::string tempUpgradeRecoveryClass;
					std::string ioAccelerationEnabled;
					std::string dBInstanceDiskUsed;
					std::string dBInstanceStatus;
					int maxConnections;
					int accountMaxQuantity;
					std::vector<DBInstanceAttribute::DBClusterNode> dBClusterNodes;
					bool deletionProtection;
					std::string payType;
					int insId;
					bool supportCompression;
					std::string tempUpgradeTimeEnd;
					std::string tempUpgradeTimeStart;
					int proxyType;
					std::string expireTime;
					std::string disasterRecoveryInstances;
					std::string category;
					std::string optimizedWritesInfo;
					std::string dBInstanceCPU;
					std::string compressionMode;
					std::vector<DBInstanceAttribute::ReadOnlyDBInstanceId> readOnlyDBInstanceIds;
					std::string compressionRatio;
					bool burstingEnabled;
					bool coldDataEnabled;
					std::string zoneId;
					std::string tempUpgradeRecoveryTime;
					std::string collation;
					std::string accountType;
					std::string supportUpgradeAccountType;
					Extra extra;
					ServerlessConfig serverlessConfig;
					BabelfishConfig babelfishConfig;
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