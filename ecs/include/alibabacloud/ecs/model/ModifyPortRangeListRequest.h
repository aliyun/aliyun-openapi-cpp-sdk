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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYPORTRANGELISTREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYPORTRANGELISTREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyPortRangeListRequest : public RpcServiceRequest {
public:
	struct AddEntry {
		std::string portRange;
		std::string description;
	};
	struct RemoveEntry {
		std::string portRange;
	};
	ModifyPortRangeListRequest();
	~ModifyPortRangeListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<AddEntry> getAddEntry() const;
	void setAddEntry(const std::vector<AddEntry> &addEntry);
	std::string getPortRangeListId() const;
	void setPortRangeListId(const std::string &portRangeListId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPortRangeListName() const;
	void setPortRangeListName(const std::string &portRangeListName);
	std::vector<RemoveEntry> getRemoveEntry() const;
	void setRemoveEntry(const std::vector<RemoveEntry> &removeEntry);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	std::string regionId_;
	std::vector<AddEntry> addEntry_;
	std::string portRangeListId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string portRangeListName_;
	std::vector<RemoveEntry> removeEntry_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYPORTRANGELISTREQUEST_H_
