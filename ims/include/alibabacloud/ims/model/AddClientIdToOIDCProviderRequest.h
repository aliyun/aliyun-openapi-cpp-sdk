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

#ifndef ALIBABACLOUD_IMS_MODEL_ADDCLIENTIDTOOIDCPROVIDERREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_ADDCLIENTIDTOOIDCPROVIDERREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT AddClientIdToOIDCProviderRequest : public RpcServiceRequest {
public:
	AddClientIdToOIDCProviderRequest();
	~AddClientIdToOIDCProviderRequest();
	std::string getClientId() const;
	void setClientId(const std::string &clientId);
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	std::string getOIDCProviderName() const;
	void setOIDCProviderName(const std::string &oIDCProviderName);

private:
	std::string clientId_;
	std::string akProxySuffix_;
	std::string oIDCProviderName_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_ADDCLIENTIDTOOIDCPROVIDERREQUEST_H_
