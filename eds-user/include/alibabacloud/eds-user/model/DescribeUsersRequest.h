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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_DESCRIBEUSERSREQUEST_H_
#define ALIBABACLOUD_EDS_USER_MODEL_DESCRIBEUSERSREQUEST_H_

#include <alibabacloud/eds-user/Eds_userExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eds_user {
namespace Model {
class ALIBABACLOUD_EDS_USER_EXPORT DescribeUsersRequest : public RpcServiceRequest {
public:
	DescribeUsersRequest();
	~DescribeUsersRequest();
	bool getIsQueryAllSubOrgs() const;
	void setIsQueryAllSubOrgs(bool isQueryAllSubOrgs);
	std::vector<std::string> getEndUserIds() const;
	void setEndUserIds(const std::vector<std::string> &endUserIds);
	std::vector<std::string> getExcludeEndUserIds() const;
	void setExcludeEndUserIds(const std::vector<std::string> &excludeEndUserIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getSolutionId() const;
	void setSolutionId(const std::string &solutionId);
	std::map<std::string, bool> getFilterWithAssignedResources() const;
	void setFilterWithAssignedResources(const std::map<std::string, bool> &filterWithAssignedResources);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	std::map<std::string, std::string> getFilterWithAssignedResource() const;
	void setFilterWithAssignedResource(const std::map<std::string, std::string> &filterWithAssignedResource);
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::map<std::string, ObjectOfAny> getShowExtras() const;
	void setShowExtras(const std::map<std::string, ObjectOfAny> &showExtras);
	int getStatus() const;
	void setStatus(int status);

private:
	bool isQueryAllSubOrgs_;
	std::vector<std::string> endUserIds_;
	std::vector<std::string> excludeEndUserIds_;
	std::string nextToken_;
	std::string solutionId_;
	std::map<std::string, bool> filterWithAssignedResources_;
	std::string groupId_;
	std::string orgId_;
	std::map<std::string, std::string> filterWithAssignedResource_;
	std::string filter_;
	std::string bizType_;
	long maxResults_;
	std::map<std::string, ObjectOfAny> showExtras_;
	int status_;
};
} // namespace Model
} // namespace Eds_user
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EDS_USER_MODEL_DESCRIBEUSERSREQUEST_H_
