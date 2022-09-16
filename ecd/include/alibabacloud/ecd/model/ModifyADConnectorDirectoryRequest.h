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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYADCONNECTORDIRECTORYREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYADCONNECTORDIRECTORYREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyADConnectorDirectoryRequest : public RpcServiceRequest {
public:
	ModifyADConnectorDirectoryRequest();
	~ModifyADConnectorDirectoryRequest();
	std::vector<std::string> getSubDomainDnsAddress() const;
	void setSubDomainDnsAddress(const std::vector<std::string> &subDomainDnsAddress);
	std::string getSubDomainName() const;
	void setSubDomainName(const std::string &subDomainName);
	std::string getDomainPassword() const;
	void setDomainPassword(const std::string &domainPassword);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDirectoryId() const;
	void setDirectoryId(const std::string &directoryId);
	std::string getAdHostname() const;
	void setAdHostname(const std::string &adHostname);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getDirectoryName() const;
	void setDirectoryName(const std::string &directoryName);
	bool getMfaEnabled() const;
	void setMfaEnabled(bool mfaEnabled);
	std::string getDomainUserName() const;
	void setDomainUserName(const std::string &domainUserName);
	std::vector<std::string> getDnsAddress() const;
	void setDnsAddress(const std::vector<std::string> &dnsAddress);
	std::string getOUName() const;
	void setOUName(const std::string &oUName);

private:
	std::vector<std::string> subDomainDnsAddress_;
	std::string subDomainName_;
	std::string domainPassword_;
	std::string regionId_;
	std::string directoryId_;
	std::string adHostname_;
	std::string domainName_;
	std::string directoryName_;
	bool mfaEnabled_;
	std::string domainUserName_;
	std::vector<std::string> dnsAddress_;
	std::string oUName_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYADCONNECTORDIRECTORYREQUEST_H_
