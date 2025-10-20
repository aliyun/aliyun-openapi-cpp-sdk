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

#ifndef ALIBABACLOUD_EIAM_MODEL_CREATEFEDERATEDCREDENTIALPROVIDERREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_CREATEFEDERATEDCREDENTIALPROVIDERREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT CreateFederatedCredentialProviderRequest : public RpcServiceRequest {
public:
	struct OidcProviderConfig {
		std::string jwksSource;
		std::string staticJwks;
		std::string trustCondition;
		std::string jwksUri;
		std::string string;
		std::vector<std::string> audiences;
		std::string issuer;
	};
	struct PrivateCaProviderConfig {
		struct CertificatesItem {
			std::string content;
		};
		CertificatesItem certificatesItem;
		std::vector<CertificatesItem> certificates;
		std::string trustCondition;
		std::string trustAnchorSource;
	};
	struct Pkcs7ProviderConfig {
		std::string signingTimeValueExpression;
		struct CertificatesItem {
			std::string content;
		};
		CertificatesItem certificatesItem;
		std::vector<CertificatesItem> certificates;
		std::string trustCondition;
		std::string cmsVerificationMode;
		std::string trustAnchorSource;
		long signatureEffectiveTime;
	};
	CreateFederatedCredentialProviderRequest();
	~CreateFederatedCredentialProviderRequest();
	OidcProviderConfig getOidcProviderConfig() const;
	void setOidcProviderConfig(const OidcProviderConfig &oidcProviderConfig);
	std::string getFederatedCredentialProviderName() const;
	void setFederatedCredentialProviderName(const std::string &federatedCredentialProviderName);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getNetworkAccessEndpointId() const;
	void setNetworkAccessEndpointId(const std::string &networkAccessEndpointId);
	PrivateCaProviderConfig getPrivateCaProviderConfig() const;
	void setPrivateCaProviderConfig(const PrivateCaProviderConfig &privateCaProviderConfig);
	std::string getFederatedCredentialProviderType() const;
	void setFederatedCredentialProviderType(const std::string &federatedCredentialProviderType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	Pkcs7ProviderConfig getPkcs7ProviderConfig() const;
	void setPkcs7ProviderConfig(const Pkcs7ProviderConfig &pkcs7ProviderConfig);

private:
	OidcProviderConfig oidcProviderConfig_;
	std::string federatedCredentialProviderName_;
	std::string description_;
	std::string networkAccessEndpointId_;
	PrivateCaProviderConfig privateCaProviderConfig_;
	std::string federatedCredentialProviderType_;
	std::string instanceId_;
	Pkcs7ProviderConfig pkcs7ProviderConfig_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_CREATEFEDERATEDCREDENTIALPROVIDERREQUEST_H_
