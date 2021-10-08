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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEVIRTUALBORDERROUTERSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEVIRTUALBORDERROUTERSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeVirtualBorderRoutersResult : public ServiceResult
			{
			public:
				struct VirtualBorderRouterType
				{
					std::string status;
					std::string peerGatewayIp;
					std::string routeTableId;
					std::string description;
					std::string activationTime;
					std::string circuitCode;
					std::string physicalConnectionId;
					std::string vlanInterfaceId;
					std::string physicalConnectionStatus;
					std::string vbrId;
					std::string physicalConnectionOwnerUid;
					std::string peeringSubnetMask;
					std::string terminationTime;
					std::string recoveryTime;
					std::string name;
					std::string localGatewayIp;
					std::string creationTime;
					std::string accessPointId;
					int vlanId;
					std::string physicalConnectionBusinessStatus;
				};


				DescribeVirtualBorderRoutersResult();
				explicit DescribeVirtualBorderRoutersResult(const std::string &payload);
				~DescribeVirtualBorderRoutersResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<VirtualBorderRouterType> getVirtualBorderRouterSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<VirtualBorderRouterType> virtualBorderRouterSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEVIRTUALBORDERROUTERSRESULT_H_