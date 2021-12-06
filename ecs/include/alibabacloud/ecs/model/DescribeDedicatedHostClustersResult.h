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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTCLUSTERSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTCLUSTERSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDedicatedHostClustersResult : public ServiceResult
			{
			public:
				struct DedicatedHostCluster
				{
					struct DedicatedHostClusterCapacity
					{
						struct LocalStorageCapacity
						{
							int totalDisk;
							int availableDisk;
							std::string dataDiskCategory;
						};
						struct AvailableInstanceType
						{
							int availableInstanceCapacity;
							std::string instanceType;
						};
						std::vector<AvailableInstanceType> availableInstanceTypes;
						int availableMemory;
						int totalMemory;
						int availableVcpus;
						int totalVcpus;
						std::vector<LocalStorageCapacity> localStorageCapacities;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string description;
					std::string resourceGroupId;
					std::string zoneId;
					std::string dedicatedHostClusterName;
					DedicatedHostClusterCapacity dedicatedHostClusterCapacity;
					std::string regionId;
					std::vector<std::string> dedicatedHostIds;
					std::vector<DedicatedHostCluster::Tag> tags;
					std::string dedicatedHostClusterId;
				};


				DescribeDedicatedHostClustersResult();
				explicit DescribeDedicatedHostClustersResult(const std::string &payload);
				~DescribeDedicatedHostClustersResult();
				std::vector<DedicatedHostCluster> getDedicatedHostClusters()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DedicatedHostCluster> dedicatedHostClusters_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTCLUSTERSRESULT_H_