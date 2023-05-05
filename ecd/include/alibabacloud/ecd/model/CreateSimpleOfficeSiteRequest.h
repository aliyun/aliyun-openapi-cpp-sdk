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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATESIMPLEOFFICESITEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATESIMPLEOFFICESITEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateSimpleOfficeSiteRequest : public RpcServiceRequest {
public:
	CreateSimpleOfficeSiteRequest();
	~CreateSimpleOfficeSiteRequest();
	std::string getVpcType() const;
	void setVpcType(const std::string &vpcType);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	long getCenOwnerId() const;
	void setCenOwnerId(long cenOwnerId);
	bool getEnableInternetAccess() const;
	void setEnableInternetAccess(bool enableInternetAccess);
	std::string getVerifyCode() const;
	void setVerifyCode(const std::string &verifyCode);
	bool getNeedVerifyZeroDevice() const;
	void setNeedVerifyZeroDevice(bool needVerifyZeroDevice);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getEnableAdminAccess() const;
	void setEnableAdminAccess(bool enableAdminAccess);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getDesktopAccessType() const;
	void setDesktopAccessType(const std::string &desktopAccessType);
	std::string getOfficeSiteName() const;
	void setOfficeSiteName(const std::string &officeSiteName);
	bool getCloudBoxOfficeSite() const;
	void setCloudBoxOfficeSite(bool cloudBoxOfficeSite);
	std::vector<std::string> getVSwitchId() const;
	void setVSwitchId(const std::vector<std::string> &vSwitchId);
	std::string getCidrBlock() const;
	void setCidrBlock(const std::string &cidrBlock);

private:
	std::string vpcType_;
	std::string cenId_;
	long cenOwnerId_;
	bool enableInternetAccess_;
	std::string verifyCode_;
	bool needVerifyZeroDevice_;
	std::string regionId_;
	bool enableAdminAccess_;
	int bandwidth_;
	std::string desktopAccessType_;
	std::string officeSiteName_;
	bool cloudBoxOfficeSite_;
	std::vector<std::string> vSwitchId_;
	std::string cidrBlock_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATESIMPLEOFFICESITEREQUEST_H_
