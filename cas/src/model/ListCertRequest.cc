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

#include <alibabacloud/cas/model/ListCertRequest.h>

using AlibabaCloud::Cas::Model::ListCertRequest;

ListCertRequest::ListCertRequest()
    : RpcServiceRequest("cas", "2020-04-07", "ListCert") {
  setMethod(HttpRequest::Method::Post);
}

ListCertRequest::~ListCertRequest() {}

std::string ListCertRequest::getSourceIp() const {
  return sourceIp_;
}

void ListCertRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ListCertRequest::getWarehouseId() const {
  return warehouseId_;
}

void ListCertRequest::setWarehouseId(long warehouseId) {
  warehouseId_ = warehouseId;
  setParameter(std::string("WarehouseId"), std::to_string(warehouseId));
}

std::string ListCertRequest::getCertType() const {
  return certType_;
}

void ListCertRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string ListCertRequest::getSourceType() const {
  return sourceType_;
}

void ListCertRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string ListCertRequest::getKeyWord() const {
  return keyWord_;
}

void ListCertRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

long ListCertRequest::getShowSize() const {
  return showSize_;
}

void ListCertRequest::setShowSize(long showSize) {
  showSize_ = showSize;
  setParameter(std::string("ShowSize"), std::to_string(showSize));
}

long ListCertRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCertRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListCertRequest::getStatus() const {
  return status_;
}

void ListCertRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

