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

#include <alibabacloud/opensearch/model/ListFunctionInstancesRequest.h>

using AlibabaCloud::OpenSearch::Model::ListFunctionInstancesRequest;

ListFunctionInstancesRequest::ListFunctionInstancesRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/functions/[functionName]/instances"};
  setMethod(HttpRequest::Method::Get);
}

ListFunctionInstancesRequest::~ListFunctionInstancesRequest() {}

std::string ListFunctionInstancesRequest::getOutput() const {
  return output_;
}

void ListFunctionInstancesRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("output"), output);
}

std::string ListFunctionInstancesRequest::getModelType() const {
  return modelType_;
}

void ListFunctionInstancesRequest::setModelType(const std::string &modelType) {
  modelType_ = modelType;
  setParameter(std::string("modelType"), modelType);
}

std::string ListFunctionInstancesRequest::getFunctionName() const {
  return functionName_;
}

void ListFunctionInstancesRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("functionName"), functionName);
}

int ListFunctionInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListFunctionInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListFunctionInstancesRequest::getFunctionType() const {
  return functionType_;
}

void ListFunctionInstancesRequest::setFunctionType(const std::string &functionType) {
  functionType_ = functionType;
  setParameter(std::string("functionType"), functionType);
}

std::string ListFunctionInstancesRequest::getSource() const {
  return source_;
}

void ListFunctionInstancesRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("source"), source);
}

std::string ListFunctionInstancesRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void ListFunctionInstancesRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

int ListFunctionInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFunctionInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

