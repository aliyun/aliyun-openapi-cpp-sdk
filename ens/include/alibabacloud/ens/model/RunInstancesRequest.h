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

#ifndef ALIBABACLOUD_ENS_MODEL_RUNINSTANCESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_RUNINSTANCESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT RunInstancesRequest : public RpcServiceRequest {
public:
	struct SystemDisk {
		long size;
		std::string category;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct DataDisk {
		long size;
		bool encrypted;
		std::string category;
		std::string kMSKeyId;
	};
	RunInstancesRequest();
	~RunInstancesRequest();
	std::string getScheduleAreaLevel() const;
	void setScheduleAreaLevel(const std::string &scheduleAreaLevel);
	bool getUniqueSuffix() const;
	void setUniqueSuffix(bool uniqueSuffix);
	std::string getInstanceChargeStrategy() const;
	void setInstanceChargeStrategy(const std::string &instanceChargeStrategy);
	std::string getSecurityId() const;
	void setSecurityId(const std::string &securityId);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	SystemDisk getSystemDisk() const;
	void setSystemDisk(const SystemDisk &systemDisk);
	std::string getNetDistrictCode() const;
	void setNetDistrictCode(const std::string &netDistrictCode);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	long getPeriod() const;
	void setPeriod(long period);
	bool getPublicIpIdentification() const;
	void setPublicIpIdentification(bool publicIpIdentification);
	std::string getBillingCycle() const;
	void setBillingCycle(const std::string &billingCycle);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getNetWorkId() const;
	void setNetWorkId(const std::string &netWorkId);
	std::string getSchedulingPriceStrategy() const;
	void setSchedulingPriceStrategy(const std::string &schedulingPriceStrategy);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	long getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(long internetMaxBandwidthOut);
	std::string getAutoUseCoupon() const;
	void setAutoUseCoupon(const std::string &autoUseCoupon);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	bool getPasswordInherit() const;
	void setPasswordInherit(bool passwordInherit);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	long getAmount() const;
	void setAmount(long amount);
	std::string getAutoReleaseTime() const;
	void setAutoReleaseTime(const std::string &autoReleaseTime);
	std::string getIpType() const;
	void setIpType(const std::string &ipType);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	std::string getSchedulingStrategy() const;
	void setSchedulingStrategy(const std::string &schedulingStrategy);
	std::string getCarrier() const;
	void setCarrier(const std::string &carrier);

private:
	std::string scheduleAreaLevel_;
	bool uniqueSuffix_;
	std::string instanceChargeStrategy_;
	std::string securityId_;
	std::string keyPairName_;
	std::string password_;
	std::string hostName_;
	SystemDisk systemDisk_;
	std::string netDistrictCode_;
	std::string ensRegionId_;
	std::vector<Tag> tag_;
	long period_;
	bool publicIpIdentification_;
	std::string billingCycle_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string spotStrategy_;
	std::string periodUnit_;
	std::string instanceName_;
	bool autoRenew_;
	std::string internetChargeType_;
	std::string netWorkId_;
	std::string schedulingPriceStrategy_;
	std::string imageId_;
	long internetMaxBandwidthOut_;
	std::string autoUseCoupon_;
	std::string userData_;
	bool passwordInherit_;
	std::string instanceType_;
	std::string instanceChargeType_;
	long amount_;
	std::string autoReleaseTime_;
	std::string ipType_;
	int spotDuration_;
	std::vector<DataDisk> dataDisk_;
	std::string schedulingStrategy_;
	std::string carrier_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_RUNINSTANCESREQUEST_H_
