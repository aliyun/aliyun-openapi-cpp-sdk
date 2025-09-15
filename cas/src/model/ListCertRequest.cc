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
    : RpcServiceRequest("cas", "2020-06-30", "ListCert") {
  setMethod(HttpRequest::Method::Post);
}

ListCertRequest::~ListCertRequest() {}

std::string ListCertRequest::getBeforeDate() const {
  return beforeDate_;
}

void ListCertRequest::setBeforeDate(const std::string &beforeDate) {
  beforeDate_ = beforeDate;
  setParameter(std::string("BeforeDate"), beforeDate);
}

int ListCertRequest::getShowSize() const {
  return showSize_;
}

void ListCertRequest::setShowSize(int showSize) {
  showSize_ = showSize;
  setParameter(std::string("ShowSize"), std::to_string(showSize));
}

std::string ListCertRequest::getInstanceUuid() const {
  return instanceUuid_;
}

void ListCertRequest::setInstanceUuid(const std::string &instanceUuid) {
  instanceUuid_ = instanceUuid;
  setParameter(std::string("InstanceUuid"), instanceUuid);
}

int ListCertRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCertRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListCertRequest::getType() const {
  return type_;
}

void ListCertRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListCertRequest::getAfterDate() const {
  return afterDate_;
}

void ListCertRequest::setAfterDate(const std::string &afterDate) {
  afterDate_ = afterDate;
  setParameter(std::string("AfterDate"), afterDate);
}

std::string ListCertRequest::getNextToken() const {
  return nextToken_;
}

void ListCertRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListCertRequest::getMaxResults() const {
  return maxResults_;
}

void ListCertRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListCertRequest::getStatus() const {
  return status_;
}

void ListCertRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

