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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_MODEL_LISTCLUSTERNODESRESULT_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_MODEL_LISTCLUSTERNODESRESULT_H_

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
			class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT ListClusterNodesResult : public ServiceResult
			{
			public:
				struct NodesItem
				{
					struct NetworksItem
					{
						std::string bondName;
						std::string vpdId;
						std::string ip;
						std::string subnetId;
					};
					std::vector<NodesItem::NetworksItem> networks;
					std::string nodeGroupName;
					std::string zoneId;
					std::string nodeGroupId;
					std::string createTime;
					std::string expiredTime;
					std::string hostname;
					std::string imageId;
					std::string machineType;
					std::string nodeId;
					std::string operatingState;
					std::string sn;
				};


				ListClusterNodesResult();
				explicit ListClusterNodesResult(const std::string &payload);
				~ListClusterNodesResult();
				std::string getNextToken()const;
				std::vector<NodesItem> getNodes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<NodesItem> nodes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_CONTROLLER_MODEL_LISTCLUSTERNODESRESULT_H_