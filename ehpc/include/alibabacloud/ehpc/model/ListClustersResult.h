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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTCLUSTERSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTCLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListClustersResult : public ServiceResult
			{
			public:
				struct ClusterInfoSimple
				{
					struct Managers
					{
						int normalCount;
						int operatingCount;
						int stoppedCount;
						int total;
						int exceptionCount;
					};
					struct Computes
					{
						int normalCount;
						int operatingCount;
						int stoppedCount;
						int total;
						int exceptionCount;
					};
					struct TotalResources
					{
						int memory;
						int cpu;
						int gpu;
					};
					struct UsedResources
					{
						int memory;
						int cpu;
						int gpu;
					};
					std::string imageOwnerAlias;
					std::string description;
					std::string nodePrefix;
					std::string instanceChargeType;
					float computeSpotPriceLimit;
					std::string nodeSuffix;
					int count;
					std::string name;
					std::string deployMode;
					TotalResources totalResources;
					std::string imageId;
					std::string instanceType;
					std::string loginNodes;
					Computes computes;
					std::string status;
					std::string zoneId;
					std::string vSwitchId;
					std::string createTime;
					std::string schedulerType;
					std::string computeSpotStrategy;
					std::string accountType;
					std::string ehpcVersion;
					std::string baseOsTag;
					UsedResources usedResources;
					std::string vpcId;
					Managers managers;
					std::string osTag;
					std::string id;
					std::string regionId;
					std::string location;
				};


				ListClustersResult();
				explicit ListClustersResult(const std::string &payload);
				~ListClustersResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ClusterInfoSimple> getClusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ClusterInfoSimple> clusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTCLUSTERSRESULT_H_