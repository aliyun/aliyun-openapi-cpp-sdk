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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTTIMINGSYNTHETICTASKSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTTIMINGSYNTHETICTASKSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListTimingSyntheticTasksRequest : public RpcServiceRequest {
public:
	struct Search {
		int integer;
		std::vector<int> taskTypes;
		std::string name;
		int pageSize;
		int page;
		std::string string;
		std::vector<std::string> taskIds;
		std::string status;
		std::string orderField;
		int order;
	};
	struct Tags {
		std::string value;
		std::string key;
	};
	ListTimingSyntheticTasksRequest();
	~ListTimingSyntheticTasksRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	Search getSearch() const;
	void setSearch(const Search &search);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);

private:
	std::string resourceGroupId_;
	Search search_;
	std::string regionId_;
	std::vector<Tags> tags_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTTIMINGSYNTHETICTASKSREQUEST_H_
