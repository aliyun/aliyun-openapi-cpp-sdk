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

#include <alibabacloud/oceanbasepro/model/ListWorkerInstancesRequest.h>

using AlibabaCloud::OceanBasePro::Model::ListWorkerInstancesRequest;

ListWorkerInstancesRequest::ListWorkerInstancesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ListWorkerInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListWorkerInstancesRequest::~ListWorkerInstancesRequest() {}

bool ListWorkerInstancesRequest::getOnlyBindable() const {
  return onlyBindable_;
}

void ListWorkerInstancesRequest::setOnlyBindable(bool onlyBindable) {
  onlyBindable_ = onlyBindable;
  setBodyParameter(std::string("OnlyBindable"), onlyBindable ? "true" : "false");
}

int ListWorkerInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListWorkerInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::vector<ListWorkerInstancesRequest::std::string> ListWorkerInstancesRequest::getSpecs() const {
  return specs_;
}

void ListWorkerInstancesRequest::setSpecs(const std::vector<ListWorkerInstancesRequest::std::string> &specs) {
  specs_ = specs;
  for(int dep1 = 0; dep1 != specs.size(); dep1++) {
    setBodyParameter(std::string("Specs") + "." + std::to_string(dep1 + 1), specs[dep1]);
  }
}

std::string ListWorkerInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void ListWorkerInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setBodyParameter(std::string("InstanceName"), instanceName);
}

int ListWorkerInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListWorkerInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListWorkerInstancesRequest::getSourceType() const {
  return sourceType_;
}

void ListWorkerInstancesRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setBodyParameter(std::string("SourceType"), sourceType);
}

std::string ListWorkerInstancesRequest::getDestType() const {
  return destType_;
}

void ListWorkerInstancesRequest::setDestType(const std::string &destType) {
  destType_ = destType;
  setBodyParameter(std::string("DestType"), destType);
}

