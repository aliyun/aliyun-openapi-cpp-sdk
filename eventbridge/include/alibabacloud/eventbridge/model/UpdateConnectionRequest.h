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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATECONNECTIONREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATECONNECTIONREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT UpdateConnectionRequest : public RpcServiceRequest {
public:
	struct NetworkParameters {
		std::string vpcId;
		std::string securityGroupId;
		std::string networkType;
		std::string vswitcheId;
	};
	struct AuthParameters {
		struct BasicAuthParameters {
			std::string password;
			std::string username;
		};
		BasicAuthParameters basicAuthParameters;
		struct ApiKeyAuthParameters {
			std::string apiKeyName;
			std::string apiKeyValue;
		};
		ApiKeyAuthParameters apiKeyAuthParameters;
		std::string authorizationType;
		struct InvocationHttpParameters {
			struct BodyParametersItem {
				std::string isValueSecret;
				std::string value;
				std::string key;
			};
			BodyParametersItem bodyParametersItem;
			std::vector<BodyParametersItem> bodyParameters;
			struct HeaderParametersItem {
				std::string isValueSecret;
				std::string value;
				std::string key;
			};
			HeaderParametersItem headerParametersItem;
			std::vector<HeaderParametersItem> headerParameters;
			struct QueryStringParametersItem {
				std::string isValueSecret;
				std::string value;
				std::string key;
			};
			QueryStringParametersItem queryStringParametersItem;
			std::vector<QueryStringParametersItem> queryStringParameters;
		};
		InvocationHttpParameters invocationHttpParameters;
		struct OAuthParameters {
			struct ClientParameters {
				std::string clientID;
				std::string clientSecret;
			};
			ClientParameters clientParameters;
			std::string authorizationEndpoint;
			std::string httpMethod;
			struct OAuthHttpParameters {
				struct BodyParametersItem {
					std::string isValueSecret;
					std::string value;
					std::string key;
				};
				BodyParametersItem bodyParametersItem;
				std::vector<BodyParametersItem> bodyParameters;
				struct HeaderParametersItem {
					std::string isValueSecret;
					std::string value;
					std::string key;
				};
				HeaderParametersItem headerParametersItem;
				std::vector<HeaderParametersItem> headerParameters;
				struct QueryStringParametersItem {
					std::string isValueSecret;
					std::string value;
					std::string key;
				};
				QueryStringParametersItem queryStringParametersItem;
				std::vector<QueryStringParametersItem> queryStringParameters;
			};
			OAuthHttpParameters oAuthHttpParameters;
		};
		OAuthParameters oAuthParameters;
	};
	UpdateConnectionRequest();
	~UpdateConnectionRequest();
	std::string getConnectionName() const;
	void setConnectionName(const std::string &connectionName);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	NetworkParameters getNetworkParameters() const;
	void setNetworkParameters(const NetworkParameters &networkParameters);
	AuthParameters getAuthParameters() const;
	void setAuthParameters(const AuthParameters &authParameters);

private:
	std::string connectionName_;
	std::string description_;
	NetworkParameters networkParameters_;
	AuthParameters authParameters_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_UPDATECONNECTIONREQUEST_H_
