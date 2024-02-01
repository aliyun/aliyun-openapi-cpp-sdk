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

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyInstanceNetworkSpecRequest : public RpcServiceRequest {
public:
	struct PromotionOptions {
		std::string couponNo;
	};
	ModifyInstanceNetworkSpecRequest();
	~ModifyInstanceNetworkSpecRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getISP() const;
	void setISP(const std::string &iSP);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	PromotionOptions getPromotionOptions() const;
	void setPromotionOptions(const PromotionOptions &promotionOptions);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getNetworkChargeType() const;
	void setNetworkChargeType(const std::string &networkChargeType);
	int getInternetMaxBandwidthIn() const;
	void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
	bool getAllocatePublicIp() const;
	void setAllocatePublicIp(bool allocatePublicIp);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string iSP_;
	int internetMaxBandwidthOut_;
	std::string startTime_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	PromotionOptions promotionOptions_;
	std::string instanceId_;
	std::string networkChargeType_;
	int internetMaxBandwidthIn_;
	bool allocatePublicIp_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCENETWORKSPECREQUEST_H_
