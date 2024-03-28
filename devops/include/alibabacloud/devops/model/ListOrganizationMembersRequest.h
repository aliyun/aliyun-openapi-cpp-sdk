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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTORGANIZATIONMEMBERSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTORGANIZATIONMEMBERSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListOrganizationMembersRequest : public RoaServiceRequest {
public:
	ListOrganizationMembersRequest();
	~ListOrganizationMembersRequest();
	std::string getExternUid() const;
	void setExternUid(const std::string &externUid);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getOrganizationMemberName() const;
	void setOrganizationMemberName(const std::string &organizationMemberName);
	long getJoinTimeFrom() const;
	void setJoinTimeFrom(long joinTimeFrom);
	std::string getProvider() const;
	void setProvider(const std::string &provider);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getJoinTimeTo() const;
	void setJoinTimeTo(long joinTimeTo);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getState() const;
	void setState(const std::string &state);
	bool getContainsExternInfo() const;
	void setContainsExternInfo(bool containsExternInfo);

private:
	std::string externUid_;
	std::string organizationId_;
	std::string organizationMemberName_;
	long joinTimeFrom_;
	std::string provider_;
	std::string nextToken_;
	long joinTimeTo_;
	long maxResults_;
	std::string state_;
	bool containsExternInfo_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTORGANIZATIONMEMBERSREQUEST_H_
