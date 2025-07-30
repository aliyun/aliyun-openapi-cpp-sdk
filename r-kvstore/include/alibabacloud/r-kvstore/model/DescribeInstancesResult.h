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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESRESULT_H_

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
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct KVStoreInstance
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					long connections;
					std::string endTime;
					std::string resourceGroupId;
					std::string editionType;
					std::string config;
					long port;
					std::string destroyTime;
					std::string globalInstanceId;
					bool hasRenewChangeOrder;
					int shardCount;
					std::string connectionDomain;
					int slaveReplicaCount;
					std::string privateIp;
					long capacity;
					long qPS;
					std::string networkType;
					std::string instanceStatus;
					std::string packageType;
					long bandwidth;
					std::string instanceType;
					std::vector<KVStoreInstance::Tag> tags;
					std::string replacateId;
					std::string architectureType;
					std::string engineVersion;
					std::string userName;
					std::string zoneId;
					std::string cloudType;
					std::string instanceId;
					std::string shardClass;
					std::string createTime;
					std::string vSwitchId;
					int replicaCount;
					std::string readOnlyCount;
					std::string instanceClass;
					bool isRds;
					std::string secondaryZoneId;
					std::string instanceName;
					int slaveReadOnlyCount;
					std::string vpcId;
					std::string chargeType;
					std::string computingType;
					std::string nodeType;
					std::string connectionMode;
					int proxyCount;
					std::string vpcCloudInstanceId;
					std::string regionId;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				std::vector<KVStoreInstance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<KVStoreInstance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESRESULT_H_