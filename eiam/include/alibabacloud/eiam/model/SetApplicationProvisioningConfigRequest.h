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

#ifndef ALIBABACLOUD_EIAM_MODEL_SETAPPLICATIONPROVISIONINGCONFIGREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_SETAPPLICATIONPROVISIONINGCONFIGREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT SetApplicationProvisioningConfigRequest : public RpcServiceRequest {
public:
	struct CallbackProvisioningConfig {
		std::string string;
		std::vector<std::string> listenEventScopes;
		bool encryptRequired;
		std::string callbackUrl;
		std::string encryptKey;
	};
	struct ScimProvisioningConfig {
		std::string string;
		std::vector<std::string> fullPushScopes;
		struct AuthnConfiguration {
			std::string authnMode;
			std::string grantType;
			struct AuthnParam {
				std::string clientId;
				std::string clientSecret;
				std::string accessToken;
				std::string tokenEndpoint;
				std::string authnMethod;
			};
			AuthnParam authnParam;
		};
		AuthnConfiguration authnConfiguration;
		std::string scimBaseUrl;
		std::string string;
		std::vector<std::string> provisioningActions;
	};
	SetApplicationProvisioningConfigRequest();
	~SetApplicationProvisioningConfigRequest();
	std::string getProvisionProtocolType() const;
	void setProvisionProtocolType(const std::string &provisionProtocolType);
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	CallbackProvisioningConfig getCallbackProvisioningConfig() const;
	void setCallbackProvisioningConfig(const CallbackProvisioningConfig &callbackProvisioningConfig);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getProvisionPassword() const;
	void setProvisionPassword(bool provisionPassword);
	ScimProvisioningConfig getScimProvisioningConfig() const;
	void setScimProvisioningConfig(const ScimProvisioningConfig &scimProvisioningConfig);

private:
	std::string provisionProtocolType_;
	std::string applicationId_;
	CallbackProvisioningConfig callbackProvisioningConfig_;
	std::string instanceId_;
	bool provisionPassword_;
	ScimProvisioningConfig scimProvisioningConfig_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_SETAPPLICATIONPROVISIONINGCONFIGREQUEST_H_
