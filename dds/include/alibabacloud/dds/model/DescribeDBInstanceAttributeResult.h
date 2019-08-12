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
					struct MongosAttribute
					{
						std::string connectSting;
						std::string nodeClass;
						std::string nodeDescription;
						int maxConnections;
						std::string vPCId;
						int port;
						std::string vSwitchId;
						std::string nodeId;
						std::string vpcCloudInstanceId;
						int maxIOPS;
					};
					struct ShardAttribute
					{
						std::string nodeClass;
						std::string nodeDescription;
						int maxConnections;
						int port;
						std::string nodeId;
						int nodeStorage;
						std::string connectString;
						int maxIOPS;
					};
					struct ConfigserverAttribute
					{
						std::string nodeClass;
						std::string nodeDescription;
						int maxConnections;
						int port;
						std::string nodeId;
						int nodeStorage;
						std::string connectString;
						int maxIOPS;
					};
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
					std::string vPCCloudInstanceIds;
					std::string resourceGroupId;
					std::string dBInstanceType;
					std::string replicaSetName;
					std::string storageEngine;
					std::vector<DBInstance::ReplicaSet> replicaSets;
					std::string maintainEndTime;
					std::vector<DBInstance::MongosAttribute> mongosList;
					std::string dBInstanceId;
					std::string networkType;
					int dBInstanceStorage;
					std::string lastDowngradeTime;
					std::vector<DBInstance::Tag> tags;
					std::string dBInstanceDescription;
					std::string engine;
					std::string maintainStartTime;
					std::string replacateId;
					std::string engineVersion;
					std::string zoneId;
					std::string dBInstanceStatus;
					std::string replicationFactor;
					std::string readonlyReplicas;
					int maxConnections;
					std::string dBInstanceClass;
					std::string vPCId;
					std::string vSwitchId;
					std::vector<DBInstance::ShardAttribute> shardList;
					std::string lockMode;
					int maxIOPS;
					std::string chargeType;
					std::string currentKernelVersion;
					std::string vpcAuthMode;
					std::string creationTime;
					std::vector<DBInstance::ConfigserverAttribute> configserverList;
					std::string regionId;
					std::string expireTime;
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