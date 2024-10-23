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

#ifndef ALIBABACLOUD_IMS_MODEL_UPDATEAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_UPDATEAPPLICATIONREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT UpdateApplicationRequest : public RpcServiceRequest {
public:
	UpdateApplicationRequest();
	~UpdateApplicationRequest();
	bool getNewIsMultiTenant() const;
	void setNewIsMultiTenant(bool newIsMultiTenant);
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	int getNewRefreshTokenValidity() const;
	void setNewRefreshTokenValidity(int newRefreshTokenValidity);
	std::string getNewPredefinedScopes() const;
	void setNewPredefinedScopes(const std::string &newPredefinedScopes);
	bool getNewSecretRequired() const;
	void setNewSecretRequired(bool newSecretRequired);
	std::string getNewDisplayName() const;
	void setNewDisplayName(const std::string &newDisplayName);
	std::string getNewRequiredScopes() const;
	void setNewRequiredScopes(const std::string &newRequiredScopes);
	std::string getNewRedirectUris() const;
	void setNewRedirectUris(const std::string &newRedirectUris);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	int getNewAccessTokenValidity() const;
	void setNewAccessTokenValidity(int newAccessTokenValidity);

private:
	bool newIsMultiTenant_;
	std::string akProxySuffix_;
	int newRefreshTokenValidity_;
	std::string newPredefinedScopes_;
	bool newSecretRequired_;
	std::string newDisplayName_;
	std::string newRequiredScopes_;
	std::string newRedirectUris_;
	std::string appId_;
	int newAccessTokenValidity_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_UPDATEAPPLICATIONREQUEST_H_
