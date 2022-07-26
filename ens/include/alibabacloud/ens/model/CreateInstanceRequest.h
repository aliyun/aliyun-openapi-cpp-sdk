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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEINSTANCEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateInstanceRequest : public RpcServiceRequest {
public:
	CreateInstanceRequest();
	~CreateInstanceRequest();
	bool getUniqueSuffix() const;
	void setUniqueSuffix(bool uniqueSuffix);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getAutoRenewPeriod() const;
	void setAutoRenewPeriod(const std::string &autoRenewPeriod);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	bool getPublicIpIdentification() const;
	void setPublicIpIdentification(bool publicIpIdentification);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	bool getPasswordInherit() const;
	void setPasswordInherit(bool passwordInherit);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDataDisk1Size() const;
	void setDataDisk1Size(const std::string &dataDisk1Size);
	std::string getQuantity() const;
	void setQuantity(const std::string &quantity);
	std::string getIpType() const;
	void setIpType(const std::string &ipType);
	std::string getSystemDiskSize() const;
	void setSystemDiskSize(const std::string &systemDiskSize);
	std::string getPaymentType() const;
	void setPaymentType(const std::string &paymentType);

private:
	bool uniqueSuffix_;
	std::string keyPairName_;
	std::string password_;
	std::string hostName_;
	std::string ensRegionId_;
	std::string autoRenewPeriod_;
	std::string period_;
	bool publicIpIdentification_;
	long ownerId_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string instanceName_;
	std::string autoRenew_;
	std::string internetChargeType_;
	std::string imageId_;
	std::string userData_;
	bool passwordInherit_;
	std::string instanceType_;
	std::string dataDisk1Size_;
	std::string quantity_;
	std::string ipType_;
	std::string systemDiskSize_;
	std::string paymentType_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEINSTANCEREQUEST_H_
