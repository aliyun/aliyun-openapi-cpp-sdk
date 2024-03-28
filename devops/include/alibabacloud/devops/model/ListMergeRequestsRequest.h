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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListMergeRequestsRequest : public RoaServiceRequest {
public:
	ListMergeRequestsRequest();
	~ListMergeRequestsRequest();
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getProjectIds() const;
	void setProjectIds(const std::string &projectIds);
	std::string getSort() const;
	void setSort(const std::string &sort);
	std::string getCreatedAfter() const;
	void setCreatedAfter(const std::string &createdAfter);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getCreatedBefore() const;
	void setCreatedBefore(const std::string &createdBefore);
	std::string getReviewerIds() const;
	void setReviewerIds(const std::string &reviewerIds);
	std::string getSearch() const;
	void setSearch(const std::string &search);
	std::string getGroupIds() const;
	void setGroupIds(const std::string &groupIds);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getAuthorIds() const;
	void setAuthorIds(const std::string &authorIds);
	long getPage() const;
	void setPage(long page);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getLabelIds() const;
	void setLabelIds(const std::string &labelIds);

private:
	std::string accessToken_;
	std::string orderBy_;
	std::string projectIds_;
	std::string sort_;
	std::string createdAfter_;
	std::string organizationId_;
	std::string filter_;
	std::string createdBefore_;
	std::string reviewerIds_;
	std::string search_;
	std::string groupIds_;
	long pageSize_;
	std::string authorIds_;
	long page_;
	std::string state_;
	std::string labelIds_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTMERGEREQUESTSREQUEST_H_
