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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_REGISTERUSERREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_REGISTERUSERREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT RegisterUserRequest : public RpcServiceRequest {
public:
	RegisterUserRequest();
	~RegisterUserRequest();
	std::string getRoleNames() const;
	void setRoleNames(const std::string &roleNames);
	std::string getUserNick() const;
	void setUserNick(const std::string &userNick);
	long getTid() const;
	void setTid(long tid);
	std::string getUid() const;
	void setUid(const std::string &uid);
	std::string getMobile() const;
	void setMobile(const std::string &mobile);

private:
	std::string roleNames_;
	std::string userNick_;
	long tid_;
	std::string uid_;
	std::string mobile_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_REGISTERUSERREQUEST_H_
