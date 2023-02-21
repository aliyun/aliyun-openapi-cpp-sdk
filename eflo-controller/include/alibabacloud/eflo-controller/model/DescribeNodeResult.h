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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBENODERESULT_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBENODERESULT_H_

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
			class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT DescribeNodeResult : public ServiceResult
			{
			public:
				struct NetworksItem
				{
					std::string bondName;
					std::string vpdId;
					std::string ip;
					std::string subnetId;
				};


				DescribeNodeResult();
				explicit DescribeNodeResult(const std::string &payload);
				~DescribeNodeResult();
				std::vector<NetworksItem> getNetworks()const;
				std::string getNodeGroupName()const;
				std::string getZoneId()const;
				std::string getClusterId()const;
				std::string getCreateTime()const;
				std::string getHostname()const;
				std::string getMachineType()const;
				std::string getOperatingState()const;
				std::string getNodeGroupId()const;
				std::string getExpiredTime()const;
				std::string getImageId()const;
				std::string getNodeId()const;
				std::string getClusterName()const;
				std::string getSn()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NetworksItem> networks_;
				std::string nodeGroupName_;
				std::string zoneId_;
				std::string clusterId_;
				std::string createTime_;
				std::string hostname_;
				std::string machineType_;
				std::string operatingState_;
				std::string nodeGroupId_;
				std::string expiredTime_;
				std::string imageId_;
				std::string nodeId_;
				std::string clusterName_;
				std::string sn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBENODERESULT_H_