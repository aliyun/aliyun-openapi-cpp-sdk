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

#ifndef ALIBABACLOUD_IMS_MODEL_ADDUSERTOGROUPREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_ADDUSERTOGROUPREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT AddUserToGroupRequest : public RpcServiceRequest {
public:
	AddUserToGroupRequest();
	~AddUserToGroupRequest();
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getUserPrincipalName() const;
	void setUserPrincipalName(const std::string &userPrincipalName);
	std::string getGroupPrincipalName() const;
	void setGroupPrincipalName(const std::string &groupPrincipalName);

private:
	std::string akProxySuffix_;
	std::string groupName_;
	std::string userPrincipalName_;
	std::string groupPrincipalName_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_ADDUSERTOGROUPREQUEST_H_
