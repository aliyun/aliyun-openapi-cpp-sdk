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

#include <alibabacloud/opensearch/model/GetFunctionInstanceRequest.h>

using AlibabaCloud::OpenSearch::Model::GetFunctionInstanceRequest;

GetFunctionInstanceRequest::GetFunctionInstanceRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/functions/[functionName]/instances/[instanceName]"};
  setMethod(HttpRequest::Method::Get);
}

GetFunctionInstanceRequest::~GetFunctionInstanceRequest() {}

std::string GetFunctionInstanceRequest::getOutput() const {
  return output_;
}

void GetFunctionInstanceRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("output"), output);
}

std::string GetFunctionInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void GetFunctionInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("instanceName"), instanceName);
}

std::string GetFunctionInstanceRequest::getFunctionName() const {
  return functionName_;
}

void GetFunctionInstanceRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("functionName"), functionName);
}

std::string GetFunctionInstanceRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void GetFunctionInstanceRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

