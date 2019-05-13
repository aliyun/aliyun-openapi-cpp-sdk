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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeDedicatedHostsResult : public ServiceResult
			{
			public:
				struct DedicatedHost
				{
					struct Capacity
					{
						int availableVgpus;
						std::string localStorageCategory;
						int totalVgpus;
						float totalMemory;
						float availableMemory;
						int availableVcpus;
						int totalVcpus;
						int availableLocalStorage;
						int totalLocalStorage;
					};
					struct NetworkAttributes
					{
						int udpTimeout;
						int slbUdpTimeout;
					};
					struct Instance
					{
						std::string instanceId;
						std::string instanceType;
					};
					struct OperationLock
					{
						std::string lockReason;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					int physicalGpus;
					std::string machineId;
					std::string dedicatedHostId;
					std::string description;
					std::string resourceGroupId;
					NetworkAttributes networkAttributes;
					std::string gPUSpec;
					Capacity capacity;
					std::string dedicatedHostName;
					std::string expiredTime;
					std::string saleCycle;
					std::vector<DedicatedHost::Tag> tags;
					std::string status;
					std::string zoneId;
					std::string autoPlacement;
					std::string dedicatedHostType;
					std::vector<DedicatedHost::OperationLock> operationLocks;
					std::vector<DedicatedHost::Instance> instances;
					int cores;
					int sockets;
					std::string chargeType;
					std::vector<std::string> supportedInstanceTypeFamilies;
					std::string actionOnMaintenance;
					std::string creationTime;
					std::string regionId;
					std::vector<std::string> supportedInstanceTypesList;
					std::string autoReleaseTime;
				};


				DescribeDedicatedHostsResult();
				explicit DescribeDedicatedHostsResult(const std::string &payload);
				~DescribeDedicatedHostsResult();
				std::vector<DedicatedHost> getDedicatedHosts()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DedicatedHost> dedicatedHosts_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTSRESULT_H_