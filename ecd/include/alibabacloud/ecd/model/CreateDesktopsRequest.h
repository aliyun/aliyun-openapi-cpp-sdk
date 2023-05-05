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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEDESKTOPSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEDESKTOPSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateDesktopsRequest : public RpcServiceRequest {
public:
	struct DesktopTimers {
		std::string cronExpression;
		std::string timerType;
		bool allowClientSetting;
		std::string resetType;
		bool enforce;
		int interval;
		std::string operationType;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct BundleModels {
		bool volumeEncryptionEnabled;
		std::string volumeEncryptionKey;
		int amount;
		std::string desktopName;
		std::string hostname;
		std::string bundleId;
	};
	struct UserCommands {
		std::string contentEncoding;
		std::string content;
		std::string contentType;
	};
	CreateDesktopsRequest();
	~CreateDesktopsRequest();
	std::string getVolumeEncryptionKey() const;
	void setVolumeEncryptionKey(const std::string &volumeEncryptionKey);
	std::string getOfficeSiteId() const;
	void setOfficeSiteId(const std::string &officeSiteId);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getBundleId() const;
	void setBundleId(const std::string &bundleId);
	std::string getUserAssignMode() const;
	void setUserAssignMode(const std::string &userAssignMode);
	std::string getHostname() const;
	void setHostname(const std::string &hostname);
	std::vector<DesktopTimers> getDesktopTimers() const;
	void setDesktopTimers(const std::vector<DesktopTimers> &desktopTimers);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDesktopNameSuffix() const;
	void setDesktopNameSuffix(bool desktopNameSuffix);
	std::string getSystemDiskSize() const;
	void setSystemDiskSize(const std::string &systemDiskSize);
	std::string getDirectoryId() const;
	void setDirectoryId(const std::string &directoryId);
	std::vector<std::string> getEndUserId() const;
	void setEndUserId(const std::vector<std::string> &endUserId);
	std::string getDesktopMemberIp() const;
	void setDesktopMemberIp(const std::string &desktopMemberIp);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<BundleModels> getBundleModels() const;
	void setBundleModels(const std::vector<BundleModels> &bundleModels);
	bool getVolumeEncryptionEnabled() const;
	void setVolumeEncryptionEnabled(bool volumeEncryptionEnabled);
	std::string getDesktopName() const;
	void setDesktopName(const std::string &desktopName);
	int getAmount() const;
	void setAmount(int amount);
	int getPeriod() const;
	void setPeriod(int period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::vector<UserCommands> getUserCommands() const;
	void setUserCommands(const std::vector<UserCommands> &userCommands);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getEcsInstanceType() const;
	void setEcsInstanceType(const std::string &ecsInstanceType);
	std::string getPromotionId() const;
	void setPromotionId(const std::string &promotionId);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getDataDiskSize() const;
	void setDataDiskSize(const std::string &dataDiskSize);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getPolicyGroupId() const;
	void setPolicyGroupId(const std::string &policyGroupId);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string volumeEncryptionKey_;
	std::string officeSiteId_;
	std::string imageId_;
	std::string bundleId_;
	std::string userAssignMode_;
	std::string hostname_;
	std::vector<DesktopTimers> desktopTimers_;
	std::string regionId_;
	bool desktopNameSuffix_;
	std::string systemDiskSize_;
	std::string directoryId_;
	std::vector<std::string> endUserId_;
	std::string desktopMemberIp_;
	std::vector<Tag> tag_;
	std::vector<BundleModels> bundleModels_;
	bool volumeEncryptionEnabled_;
	std::string desktopName_;
	int amount_;
	int period_;
	bool autoPay_;
	std::vector<UserCommands> userCommands_;
	std::string groupId_;
	std::string ecsInstanceType_;
	std::string promotionId_;
	std::string periodUnit_;
	bool autoRenew_;
	std::string dataDiskSize_;
	std::string vpcId_;
	std::string chargeType_;
	std::string policyGroupId_;
	std::string userName_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEDESKTOPSREQUEST_H_
