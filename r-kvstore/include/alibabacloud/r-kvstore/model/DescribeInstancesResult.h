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
					std::string config;
					long port;
					std::string destroyTime;
					std::string hasRenewChangeOrder;
					std::string connectionDomain;
					long capacity;
					long qPS;
					std::string privateIp;
					std::string instanceStatus;
					std::string networkType;
					long bandwidth;
					std::string packageType;
					std::string searchKey;
					std::string instanceType;
					std::vector<KVStoreInstance::Tag> tags;
					std::string replacateId;
					std::string architectureType;
					std::string userName;
					std::string engineVersion;
					std::string zoneId;
					std::string instanceId;
					std::string vSwitchId;
					std::string createTime;
					std::string instanceClass;
					bool isRds;
					std::string instanceName;
					std::string vpcId;
					std::string chargeType;
					std::string nodeType;
					std::string connectionMode;
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