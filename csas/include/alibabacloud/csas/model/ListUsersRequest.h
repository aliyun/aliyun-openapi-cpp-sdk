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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTUSERSREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTUSERSREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListUsersRequest : public RpcServiceRequest {
public:
	ListUsersRequest();
	~ListUsersRequest();
	std::string getFuzzyUsername() const;
	void setFuzzyUsername(const std::string &fuzzyUsername);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getDepartment() const;
	void setDepartment(const std::string &department);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getPreciseUsername() const;
	void setPreciseUsername(const std::string &preciseUsername);
	std::vector<std::string> getSaseUserIds() const;
	void setSaseUserIds(const std::vector<std::string> &saseUserIds);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string fuzzyUsername_;
	std::string sourceIp_;
	long pageSize_;
	std::string department_;
	long currentPage_;
	std::string preciseUsername_;
	std::vector<std::string> saseUserIds_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTUSERSREQUEST_H_
