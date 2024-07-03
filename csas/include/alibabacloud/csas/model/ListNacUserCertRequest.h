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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTNACUSERCERTREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTNACUSERCERTREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListNacUserCertRequest : public RpcServiceRequest {
public:
	ListNacUserCertRequest();
	~ListNacUserCertRequest();
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getCurrentPage() const;
	void setCurrentPage(const std::string &currentPage);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getDeviceType() const;
	void setDeviceType(const std::string &deviceType);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getDepartment() const;
	void setDepartment(const std::string &department);
	std::string getUsername() const;
	void setUsername(const std::string &username);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long endTime_;
	std::string currentPage_;
	long startTime_;
	std::string deviceType_;
	std::string pageSize_;
	std::string department_;
	std::string username_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTNACUSERCERTREQUEST_H_
