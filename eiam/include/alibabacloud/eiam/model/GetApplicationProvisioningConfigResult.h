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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONPROVISIONINGCONFIGRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONPROVISIONINGCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT GetApplicationProvisioningConfigResult : public ServiceResult
			{
			public:
				struct ApplicationProvisioningConfig
				{
					struct CallbackProvisioningConfig
					{
						std::string callbackUrl;
						std::string encryptKey;
						std::vector<std::string> listenEventScopes;
						bool encryptRequired;
					};
					struct ScimProvisioningConfig
					{
						struct AuthnConfiguration
						{
							struct AuthnParam
							{
								std::string tokenEndpoint;
								std::string authnMethod;
								std::string accessToken;
								std::string clientSecret;
								std::string clientId;
							};
							AuthnParam authnParam;
							std::string grantType;
							std::string authnMode;
						};
						AuthnConfiguration authnConfiguration;
						std::string scimBaseUrl;
						std::vector<std::string> provisioningActions;
						std::vector<std::string> fullPushScopes;
					};
					std::string provisionJwksEndpoint;
					std::string status;
					CallbackProvisioningConfig callbackProvisioningConfig;
					bool provisionPassword;
					std::string instanceId;
					std::string configOperateMode;
					std::string applicationId;
					ScimProvisioningConfig scimProvisioningConfig;
					std::string provisionProtocolType;
				};


				GetApplicationProvisioningConfigResult();
				explicit GetApplicationProvisioningConfigResult(const std::string &payload);
				~GetApplicationProvisioningConfigResult();
				ApplicationProvisioningConfig getApplicationProvisioningConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				ApplicationProvisioningConfig applicationProvisioningConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETAPPLICATIONPROVISIONINGCONFIGRESULT_H_