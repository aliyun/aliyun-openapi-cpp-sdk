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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTUNINSTALLAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTUNINSTALLAPPLICATIONSREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListUninstallApplicationsRequest : public RpcServiceRequest {
public:
	ListUninstallApplicationsRequest();
	~ListUninstallApplicationsRequest();
	std::string getMac() const;
	void setMac(const std::string &mac);
	std::string getHostname() const;
	void setHostname(const std::string &hostname);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getDepartment() const;
	void setDepartment(const std::string &department);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::vector<std::string> getApplicationIds() const;
	void setApplicationIds(const std::vector<std::string> &applicationIds);
	std::vector<std::string> getStatuses() const;
	void setStatuses(const std::vector<std::string> &statuses);
	std::string getUsername() const;
	void setUsername(const std::string &username);

private:
	std::string mac_;
	std::string hostname_;
	std::string sourceIp_;
	long pageSize_;
	std::string department_;
	long currentPage_;
	std::vector<std::string> applicationIds_;
	std::vector<std::string> statuses_;
	std::string username_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTUNINSTALLAPPLICATIONSREQUEST_H_
