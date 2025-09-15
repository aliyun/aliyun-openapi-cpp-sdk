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

#include <alibabacloud/cas/model/ListRevokeCertificateRequest.h>

using AlibabaCloud::Cas::Model::ListRevokeCertificateRequest;

ListRevokeCertificateRequest::ListRevokeCertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "ListRevokeCertificate") {
  setMethod(HttpRequest::Method::Post);
}

ListRevokeCertificateRequest::~ListRevokeCertificateRequest() {}

int ListRevokeCertificateRequest::getCurrentPage() const {
  return currentPage_;
}

void ListRevokeCertificateRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int ListRevokeCertificateRequest::getShowSize() const {
  return showSize_;
}

void ListRevokeCertificateRequest::setShowSize(int showSize) {
  showSize_ = showSize;
  setParameter(std::string("ShowSize"), std::to_string(showSize));
}

