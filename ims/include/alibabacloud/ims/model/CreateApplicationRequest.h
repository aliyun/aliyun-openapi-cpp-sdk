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

#ifndef ALIBABACLOUD_IMS_MODEL_CREATEAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT CreateApplicationRequest : public RpcServiceRequest {
public:
	CreateApplicationRequest();
	~CreateApplicationRequest();
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getRequiredScopes() const;
	void setRequiredScopes(const std::string &requiredScopes);
	int getAccessTokenValidity() const;
	void setAccessTokenValidity(int accessTokenValidity);
	int getRefreshTokenValidity() const;
	void setRefreshTokenValidity(int refreshTokenValidity);
	std::string getRedirectUris() const;
	void setRedirectUris(const std::string &redirectUris);
	bool getSecretRequired() const;
	void setSecretRequired(bool secretRequired);
	std::string getAppType() const;
	void setAppType(const std::string &appType);
	std::string getAppPrincipalName() const;
	void setAppPrincipalName(const std::string &appPrincipalName);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);
	std::string getPredefinedScopes() const;
	void setPredefinedScopes(const std::string &predefinedScopes);
	bool getIsMultiTenant() const;
	void setIsMultiTenant(bool isMultiTenant);

private:
	std::string akProxySuffix_;
	std::string appName_;
	std::string requiredScopes_;
	int accessTokenValidity_;
	int refreshTokenValidity_;
	std::string redirectUris_;
	bool secretRequired_;
	std::string appType_;
	std::string appPrincipalName_;
	std::string displayName_;
	std::string predefinedScopes_;
	bool isMultiTenant_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_CREATEAPPLICATIONREQUEST_H_
