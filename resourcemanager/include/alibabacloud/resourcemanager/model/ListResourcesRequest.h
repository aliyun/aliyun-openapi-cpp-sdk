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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTRESOURCESREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTRESOURCESREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListResourcesRequest : public RpcServiceRequest {
public:
	struct ResourceTypes {
		std::string service;
		std::string resourceType;
	};
	ListResourcesRequest();
	~ListResourcesRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::vector<ResourceTypes> getResourceTypes() const;
	void setResourceTypes(const std::vector<ResourceTypes> &resourceTypes);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getService() const;
	void setService(const std::string &service);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getResourceIds() const;
	void setResourceIds(const std::string &resourceIds);

private:
	int pageNumber_;
	std::string resourceGroupId_;
	int pageSize_;
	std::string resourceId_;
	std::vector<ResourceTypes> resourceTypes_;
	std::string resourceType_;
	std::string service_;
	std::string region_;
	std::string resourceIds_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTRESOURCESREQUEST_H_
