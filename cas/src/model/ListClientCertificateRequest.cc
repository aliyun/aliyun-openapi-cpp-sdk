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

#include <alibabacloud/cas/model/ListClientCertificateRequest.h>

using AlibabaCloud::Cas::Model::ListClientCertificateRequest;

ListClientCertificateRequest::ListClientCertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "ListClientCertificate") {
  setMethod(HttpRequest::Method::Post);
}

ListClientCertificateRequest::~ListClientCertificateRequest() {}

std::string ListClientCertificateRequest::getIdentifier() const {
  return identifier_;
}

void ListClientCertificateRequest::setIdentifier(const std::string &identifier) {
  identifier_ = identifier;
  setParameter(std::string("Identifier"), identifier);
}

int ListClientCertificateRequest::getCurrentPage() const {
  return currentPage_;
}

void ListClientCertificateRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int ListClientCertificateRequest::getShowSize() const {
  return showSize_;
}

void ListClientCertificateRequest::setShowSize(int showSize) {
  showSize_ = showSize;
  setParameter(std::string("ShowSize"), std::to_string(showSize));
}

