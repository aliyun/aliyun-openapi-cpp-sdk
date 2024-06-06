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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTCLIENTUSERSREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTCLIENTUSERSREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListClientUsersRequest : public RpcServiceRequest {
public:
	ListClientUsersRequest();
	~ListClientUsersRequest();
	std::string getMobileNumber() const;
	void setMobileNumber(const std::string &mobileNumber);
	std::string getDepartmentId() const;
	void setDepartmentId(const std::string &departmentId);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getIdpConfigId() const;
	void setIdpConfigId(const std::string &idpConfigId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getUsername() const;
	void setUsername(const std::string &username);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string mobileNumber_;
	std::string departmentId_;
	long currentPage_;
	std::string idpConfigId_;
	long pageSize_;
	std::string email_;
	std::string username_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTCLIENTUSERSREQUEST_H_
