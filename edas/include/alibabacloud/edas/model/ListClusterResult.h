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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTCLUSTERRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListClusterResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					std::string description;
					int oversoldFactor;
					int nodeNum;
					std::string resourceGroupId;
					std::string clusterId;
					long createTime;
					int cpu;
					int clusterType;
					int networkMode;
					std::string csClusterId;
					int memUsed;
					std::string vpcId;
					int mem;
					long updateTime;
					std::string clusterName;
					std::string regionId;
					std::string iaasProvider;
					int cpuUsed;
				};


				ListClusterResult();
				explicit ListClusterResult(const std::string &payload);
				~ListClusterResult();
				std::vector<Cluster> getClusterList()const;
				std::string getMessage()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Cluster> clusterList_;
				std::string message_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTCLUSTERRESULT_H_