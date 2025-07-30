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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstanceAttribute
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					long connections;
					bool autoSecondaryZone;
					std::string resourceGroupId;
					long port;
					std::string globalInstanceId;
					std::string hasRenewChangeOrder;
					bool isSupportTDE;
					int shardCount;
					int slaveReplicaCount;
					std::string privateIp;
					long capacity;
					long qPS;
					std::string realInstanceClass;
					std::string packageType;
					std::string availabilityValue;
					std::vector<DBInstanceAttribute::Tag> tags;
					std::string engine;
					bool isOrderCompleted;
					std::string storageType;
					std::string engineVersion;
					std::string instanceId;
					int replicaCount;
					std::string vSwitchId;
					std::string replicationMode;
					std::string backupLogStartTime;
					std::string instanceName;
					std::string storage;
					std::string vpcId;
					std::string nodeType;
					std::string vpcCloudInstanceId;
					std::string endTime;
					std::string config;
					std::string zoneType;
					std::string connectionDomain;
					std::string maintainEndTime;
					std::string securityIPList;
					std::string networkType;
					std::string instanceStatus;
					long bandwidth;
					bool instanceReleaseProtection;
					std::string instanceType;
					std::string maintainStartTime;
					std::string architectureType;
					std::string zoneId;
					std::string cloudType;
					std::string createTime;
					int readOnlyCount;
					std::string instanceClass;
					std::string auditLogRetention;
					bool isRds;
					std::string secondaryZoneId;
					std::string replicaId;
					long slaveReadOnlyCount;
					std::string chargeType;
					std::string vpcAuthMode;
					std::string regionId;
				};


				DescribeInstanceAttributeResult();
				explicit DescribeInstanceAttributeResult(const std::string &payload);
				~DescribeInstanceAttributeResult();
				std::vector<DBInstanceAttribute> getInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceAttribute> instances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCEATTRIBUTERESULT_H_