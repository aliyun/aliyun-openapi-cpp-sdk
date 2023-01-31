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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVPCPREFIXLISTREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVPCPREFIXLISTREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyVpcPrefixListRequest : public RpcServiceRequest {
public:
	struct RemovePrefixListEntry {
		std::string cidr;
		std::string description;
	};
	struct AddPrefixListEntry {
		std::string cidr;
		std::string description;
	};
	ModifyVpcPrefixListRequest();
	~ModifyVpcPrefixListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getMaxEntries() const;
	void setMaxEntries(int maxEntries);
	std::vector<RemovePrefixListEntry> getRemovePrefixListEntry() const;
	void setRemovePrefixListEntry(const std::vector<RemovePrefixListEntry> &removePrefixListEntry);
	std::string getPrefixListId() const;
	void setPrefixListId(const std::string &prefixListId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<AddPrefixListEntry> getAddPrefixListEntry() const;
	void setAddPrefixListEntry(const std::vector<AddPrefixListEntry> &addPrefixListEntry);
	std::string getPrefixListName() const;
	void setPrefixListName(const std::string &prefixListName);
	std::string getPrefixListDescription() const;
	void setPrefixListDescription(const std::string &prefixListDescription);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	int maxEntries_;
	std::vector<RemovePrefixListEntry> removePrefixListEntry_;
	std::string prefixListId_;
	std::string regionId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<AddPrefixListEntry> addPrefixListEntry_;
	std::string prefixListName_;
	std::string prefixListDescription_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPCPREFIXLISTREQUEST_H_
