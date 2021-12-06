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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEPREFIXLISTREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEPREFIXLISTREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreatePrefixListRequest : public RpcServiceRequest {
public:
	struct Entry {
		std::string description;
		std::string cidr;
	};
	CreatePrefixListRequest();
	~CreatePrefixListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getMaxEntries() const;
	void setMaxEntries(int maxEntries);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAddressFamily() const;
	void setAddressFamily(const std::string &addressFamily);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPrefixListName() const;
	void setPrefixListName(const std::string &prefixListName);
	std::vector<Entry> getEntry() const;
	void setEntry(const std::vector<Entry> &entry);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	int maxEntries_;
	std::string regionId_;
	std::string addressFamily_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string prefixListName_;
	std::vector<Entry> entry_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEPREFIXLISTREQUEST_H_
