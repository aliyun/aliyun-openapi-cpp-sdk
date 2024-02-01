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

#include <alibabacloud/eventbridge/model/UpdateConnectionRequest.h>

using AlibabaCloud::Eventbridge::Model::UpdateConnectionRequest;

UpdateConnectionRequest::UpdateConnectionRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "UpdateConnection") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConnectionRequest::~UpdateConnectionRequest() {}

std::string UpdateConnectionRequest::getConnectionName() const {
  return connectionName_;
}

void UpdateConnectionRequest::setConnectionName(const std::string &connectionName) {
  connectionName_ = connectionName;
  setParameter(std::string("ConnectionName"), connectionName);
}

std::string UpdateConnectionRequest::getDescription() const {
  return description_;
}

void UpdateConnectionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

UpdateConnectionRequest::NetworkParameters UpdateConnectionRequest::getNetworkParameters() const {
  return networkParameters_;
}

void UpdateConnectionRequest::setNetworkParameters(const UpdateConnectionRequest::NetworkParameters &networkParameters) {
  networkParameters_ = networkParameters;
  setParameter(std::string("NetworkParameters") + ".VpcId", networkParameters.vpcId);
  setParameter(std::string("NetworkParameters") + ".SecurityGroupId", networkParameters.securityGroupId);
  setParameter(std::string("NetworkParameters") + ".NetworkType", networkParameters.networkType);
  setParameter(std::string("NetworkParameters") + ".VswitcheId", networkParameters.vswitcheId);
}

UpdateConnectionRequest::AuthParameters UpdateConnectionRequest::getAuthParameters() const {
  return authParameters_;
}

void UpdateConnectionRequest::setAuthParameters(const UpdateConnectionRequest::AuthParameters &authParameters) {
  authParameters_ = authParameters;
  setParameter(std::string("AuthParameters") + ".BasicAuthParameters.Password", authParameters.basicAuthParameters.password);
  setParameter(std::string("AuthParameters") + ".BasicAuthParameters.Username", authParameters.basicAuthParameters.username);
  setParameter(std::string("AuthParameters") + ".ApiKeyAuthParameters.ApiKeyName", authParameters.apiKeyAuthParameters.apiKeyName);
  setParameter(std::string("AuthParameters") + ".ApiKeyAuthParameters.ApiKeyValue", authParameters.apiKeyAuthParameters.apiKeyValue);
  setParameter(std::string("AuthParameters") + ".AuthorizationType", authParameters.authorizationType);
  for(int dep1 = 0; dep1 != authParameters.invocationHttpParameters.bodyParameters.size(); dep1++) {
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.BodyParameters." + std::to_string(dep1 + 1) + ".IsValueSecret", authParameters.invocationHttpParameters.bodyParameters[dep1].isValueSecret);
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.BodyParameters." + std::to_string(dep1 + 1) + ".Value", authParameters.invocationHttpParameters.bodyParameters[dep1].value);
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.BodyParameters." + std::to_string(dep1 + 1) + ".Key", authParameters.invocationHttpParameters.bodyParameters[dep1].key);
  }
  for(int dep1 = 0; dep1 != authParameters.invocationHttpParameters.headerParameters.size(); dep1++) {
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.HeaderParameters." + std::to_string(dep1 + 1) + ".IsValueSecret", authParameters.invocationHttpParameters.headerParameters[dep1].isValueSecret);
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.HeaderParameters." + std::to_string(dep1 + 1) + ".Value", authParameters.invocationHttpParameters.headerParameters[dep1].value);
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.HeaderParameters." + std::to_string(dep1 + 1) + ".Key", authParameters.invocationHttpParameters.headerParameters[dep1].key);
  }
  for(int dep1 = 0; dep1 != authParameters.invocationHttpParameters.queryStringParameters.size(); dep1++) {
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.QueryStringParameters." + std::to_string(dep1 + 1) + ".IsValueSecret", authParameters.invocationHttpParameters.queryStringParameters[dep1].isValueSecret);
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.QueryStringParameters." + std::to_string(dep1 + 1) + ".Value", authParameters.invocationHttpParameters.queryStringParameters[dep1].value);
    setParameter(std::string("AuthParameters") + ".InvocationHttpParameters.QueryStringParameters." + std::to_string(dep1 + 1) + ".Key", authParameters.invocationHttpParameters.queryStringParameters[dep1].key);
  }
  setParameter(std::string("AuthParameters") + ".OAuthParameters.ClientParameters.ClientID", authParameters.oAuthParameters.clientParameters.clientID);
  setParameter(std::string("AuthParameters") + ".OAuthParameters.ClientParameters.ClientSecret", authParameters.oAuthParameters.clientParameters.clientSecret);
  setParameter(std::string("AuthParameters") + ".OAuthParameters.AuthorizationEndpoint", authParameters.oAuthParameters.authorizationEndpoint);
  setParameter(std::string("AuthParameters") + ".OAuthParameters.HttpMethod", authParameters.oAuthParameters.httpMethod);
  for(int dep1 = 0; dep1 != authParameters.oAuthParameters.oAuthHttpParameters.bodyParameters.size(); dep1++) {
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.BodyParameters." + std::to_string(dep1 + 1) + ".IsValueSecret", authParameters.oAuthParameters.oAuthHttpParameters.bodyParameters[dep1].isValueSecret);
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.BodyParameters." + std::to_string(dep1 + 1) + ".Value", authParameters.oAuthParameters.oAuthHttpParameters.bodyParameters[dep1].value);
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.BodyParameters." + std::to_string(dep1 + 1) + ".Key", authParameters.oAuthParameters.oAuthHttpParameters.bodyParameters[dep1].key);
  }
  for(int dep1 = 0; dep1 != authParameters.oAuthParameters.oAuthHttpParameters.headerParameters.size(); dep1++) {
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.HeaderParameters." + std::to_string(dep1 + 1) + ".IsValueSecret", authParameters.oAuthParameters.oAuthHttpParameters.headerParameters[dep1].isValueSecret);
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.HeaderParameters." + std::to_string(dep1 + 1) + ".Value", authParameters.oAuthParameters.oAuthHttpParameters.headerParameters[dep1].value);
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.HeaderParameters." + std::to_string(dep1 + 1) + ".Key", authParameters.oAuthParameters.oAuthHttpParameters.headerParameters[dep1].key);
  }
  for(int dep1 = 0; dep1 != authParameters.oAuthParameters.oAuthHttpParameters.queryStringParameters.size(); dep1++) {
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.QueryStringParameters." + std::to_string(dep1 + 1) + ".IsValueSecret", authParameters.oAuthParameters.oAuthHttpParameters.queryStringParameters[dep1].isValueSecret);
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.QueryStringParameters." + std::to_string(dep1 + 1) + ".Value", authParameters.oAuthParameters.oAuthHttpParameters.queryStringParameters[dep1].value);
    setParameter(std::string("AuthParameters") + ".OAuthParameters.OAuthHttpParameters.QueryStringParameters." + std::to_string(dep1 + 1) + ".Key", authParameters.oAuthParameters.oAuthHttpParameters.queryStringParameters[dep1].key);
  }
}

