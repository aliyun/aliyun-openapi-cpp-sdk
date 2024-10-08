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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_SEARCHRESOURCESREQUEST_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_SEARCHRESOURCESREQUEST_H_

#include <alibabacloud/resourcecenter/ResourceCenterExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceCenter {
namespace Model {
class ALIBABACLOUD_RESOURCECENTER_EXPORT SearchResourcesRequest : public RpcServiceRequest {
public:
	struct SortCriterion {
		std::string key;
		std::string order;
	};
	struct Filter {
		std::string matchType;
		std::string key;
	};
	SearchResourcesRequest();
	~SearchResourcesRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getView() const;
	void setView(const std::string &view);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	SortCriterion getSortCriterion() const;
	void setSortCriterion(const SortCriterion &sortCriterion);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string resourceGroupId_;
	std::string view_;
	std::string nextToken_;
	SortCriterion sortCriterion_;
	std::vector<Filter> filter_;
	int maxResults_;
};
} // namespace Model
} // namespace ResourceCenter
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_SEARCHRESOURCESREQUEST_H_
