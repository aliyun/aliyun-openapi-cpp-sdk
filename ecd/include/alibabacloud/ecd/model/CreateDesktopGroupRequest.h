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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEDESKTOPGROUPREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEDESKTOPGROUPREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateDesktopGroupRequest : public RpcServiceRequest {
public:
	CreateDesktopGroupRequest();
	~CreateDesktopGroupRequest();
	std::string getDesktopGroupName() const;
	void setDesktopGroupName(const std::string &desktopGroupName);
	int getAllowBufferCount() const;
	void setAllowBufferCount(int allowBufferCount);
	int getGroupVersion() const;
	void setGroupVersion(int groupVersion);
	bool getAllClassifyUsers() const;
	void setAllClassifyUsers(bool allClassifyUsers);
	int getMaxDesktopsCount() const;
	void setMaxDesktopsCount(int maxDesktopsCount);
	bool getVolumeEncryptionEnabled() const;
	void setVolumeEncryptionEnabled(bool volumeEncryptionEnabled);
	int getPeriod() const;
	void setPeriod(int period);
	int getAllowAutoSetup() const;
	void setAllowAutoSetup(int allowAutoSetup);
	long getResetType() const;
	void setResetType(long resetType);
	float getRatioThreshold() const;
	void setRatioThreshold(float ratioThreshold);
	long getKeepDuration() const;
	void setKeepDuration(long keepDuration);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	bool getProfileFollowSwitch() const;
	void setProfileFollowSwitch(bool profileFollowSwitch);
	int getBuyDesktopsCount() const;
	void setBuyDesktopsCount(int buyDesktopsCount);
	std::string getPolicyGroupId() const;
	void setPolicyGroupId(const std::string &policyGroupId);
	std::string getVolumeEncryptionKey() const;
	void setVolumeEncryptionKey(const std::string &volumeEncryptionKey);
	std::string getOfficeSiteId() const;
	void setOfficeSiteId(const std::string &officeSiteId);
	std::string getClassify() const;
	void setClassify(const std::string &classify);
	std::vector<std::string> getEndUserIds() const;
	void setEndUserIds(const std::vector<std::string> &endUserIds);
	std::string getScaleStrategyId() const;
	void setScaleStrategyId(const std::string &scaleStrategyId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getBundleId() const;
	void setBundleId(const std::string &bundleId);
	long getBindAmount() const;
	void setBindAmount(long bindAmount);
	long getLoadPolicy() const;
	void setLoadPolicy(long loadPolicy);
	int getDefaultInitDesktopCount() const;
	void setDefaultInitDesktopCount(int defaultInitDesktopCount);
	long getIdleDisconnectDuration() const;
	void setIdleDisconnectDuration(long idleDisconnectDuration);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDirectoryId() const;
	void setDirectoryId(const std::string &directoryId);
	int getMinDesktopsCount() const;
	void setMinDesktopsCount(int minDesktopsCount);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getComments() const;
	void setComments(const std::string &comments);
	int getOwnType() const;
	void setOwnType(int ownType);
	long getStopDuration() const;
	void setStopDuration(long stopDuration);
	long getConnectDuration() const;
	void setConnectDuration(long connectDuration);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	std::string desktopGroupName_;
	int allowBufferCount_;
	int groupVersion_;
	bool allClassifyUsers_;
	int maxDesktopsCount_;
	bool volumeEncryptionEnabled_;
	int period_;
	int allowAutoSetup_;
	long resetType_;
	float ratioThreshold_;
	long keepDuration_;
	std::string periodUnit_;
	bool autoRenew_;
	bool profileFollowSwitch_;
	int buyDesktopsCount_;
	std::string policyGroupId_;
	std::string volumeEncryptionKey_;
	std::string officeSiteId_;
	std::string classify_;
	std::vector<std::string> endUserIds_;
	std::string scaleStrategyId_;
	std::string clientToken_;
	std::string bundleId_;
	long bindAmount_;
	long loadPolicy_;
	int defaultInitDesktopCount_;
	long idleDisconnectDuration_;
	std::string regionId_;
	std::string directoryId_;
	int minDesktopsCount_;
	std::string fileSystemId_;
	bool autoPay_;
	std::string comments_;
	int ownType_;
	long stopDuration_;
	long connectDuration_;
	std::string vpcId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEDESKTOPGROUPREQUEST_H_
