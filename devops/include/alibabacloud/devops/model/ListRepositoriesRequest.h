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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORIESREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORIESREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListRepositoriesRequest : public RoaServiceRequest {
public:
	ListRepositoriesRequest();
	~ListRepositoriesRequest();
	long getPerPage() const;
	void setPerPage(long perPage);
	int getMinAccessLevel() const;
	void setMinAccessLevel(int minAccessLevel);
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getSort() const;
	void setSort(const std::string &sort);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	bool getArchived() const;
	void setArchived(bool archived);
	std::string getSearch() const;
	void setSearch(const std::string &search);
	long getPage() const;
	void setPage(long page);

private:
	long perPage_;
	int minAccessLevel_;
	std::string accessToken_;
	std::string orderBy_;
	std::string sort_;
	std::string organizationId_;
	bool archived_;
	std::string search_;
	long page_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORIESREQUEST_H_
