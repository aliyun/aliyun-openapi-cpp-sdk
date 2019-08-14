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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCENETWORKSPECREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCENETWORKSPECREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT ModifyInstanceNetworkSpecRequest : public RpcServiceRequest
			{

			public:
				ModifyInstanceNetworkSpecRequest();
				~ModifyInstanceNetworkSpecRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getNetworkChargeType()const;
				void setNetworkChargeType(const std::string& networkChargeType);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
				bool getAllocatePublicIp()const;
				void setAllocatePublicIp(bool allocatePublicIp);

            private:
				long resourceOwnerId_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				int internetMaxBandwidthOut_;
				std::string endTime_;
				std::string startTime_;
				long ownerId_;
				std::string sourceRegionId_;
				std::string instanceId_;
				std::string networkChargeType_;
				int internetMaxBandwidthIn_;
				bool allocatePublicIp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCENETWORKSPECREQUEST_H_