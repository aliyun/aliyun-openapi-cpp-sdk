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

#include <alibabacloud/eventbridge/model/UpdateApiDestinationRequest.h>

using AlibabaCloud::Eventbridge::Model::UpdateApiDestinationRequest;

UpdateApiDestinationRequest::UpdateApiDestinationRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "UpdateApiDestination") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApiDestinationRequest::~UpdateApiDestinationRequest() {}

std::string UpdateApiDestinationRequest::getClientToken() const {
  return clientToken_;
}

void UpdateApiDestinationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateApiDestinationRequest::getDescription() const {
  return description_;
}

void UpdateApiDestinationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateApiDestinationRequest::getApiDestinationName() const {
  return apiDestinationName_;
}

void UpdateApiDestinationRequest::setApiDestinationName(const std::string &apiDestinationName) {
  apiDestinationName_ = apiDestinationName;
  setParameter(std::string("ApiDestinationName"), apiDestinationName);
}

std::string UpdateApiDestinationRequest::getConnectionName() const {
  return connectionName_;
}

void UpdateApiDestinationRequest::setConnectionName(const std::string &connectionName) {
  connectionName_ = connectionName;
  setParameter(std::string("ConnectionName"), connectionName);
}

UpdateApiDestinationRequest::HttpApiParameters UpdateApiDestinationRequest::getHttpApiParameters() const {
  return httpApiParameters_;
}

void UpdateApiDestinationRequest::setHttpApiParameters(const UpdateApiDestinationRequest::HttpApiParameters &httpApiParameters) {
  httpApiParameters_ = httpApiParameters;
  setParameter(std::string("HttpApiParameters") + ".Endpoint", httpApiParameters.endpoint);
  setParameter(std::string("HttpApiParameters") + ".Method", httpApiParameters.method);
  for(int dep1 = 0; dep1 != httpApiParameters.apiParameters.size(); dep1++) {
    setParameter(std::string("HttpApiParameters") + ".ApiParameters." + std::to_string(dep1 + 1) + ".In", httpApiParameters.apiParameters[dep1].in);
    setParameter(std::string("HttpApiParameters") + ".ApiParameters." + std::to_string(dep1 + 1) + ".Name", httpApiParameters.apiParameters[dep1].name);
    setParameter(std::string("HttpApiParameters") + ".ApiParameters." + std::to_string(dep1 + 1) + ".Description", httpApiParameters.apiParameters[dep1].description);
    setParameter(std::string("HttpApiParameters") + ".ApiParameters." + std::to_string(dep1 + 1) + ".DefaultValue", httpApiParameters.apiParameters[dep1].defaultValue);
    setParameter(std::string("HttpApiParameters") + ".ApiParameters." + std::to_string(dep1 + 1) + ".Type", httpApiParameters.apiParameters[dep1].type);
  }
}

long UpdateApiDestinationRequest::getInvocationRateLimitPerSecond() const {
  return invocationRateLimitPerSecond_;
}

void UpdateApiDestinationRequest::setInvocationRateLimitPerSecond(long invocationRateLimitPerSecond) {
  invocationRateLimitPerSecond_ = invocationRateLimitPerSecond;
  setParameter(std::string("InvocationRateLimitPerSecond"), std::to_string(invocationRateLimitPerSecond));
}

