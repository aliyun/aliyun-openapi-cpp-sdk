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

#ifndef ALIBABACLOUD_IMS_MODEL_CREATEOIDCPROVIDERREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_CREATEOIDCPROVIDERREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT CreateOIDCProviderRequest : public RpcServiceRequest {
public:
	CreateOIDCProviderRequest();
	~CreateOIDCProviderRequest();
	long getIssuanceLimitTime() const;
	void setIssuanceLimitTime(long issuanceLimitTime);
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	std::string getIssuerUrl() const;
	void setIssuerUrl(const std::string &issuerUrl);
	std::string getOIDCProviderName() const;
	void setOIDCProviderName(const std::string &oIDCProviderName);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getClientIds() const;
	void setClientIds(const std::string &clientIds);
	std::string getFingerprints() const;
	void setFingerprints(const std::string &fingerprints);

private:
	long issuanceLimitTime_;
	std::string akProxySuffix_;
	std::string issuerUrl_;
	std::string oIDCProviderName_;
	std::string description_;
	std::string clientIds_;
	std::string fingerprints_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_CREATEOIDCPROVIDERREQUEST_H_
