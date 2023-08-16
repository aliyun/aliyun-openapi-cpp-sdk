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

#include <alibabacloud/csas/model/ListConnectorsRequest.h>

using AlibabaCloud::Csas::Model::ListConnectorsRequest;

ListConnectorsRequest::ListConnectorsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListConnectors") {
  setMethod(HttpRequest::Method::Get);
}

ListConnectorsRequest::~ListConnectorsRequest() {}

std::string ListConnectorsRequest::getSwitchStatus() const {
  return switchStatus_;
}

void ListConnectorsRequest::setSwitchStatus(const std::string &switchStatus) {
  switchStatus_ = switchStatus;
  setParameter(std::string("SwitchStatus"), switchStatus);
}

std::string ListConnectorsRequest::getSourceIp() const {
  return sourceIp_;
}

void ListConnectorsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListConnectorsRequest::getPageSize() const {
  return pageSize_;
}

void ListConnectorsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListConnectorsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListConnectorsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListConnectorsRequest::getName() const {
  return name_;
}

void ListConnectorsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<ListConnectorsRequest::std::string> ListConnectorsRequest::getConnectorIds() const {
  return connectorIds_;
}

void ListConnectorsRequest::setConnectorIds(const std::vector<ListConnectorsRequest::std::string> &connectorIds) {
  connectorIds_ = connectorIds;
  for(int dep1 = 0; dep1 != connectorIds.size(); dep1++) {
    setParameter(std::string("ConnectorIds") + "." + std::to_string(dep1 + 1), connectorIds[dep1]);
  }
}

std::string ListConnectorsRequest::getStatus() const {
  return status_;
}

void ListConnectorsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

