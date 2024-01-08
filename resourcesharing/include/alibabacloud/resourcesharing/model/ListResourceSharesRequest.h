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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_LISTRESOURCESHARESREQUEST_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_LISTRESOURCESHARESREQUEST_H_

#include <alibabacloud/resourcesharing/ResourceSharingExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceSharing {
namespace Model {
class ALIBABACLOUD_RESOURCESHARING_EXPORT ListResourceSharesRequest : public RpcServiceRequest {
public:
	ListResourceSharesRequest();
	~ListResourceSharesRequest();
	std::string getResourceShareName() const;
	void setResourceShareName(const std::string &resourceShareName);
	std::string getPermissionName() const;
	void setPermissionName(const std::string &permissionName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getResourceShareIds() const;
	void setResourceShareIds(const std::vector<std::string> &resourceShareIds);
	std::string getResourceOwner() const;
	void setResourceOwner(const std::string &resourceOwner);
	std::string getResourceShareStatus() const;
	void setResourceShareStatus(const std::string &resourceShareStatus);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string resourceShareName_;
	std::string permissionName_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::vector<std::string> resourceShareIds_;
	std::string resourceOwner_;
	std::string resourceShareStatus_;
	int maxResults_;
};
} // namespace Model
} // namespace ResourceSharing
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_LISTRESOURCESHARESREQUEST_H_
