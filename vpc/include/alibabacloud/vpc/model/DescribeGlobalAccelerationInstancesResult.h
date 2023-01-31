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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEGLOBALACCELERATIONINSTANCESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEGLOBALACCELERATIONINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeGlobalAccelerationInstancesResult : public ServiceResult
			{
			public:
				struct GlobalAccelerationInstance
				{
					struct LockReason
					{
						std::string lockReason;
					};
					struct BackendServer
					{
						std::string serverType;
						std::string serverId;
						std::string regionId;
						std::string serverIpAddress;
					};
					struct PublicIpAddress
					{
						std::string allocationId;
						std::string ipAddress;
					};
					std::string status;
					std::string description;
					std::string hasReservationData;
					std::string globalAccelerationInstanceId;
					std::vector<GlobalAccelerationInstance::BackendServer> backendServers;
					std::vector<GlobalAccelerationInstance::LockReason> operationLocks;
					std::string reservationInternetChargeType;
					std::string internetChargeType;
					std::string name;
					std::string reservationOrderType;
					std::string bandwidthType;
					std::string accelerationLocation;
					std::string chargeType;
					std::string serviceLocation;
					std::string bandwidth;
					std::string expiredTime;
					std::string creationTime;
					std::vector<GlobalAccelerationInstance::PublicIpAddress> publicIpAddresses;
					std::string ipAddress;
					std::string regionId;
					std::string reservationActiveTime;
					std::string reservationBandwidth;
				};


				DescribeGlobalAccelerationInstancesResult();
				explicit DescribeGlobalAccelerationInstancesResult(const std::string &payload);
				~DescribeGlobalAccelerationInstancesResult();
				int getTotalCount()const;
				std::vector<GlobalAccelerationInstance> getGlobalAccelerationInstances()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<GlobalAccelerationInstance> globalAccelerationInstances_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEGLOBALACCELERATIONINSTANCESRESULT_H_