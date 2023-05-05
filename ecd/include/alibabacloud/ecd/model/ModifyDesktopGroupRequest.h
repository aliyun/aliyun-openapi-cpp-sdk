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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYDESKTOPGROUPREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYDESKTOPGROUPREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyDesktopGroupRequest : public RpcServiceRequest {
public:
	ModifyDesktopGroupRequest();
	~ModifyDesktopGroupRequest();
	std::string getClassify() const;
	void setClassify(const std::string &classify);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getScaleStrategyId() const;
	void setScaleStrategyId(const std::string &scaleStrategyId);
	bool getDisableSessionConfig() const;
	void setDisableSessionConfig(bool disableSessionConfig);
	long getBindAmount() const;
	void setBindAmount(long bindAmount);
	long getLoadPolicy() const;
	void setLoadPolicy(long loadPolicy);
	std::string getDesktopGroupName() const;
	void setDesktopGroupName(const std::string &desktopGroupName);
	int getAllowBufferCount() const;
	void setAllowBufferCount(int allowBufferCount);
	std::vector<std::string> getPolicyGroupIds() const;
	void setPolicyGroupIds(const std::vector<std::string> &policyGroupIds);
	long getIdleDisconnectDuration() const;
	void setIdleDisconnectDuration(long idleDisconnectDuration);
	std::string getDesktopGroupId() const;
	void setDesktopGroupId(const std::string &desktopGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getMinDesktopsCount() const;
	void setMinDesktopsCount(int minDesktopsCount);
	int getMaxDesktopsCount() const;
	void setMaxDesktopsCount(int maxDesktopsCount);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	int getAllowAutoSetup() const;
	void setAllowAutoSetup(int allowAutoSetup);
	std::string getComments() const;
	void setComments(const std::string &comments);
	long getResetType() const;
	void setResetType(long resetType);
	std::string getOwnBundleId() const;
	void setOwnBundleId(const std::string &ownBundleId);
	long getStopDuration() const;
	void setStopDuration(long stopDuration);
	float getRatioThreshold() const;
	void setRatioThreshold(float ratioThreshold);
	long getKeepDuration() const;
	void setKeepDuration(long keepDuration);
	long getConnectDuration() const;
	void setConnectDuration(long connectDuration);
	bool getProfileFollowSwitch() const;
	void setProfileFollowSwitch(bool profileFollowSwitch);
	int getBuyDesktopsCount() const;
	void setBuyDesktopsCount(int buyDesktopsCount);
	std::string getPolicyGroupId() const;
	void setPolicyGroupId(const std::string &policyGroupId);

private:
	std::string classify_;
	std::string imageId_;
	std::string scaleStrategyId_;
	bool disableSessionConfig_;
	long bindAmount_;
	long loadPolicy_;
	std::string desktopGroupName_;
	int allowBufferCount_;
	std::vector<std::string> policyGroupIds_;
	long idleDisconnectDuration_;
	std::string desktopGroupId_;
	std::string regionId_;
	int minDesktopsCount_;
	int maxDesktopsCount_;
	std::string fileSystemId_;
	int allowAutoSetup_;
	std::string comments_;
	long resetType_;
	std::string ownBundleId_;
	long stopDuration_;
	float ratioThreshold_;
	long keepDuration_;
	long connectDuration_;
	bool profileFollowSwitch_;
	int buyDesktopsCount_;
	std::string policyGroupId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYDESKTOPGROUPREQUEST_H_
