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

#include <alibabacloud/eventbridge/model/CreateApiDestinationRequest.h>

using AlibabaCloud::Eventbridge::Model::CreateApiDestinationRequest;

CreateApiDestinationRequest::CreateApiDestinationRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "CreateApiDestination") {
  setMethod(HttpRequest::Method::Post);
}

CreateApiDestinationRequest::~CreateApiDestinationRequest() {}

std::string CreateApiDestinationRequest::getConnectionName() const {
  return connectionName_;
}

void CreateApiDestinationRequest::setConnectionName(const std::string &connectionName) {
  connectionName_ = connectionName;
  setParameter(std::string("ConnectionName"), connectionName);
}

std::string CreateApiDestinationRequest::getDescription() const {
  return description_;
}

void CreateApiDestinationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

CreateApiDestinationRequest::HttpApiParameters CreateApiDestinationRequest::getHttpApiParameters() const {
  return httpApiParameters_;
}

void CreateApiDestinationRequest::setHttpApiParameters(const CreateApiDestinationRequest::HttpApiParameters &httpApiParameters) {
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

std::string CreateApiDestinationRequest::getApiDestinationName() const {
  return apiDestinationName_;
}

void CreateApiDestinationRequest::setApiDestinationName(const std::string &apiDestinationName) {
  apiDestinationName_ = apiDestinationName;
  setParameter(std::string("ApiDestinationName"), apiDestinationName);
}

long CreateApiDestinationRequest::getInvocationRateLimitPerSecond() const {
  return invocationRateLimitPerSecond_;
}

void CreateApiDestinationRequest::setInvocationRateLimitPerSecond(long invocationRateLimitPerSecond) {
  invocationRateLimitPerSecond_ = invocationRateLimitPerSecond;
  setParameter(std::string("InvocationRateLimitPerSecond"), std::to_string(invocationRateLimitPerSecond));
}

