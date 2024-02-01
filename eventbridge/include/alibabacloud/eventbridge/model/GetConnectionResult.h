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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_GETCONNECTIONRESULT_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_GETCONNECTIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eventbridge/EventbridgeExport.h>

namespace AlibabaCloud
{
	namespace Eventbridge
	{
		namespace Model
		{
			class ALIBABACLOUD_EVENTBRIDGE_EXPORT GetConnectionResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ConnectionsItem
					{
						struct NetworkParameters
						{
							std::string vpcId;
							std::string networkType;
							std::string securityGroupId;
							std::string vswitcheId;
						};
						struct AuthParameters
						{
							struct ApiKeyAuthParameters
							{
								std::string apiKeyValue;
								std::string apiKeyName;
							};
							struct BasicAuthParameters
							{
								std::string username;
								std::string password;
							};
							struct InvocationHttpParameters
							{
								struct BodyParametersItem
								{
									std::string isValueSecret;
									std::string value;
									std::string key;
								};
								struct HeaderParametersItem
								{
									std::string isValueSecret;
									std::string value;
									std::string key;
								};
								struct QueryStringParametersItem
								{
									std::string isValueSecret;
									std::string value;
									std::string key;
								};
								std::vector<HeaderParametersItem> headerParameters;
								std::vector<QueryStringParametersItem> queryStringParameters;
								std::vector<BodyParametersItem> bodyParameters;
							};
							struct OAuthParameters
							{
								struct ClientParameters
								{
									std::string clientSecret;
									std::string clientID;
								};
								struct OAuthHttpParameters
								{
									struct BodyParametersItem4
									{
										std::string isValueSecret;
										std::string value;
										std::string key;
									};
									struct HeaderParametersItem5
									{
										std::string isValueSecret;
										std::string value;
										std::string key;
									};
									struct QueryStringParametersItem6
									{
										std::string isValueSecret;
										std::string value;
										std::string key;
									};
									std::vector<HeaderParametersItem5> headerParameters2;
									std::vector<BodyParametersItem4> bodyParameters1;
									std::vector<QueryStringParametersItem6> queryStringParameters3;
								};
								ClientParameters clientParameters;
								OAuthHttpParameters oAuthHttpParameters;
								std::string authorizationEndpoint;
								std::string httpMethod;
							};
							InvocationHttpParameters invocationHttpParameters;
							BasicAuthParameters basicAuthParameters;
							ApiKeyAuthParameters apiKeyAuthParameters;
							OAuthParameters oAuthParameters;
							std::string authorizationType;
						};
						std::string connectionName;
						AuthParameters authParameters;
						long gmtCreate;
						std::string description;
						NetworkParameters networkParameters;
						long id;
					};
					std::vector<ConnectionsItem> connections;
				};


				GetConnectionResult();
				explicit GetConnectionResult(const std::string &payload);
				~GetConnectionResult();
				int getHttpCode()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpCode_;
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_GETCONNECTIONRESULT_H_