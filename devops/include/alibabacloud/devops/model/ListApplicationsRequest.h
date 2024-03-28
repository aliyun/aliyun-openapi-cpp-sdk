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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTAPPLICATIONSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListApplicationsRequest : public RoaServiceRequest {
public:
	ListApplicationsRequest();
	~ListApplicationsRequest();
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	int getPerPage() const;
	void setPerPage(int perPage);
	std::string getPagination() const;
	void setPagination(const std::string &pagination);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getSort() const;
	void setSort(const std::string &sort);

private:
	std::string organizationId_;
	int perPage_;
	std::string pagination_;
	std::string nextToken_;
	std::string orderBy_;
	std::string sort_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTAPPLICATIONSREQUEST_H_
