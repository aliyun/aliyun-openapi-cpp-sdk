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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBECLUSTERRESULT_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBECLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eflo-controller/Eflo_controllerExport.h>

namespace AlibabaCloud
{
	namespace Eflo_controller
	{
		namespace Model
		{
			class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT DescribeClusterResult : public ServiceResult
			{
			public:
				struct ComponentsItem
				{
					std::string componentType;
					std::string componentId;
				};
				struct NetworksItem
				{
					std::string vpdId;
				};


				DescribeClusterResult();
				explicit DescribeClusterResult(const std::string &payload);
				~DescribeClusterResult();
				std::vector<NetworksItem> getNetworks()const;
				std::string getTaskId()const;
				long getNodeCount()const;
				std::string getResourceGroupId()const;
				std::string getClusterId()const;
				std::string getCreateTime()const;
				long getNodeGroupCount()const;
				std::string getOperatingState()const;
				std::string getClusterType()const;
				std::vector<ComponentsItem> getComponents()const;
				std::string getUpdateTime()const;
				std::string getClusterName()const;
				std::string getClusterDescription()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NetworksItem> networks_;
				std::string taskId_;
				long nodeCount_;
				std::string resourceGroupId_;
				std::string clusterId_;
				std::string createTime_;
				long nodeGroupCount_;
				std::string operatingState_;
				std::string clusterType_;
				std::vector<ComponentsItem> components_;
				std::string updateTime_;
				std::string clusterName_;
				std::string clusterDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBECLUSTERRESULT_H_