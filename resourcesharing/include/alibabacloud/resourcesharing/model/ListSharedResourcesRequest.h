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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_LISTSHAREDRESOURCESREQUEST_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_LISTSHAREDRESOURCESREQUEST_H_

#include <alibabacloud/resourcesharing/ResourceSharingExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceSharing {
namespace Model {
class ALIBABACLOUD_RESOURCESHARING_EXPORT ListSharedResourcesRequest : public RpcServiceRequest {
public:
	ListSharedResourcesRequest();
	~ListSharedResourcesRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getResourceShareIds() const;
	void setResourceShareIds(const std::vector<std::string> &resourceShareIds);
	std::string getResourceOwner() const;
	void setResourceOwner(const std::string &resourceOwner);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getTarget() const;
	void setTarget(const std::string &target);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::vector<std::string> getResourceIds() const;
	void setResourceIds(const std::vector<std::string> &resourceIds);

private:
	std::string nextToken_;
	std::vector<std::string> resourceShareIds_;
	std::string resourceOwner_;
	std::string resourceType_;
	std::string target_;
	int maxResults_;
	std::vector<std::string> resourceIds_;
};
} // namespace Model
} // namespace ResourceSharing
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_LISTSHAREDRESOURCESREQUEST_H_
