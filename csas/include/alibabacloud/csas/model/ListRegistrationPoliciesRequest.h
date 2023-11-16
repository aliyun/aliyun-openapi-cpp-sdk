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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTREGISTRATIONPOLICIESREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTREGISTRATIONPOLICIESREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListRegistrationPoliciesRequest : public RpcServiceRequest {
public:
	ListRegistrationPoliciesRequest();
	~ListRegistrationPoliciesRequest();
	std::vector<std::string> getPolicyIds() const;
	void setPolicyIds(const std::vector<std::string> &policyIds);
	std::string getMatchMode() const;
	void setMatchMode(const std::string &matchMode);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getUserGroupId() const;
	void setUserGroupId(const std::string &userGroupId);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getPersonalLimitType() const;
	void setPersonalLimitType(const std::string &personalLimitType);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getCompanyLimitType() const;
	void setCompanyLimitType(const std::string &companyLimitType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::vector<std::string> policyIds_;
	std::string matchMode_;
	std::string sourceIp_;
	long pageSize_;
	std::string userGroupId_;
	long currentPage_;
	std::string personalLimitType_;
	std::string name_;
	std::string companyLimitType_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTREGISTRATIONPOLICIESREQUEST_H_
