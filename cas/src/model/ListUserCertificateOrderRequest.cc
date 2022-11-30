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

#include <alibabacloud/cas/model/ListUserCertificateOrderRequest.h>

using AlibabaCloud::Cas::Model::ListUserCertificateOrderRequest;

ListUserCertificateOrderRequest::ListUserCertificateOrderRequest()
    : RpcServiceRequest("cas", "2020-04-07", "ListUserCertificateOrder") {
  setMethod(HttpRequest::Method::Post);
}

ListUserCertificateOrderRequest::~ListUserCertificateOrderRequest() {}

std::string ListUserCertificateOrderRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListUserCertificateOrderRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListUserCertificateOrderRequest::getSourceIp() const {
  return sourceIp_;
}

void ListUserCertificateOrderRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListUserCertificateOrderRequest::getKeyword() const {
  return keyword_;
}

void ListUserCertificateOrderRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

long ListUserCertificateOrderRequest::getShowSize() const {
  return showSize_;
}

void ListUserCertificateOrderRequest::setShowSize(long showSize) {
  showSize_ = showSize;
  setParameter(std::string("ShowSize"), std::to_string(showSize));
}

long ListUserCertificateOrderRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUserCertificateOrderRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListUserCertificateOrderRequest::getStatus() const {
  return status_;
}

void ListUserCertificateOrderRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string ListUserCertificateOrderRequest::getOrderType() const {
  return orderType_;
}

void ListUserCertificateOrderRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

