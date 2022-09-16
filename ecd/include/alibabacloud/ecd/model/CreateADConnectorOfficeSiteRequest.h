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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEADCONNECTOROFFICESITEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEADCONNECTOROFFICESITEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateADConnectorOfficeSiteRequest : public RpcServiceRequest {
public:
	CreateADConnectorOfficeSiteRequest();
	~CreateADConnectorOfficeSiteRequest();
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::vector<std::string> getSubDomainDnsAddress() const;
	void setSubDomainDnsAddress(const std::vector<std::string> &subDomainDnsAddress);
	long getCenOwnerId() const;
	void setCenOwnerId(long cenOwnerId);
	bool getEnableInternetAccess() const;
	void setEnableInternetAccess(bool enableInternetAccess);
	std::string getSubDomainName() const;
	void setSubDomainName(const std::string &subDomainName);
	std::string getDomainPassword() const;
	void setDomainPassword(const std::string &domainPassword);
	std::string getVerifyCode() const;
	void setVerifyCode(const std::string &verifyCode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getEnableAdminAccess() const;
	void setEnableAdminAccess(bool enableAdminAccess);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getDesktopAccessType() const;
	void setDesktopAccessType(const std::string &desktopAccessType);
	std::string getAdHostname() const;
	void setAdHostname(const std::string &adHostname);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getSpecification() const;
	void setSpecification(long specification);
	std::string getOfficeSiteName() const;
	void setOfficeSiteName(const std::string &officeSiteName);
	bool getMfaEnabled() const;
	void setMfaEnabled(bool mfaEnabled);
	std::string getDomainUserName() const;
	void setDomainUserName(const std::string &domainUserName);
	std::string getCidrBlock() const;
	void setCidrBlock(const std::string &cidrBlock);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	std::vector<std::string> getDnsAddress() const;
	void setDnsAddress(const std::vector<std::string> &dnsAddress);

private:
	std::string cenId_;
	std::vector<std::string> subDomainDnsAddress_;
	long cenOwnerId_;
	bool enableInternetAccess_;
	std::string subDomainName_;
	std::string domainPassword_;
	std::string verifyCode_;
	std::string regionId_;
	bool enableAdminAccess_;
	int bandwidth_;
	std::string desktopAccessType_;
	std::string adHostname_;
	std::string domainName_;
	long specification_;
	std::string officeSiteName_;
	bool mfaEnabled_;
	std::string domainUserName_;
	std::string cidrBlock_;
	std::string protocolType_;
	std::vector<std::string> dnsAddress_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEADCONNECTOROFFICESITEREQUEST_H_
