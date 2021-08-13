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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT CreateSmartAccessGatewayRequest : public RpcServiceRequest {
public:
	CreateSmartAccessGatewayRequest();
	~CreateSmartAccessGatewayRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getReceiverTown() const;
	void setReceiverTown(const std::string &receiverTown);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getReceiverDistrict() const;
	void setReceiverDistrict(const std::string &receiverDistrict);
	std::string getBuyerMessage() const;
	void setBuyerMessage(const std::string &buyerMessage);
	std::string getReceiverState() const;
	void setReceiverState(const std::string &receiverState);
	int getPeriod() const;
	void setPeriod(int period);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getReceiverPhone() const;
	void setReceiverPhone(const std::string &receiverPhone);
	std::string getHaType() const;
	void setHaType(const std::string &haType);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getReceiverCountry() const;
	void setReceiverCountry(const std::string &receiverCountry);
	int getMaxBandWidth() const;
	void setMaxBandWidth(int maxBandWidth);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getUserCount() const;
	void setUserCount(int userCount);
	std::string getReceiverAddress() const;
	void setReceiverAddress(const std::string &receiverAddress);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getHardWareSpec() const;
	void setHardWareSpec(const std::string &hardWareSpec);
	std::string getReceiverEmail() const;
	void setReceiverEmail(const std::string &receiverEmail);
	std::string getReceiverCity() const;
	void setReceiverCity(const std::string &receiverCity);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getCPEVersion() const;
	void setCPEVersion(const std::string &cPEVersion);
	std::string getReceiverMobile() const;
	void setReceiverMobile(const std::string &receiverMobile);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getReceiverName() const;
	void setReceiverName(const std::string &receiverName);
	bool getAlreadyHaveSag() const;
	void setAlreadyHaveSag(bool alreadyHaveSag);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	long getDataPlan() const;
	void setDataPlan(long dataPlan);
	std::string getReceiverZip() const;
	void setReceiverZip(const std::string &receiverZip);

private:
	long resourceOwnerId_;
	std::string receiverTown_;
	std::string resourceGroupId_;
	std::string receiverDistrict_;
	std::string buyerMessage_;
	std::string receiverState_;
	int period_;
	long ownerId_;
	std::string receiverPhone_;
	std::string haType_;
	std::string name_;
	std::string receiverCountry_;
	int maxBandWidth_;
	std::string description_;
	std::string regionId_;
	int userCount_;
	std::string receiverAddress_;
	std::string instanceType_;
	std::string hardWareSpec_;
	std::string receiverEmail_;
	std::string receiverCity_;
	bool autoPay_;
	std::string cPEVersion_;
	std::string receiverMobile_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string receiverName_;
	bool alreadyHaveSag_;
	std::string chargeType_;
	long dataPlan_;
	std::string receiverZip_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYREQUEST_H_
