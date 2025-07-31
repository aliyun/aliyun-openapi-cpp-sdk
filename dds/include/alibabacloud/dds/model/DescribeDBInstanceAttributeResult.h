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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeDBInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct ReplicaSet
					{
						std::string replicaSetRole;
						std::string connectionDomain;
						std::string vPCCloudInstanceId;
						std::string connectionPort;
						std::string vPCId;
						std::string networkType;
						std::string vSwitchId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct MongosAttribute
					{
						std::string connectSting;
						std::string status;
						int maxConnections;
						std::string vPCId;
						std::string vSwitchId;
						int port;
						std::string lockMode;
						int maxIOPS;
						std::string nodeClass;
						std::string nodeDescription;
						std::string currentKernelVersion;
						std::string nodeId;
						std::string vpcCloudInstanceId;
						std::string connectString;
					};
					struct ShardAttribute
					{
						std::string status;
						int maxConnections;
						int readonlyReplicas;
						int port;
						std::string lockMode;
						std::string replicaSetName;
						std::string maxDiskMbps;
						int maxIOPS;
						std::string nodeClass;
						std::string nodeDescription;
						std::string currentKernelVersion;
						std::string nodeId;
						int nodeStorage;
						std::string connectString;
					};
					struct ConfigserverAttribute
					{
						std::string status;
						std::string nodeClass;
						std::string nodeDescription;
						int maxConnections;
						std::string currentKernelVersion;
						int port;
						std::string nodeId;
						int nodeStorage;
						std::string lockMode;
						std::string connectString;
						int maxIOPS;
					};
					struct NetworkAddress
					{
						std::string role;
						std::string networkAddress;
						std::string vPCId;
						std::string networkType;
						std::string nodeType;
						std::string vSwitchId;
						std::string expiredTime;
						std::string port;
						std::string nodeId;
						std::string iPAddress;
					};
					std::string resourceGroupId;
					std::string capacityUnit;
					std::string hiddenZoneId;
					bool encrypted;
					std::string destroyTime;
					std::string dBInstanceType;
					std::string replicaSetName;
					std::vector<DBInstance::ReplicaSet> replicaSets;
					std::string syncPercent;
					std::string dBInstanceId;
					std::string lastDowngradeTime;
					int dBInstanceStorage;
					int maxMBPS;
					std::vector<DBInstance::Tag> tags;
					std::string dBInstanceDescription;
					std::string engine;
					std::string replacateId;
					bool dBInstanceReleaseProtection;
					std::string engineVersion;
					std::string storageType;
					std::string dBInstanceStatus;
					int maxConnections;
					std::string vPCId;
					std::string dBInstanceClass;
					std::string vSwitchId;
					std::string lockMode;
					long provisionedIops;
					std::string currentKernelVersion;
					std::string creationTime;
					std::vector<DBInstance::NetworkAddress> networkAddresses;
					std::vector<DBInstance::ConfigserverAttribute> configserverList;
					std::string expireTime;
					std::string disasterRecoveryInfo;
					std::string vPCCloudInstanceIds;
					std::string encryptionKey;
					std::string storageEngine;
					std::string maintainEndTime;
					std::vector<DBInstance::MongosAttribute> mongosList;
					std::string networkType;
					std::string paymentType;
					std::string maintainStartTime;
					bool burstingEnabled;
					std::string zoneId;
					std::string readonlyReplicas;
					std::string replicationFactor;
					std::string cloudType;
					std::string dBInstanceOrderStatus;
					std::vector<DBInstance::ShardAttribute> shardList;
					int maxIOPS;
					std::string secondaryZoneId;
					bool useClusterBackup;
					std::string vpcAuthMode;
					std::string protocolType;
					std::string chargeType;
					std::string regionId;
					std::string kindCode;
				};


				DescribeDBInstanceAttributeResult();
				explicit DescribeDBInstanceAttributeResult(const std::string &payload);
				~DescribeDBInstanceAttributeResult();
				std::vector<DBInstance> getDBInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstance> dBInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_