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

#ifndef ALIBABACLOUD_BEIAN_MODEL_MANAGEACCESSORDOMAINWHITELISTREQUEST_H_
#define ALIBABACLOUD_BEIAN_MODEL_MANAGEACCESSORDOMAINWHITELISTREQUEST_H_

#include <alibabacloud/beian/BeianExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Beian {
namespace Model {
class ALIBABACLOUD_BEIAN_EXPORT ManageAccessorDomainWhiteListRequest : public RpcServiceRequest {
public:
	ManageAccessorDomainWhiteListRequest();
	~ManageAccessorDomainWhiteListRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::vector<std::string> getDomains() const;
	void setDomains(const std::vector<std::string> &domains);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getCaller() const;
	void setCaller(const std::string &caller);
	std::string getOperation() const;
	void setOperation(const std::string &operation);

private:
	std::string endTime_;
	std::vector<std::string> domains_;
	std::string remark_;
	std::string startTime_;
	std::string caller_;
	std::string operation_;
};
} // namespace Model
} // namespace Beian
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BEIAN_MODEL_MANAGEACCESSORDOMAINWHITELISTREQUEST_H_
