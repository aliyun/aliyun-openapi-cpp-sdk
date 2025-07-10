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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListPublicIpAddressPoolsRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string key;
		std::string value;
	};
	ListPublicIpAddressPoolsRequest();
	~ListPublicIpAddressPoolsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getSecurityProtectionEnabled() const;
	void setSecurityProtectionEnabled(bool securityProtectionEnabled);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	int getSecurityProtectionEnabledForCommonBuy() const;
	void setSecurityProtectionEnabledForCommonBuy(int securityProtectionEnabledForCommonBuy);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::vector<std::string> getPublicIpAddressPoolIds() const;
	void setPublicIpAddressPoolIds(const std::vector<std::string> &publicIpAddressPoolIds);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getName() const;
	void setName(const std::string &name);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	bool securityProtectionEnabled_;
	std::string isp_;
	int securityProtectionEnabledForCommonBuy_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::string regionId_;
	bool dryRun_;
	std::vector<std::string> publicIpAddressPoolIds_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<Tags> tags_;
	std::string name_;
	int maxResults_;
	std::string status_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLSREQUEST_H_
