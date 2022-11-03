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

#include <alibabacloud/cas/model/ListCertWarehouseRequest.h>

using AlibabaCloud::Cas::Model::ListCertWarehouseRequest;

ListCertWarehouseRequest::ListCertWarehouseRequest()
    : RpcServiceRequest("cas", "2020-04-07", "ListCertWarehouse") {
  setMethod(HttpRequest::Method::Post);
}

ListCertWarehouseRequest::~ListCertWarehouseRequest() {}

long ListCertWarehouseRequest::getShowSize() const {
  return showSize_;
}

void ListCertWarehouseRequest::setShowSize(long showSize) {
  showSize_ = showSize;
  setParameter(std::string("ShowSize"), std::to_string(showSize));
}

long ListCertWarehouseRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCertWarehouseRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListCertWarehouseRequest::getType() const {
  return type_;
}

void ListCertWarehouseRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListCertWarehouseRequest::getInstanceId() const {
  return instanceId_;
}

void ListCertWarehouseRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListCertWarehouseRequest::getSourceIp() const {
  return sourceIp_;
}

void ListCertWarehouseRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListCertWarehouseRequest::getName() const {
  return name_;
}

void ListCertWarehouseRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

