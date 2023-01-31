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

#ifndef ALIBABACLOUD_VPC_MODEL_UPDATEDHCPOPTIONSSETATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UPDATEDHCPOPTIONSSETATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT UpdateDhcpOptionsSetAttributeRequest : public RpcServiceRequest {
public:
	UpdateDhcpOptionsSetAttributeRequest();
	~UpdateDhcpOptionsSetAttributeRequest();
	std::string getBootFileName() const;
	void setBootFileName(const std::string &bootFileName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTFTPServerName() const;
	void setTFTPServerName(const std::string &tFTPServerName);
	std::string getLeaseTime() const;
	void setLeaseTime(const std::string &leaseTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDomainNameServers() const;
	void setDomainNameServers(const std::string &domainNameServers);
	std::string getDhcpOptionsSetDescription() const;
	void setDhcpOptionsSetDescription(const std::string &dhcpOptionsSetDescription);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getDhcpOptionsSetId() const;
	void setDhcpOptionsSetId(const std::string &dhcpOptionsSetId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDhcpOptionsSetName() const;
	void setDhcpOptionsSetName(const std::string &dhcpOptionsSetName);
	std::string getIpv6LeaseTime() const;
	void setIpv6LeaseTime(const std::string &ipv6LeaseTime);

private:
	std::string bootFileName_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string tFTPServerName_;
	std::string leaseTime_;
	std::string regionId_;
	std::string domainNameServers_;
	std::string dhcpOptionsSetDescription_;
	bool dryRun_;
	std::string dhcpOptionsSetId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string domainName_;
	long ownerId_;
	std::string dhcpOptionsSetName_;
	std::string ipv6LeaseTime_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_UPDATEDHCPOPTIONSSETATTRIBUTEREQUEST_H_
