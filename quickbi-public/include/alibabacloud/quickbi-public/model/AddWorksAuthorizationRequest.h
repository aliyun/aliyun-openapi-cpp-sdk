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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDWORKSAUTHORIZATIONREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDWORKSAUTHORIZATIONREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT AddWorksAuthorizationRequest : public RpcServiceRequest {
public:
	AddWorksAuthorizationRequest();
	~AddWorksAuthorizationRequest();
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getAuthorizedId() const;
	void setAuthorizedId(const std::string &authorizedId);
	int getAuthPoints() const;
	void setAuthPoints(int authPoints);
	int getAuthorizeScope() const;
	void setAuthorizeScope(int authorizeScope);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getExpireDay() const;
	void setExpireDay(const std::string &expireDay);

private:
	std::string accessPoint_;
	std::string authorizedId_;
	int authPoints_;
	int authorizeScope_;
	std::string resourceId_;
	std::string signType_;
	std::string resourceType_;
	std::string expireDay_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDWORKSAUTHORIZATIONREQUEST_H_
