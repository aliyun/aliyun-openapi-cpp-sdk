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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVPCPREFIXLISTREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVPCPREFIXLISTREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateVpcPrefixListRequest : public RpcServiceRequest {
public:
	struct PrefixListEntrys {
		std::string cidr;
		std::string description;
	};
	struct PrefixListEntries {
		std::string cidr;
		std::string description;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateVpcPrefixListRequest();
	~CreateVpcPrefixListRequest();
	std::vector<PrefixListEntrys> getPrefixListEntrys() const;
	void setPrefixListEntrys(const std::vector<PrefixListEntrys> &prefixListEntrys);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getMaxEntries() const;
	void setMaxEntries(int maxEntries);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::vector<PrefixListEntries> getPrefixListEntries() const;
	void setPrefixListEntries(const std::vector<PrefixListEntries> &prefixListEntries);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPrefixListName() const;
	void setPrefixListName(const std::string &prefixListName);
	std::string getPrefixListDescription() const;
	void setPrefixListDescription(const std::string &prefixListDescription);

private:
	std::vector<PrefixListEntrys> prefixListEntrys_;
	long resourceOwnerId_;
	std::string clientToken_;
	int maxEntries_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string ipVersion_;
	std::vector<PrefixListEntries> prefixListEntries_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string prefixListName_;
	std::string prefixListDescription_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVPCPREFIXLISTREQUEST_H_
