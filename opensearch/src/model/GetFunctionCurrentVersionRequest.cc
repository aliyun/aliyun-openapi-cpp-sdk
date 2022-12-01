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

#include <alibabacloud/opensearch/model/GetFunctionCurrentVersionRequest.h>

using AlibabaCloud::OpenSearch::Model::GetFunctionCurrentVersionRequest;

GetFunctionCurrentVersionRequest::GetFunctionCurrentVersionRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/functions/[functionName]/current-version"};
  setMethod(HttpRequest::Method::Get);
}

GetFunctionCurrentVersionRequest::~GetFunctionCurrentVersionRequest() {}

std::string GetFunctionCurrentVersionRequest::getModelType() const {
  return modelType_;
}

void GetFunctionCurrentVersionRequest::setModelType(const std::string &modelType) {
  modelType_ = modelType;
  setParameter(std::string("modelType"), modelType);
}

std::string GetFunctionCurrentVersionRequest::getFunctionName() const {
  return functionName_;
}

void GetFunctionCurrentVersionRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("functionName"), functionName);
}

std::string GetFunctionCurrentVersionRequest::getDomain() const {
  return domain_;
}

void GetFunctionCurrentVersionRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("domain"), domain);
}

std::string GetFunctionCurrentVersionRequest::getFunctionType() const {
  return functionType_;
}

void GetFunctionCurrentVersionRequest::setFunctionType(const std::string &functionType) {
  functionType_ = functionType;
  setParameter(std::string("functionType"), functionType);
}

std::string GetFunctionCurrentVersionRequest::getCategory() const {
  return category_;
}

void GetFunctionCurrentVersionRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("category"), category);
}

