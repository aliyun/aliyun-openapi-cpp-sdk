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

#ifndef ALIBABACLOUD_VOD_MODEL_ATTACHAPPPOLICYTOIDENTITYREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_ATTACHAPPPOLICYTOIDENTITYREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT AttachAppPolicyToIdentityRequest : public RpcServiceRequest {
public:
	AttachAppPolicyToIdentityRequest();
	~AttachAppPolicyToIdentityRequest();
	std::string getPolicyNames() const;
	void setPolicyNames(const std::string &policyNames);
	std::string getResourceRealOwnerId() const;
	void setResourceRealOwnerId(const std::string &resourceRealOwnerId);
	std::string getIdentityName() const;
	void setIdentityName(const std::string &identityName);
	std::string getIdentityType() const;
	void setIdentityType(const std::string &identityType);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::string policyNames_;
	std::string resourceRealOwnerId_;
	std::string identityName_;
	std::string identityType_;
	std::string appId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_ATTACHAPPPOLICYTOIDENTITYREQUEST_H_
