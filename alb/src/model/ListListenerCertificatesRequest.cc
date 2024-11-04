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

#include <alibabacloud/alb/model/ListListenerCertificatesRequest.h>

using AlibabaCloud::Alb::Model::ListListenerCertificatesRequest;

ListListenerCertificatesRequest::ListListenerCertificatesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListListenerCertificates") {
  setMethod(HttpRequest::Method::Post);
}

ListListenerCertificatesRequest::~ListListenerCertificatesRequest() {}

std::string ListListenerCertificatesRequest::getCertificateType() const {
  return certificateType_;
}

void ListListenerCertificatesRequest::setCertificateType(const std::string &certificateType) {
  certificateType_ = certificateType;
  setParameter(std::string("CertificateType"), certificateType);
}

std::string ListListenerCertificatesRequest::getListenerId() const {
  return listenerId_;
}

void ListListenerCertificatesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::vector<ListListenerCertificatesRequest::std::string> ListListenerCertificatesRequest::getCertificateIds() const {
  return certificateIds_;
}

void ListListenerCertificatesRequest::setCertificateIds(const std::vector<ListListenerCertificatesRequest::std::string> &certificateIds) {
  certificateIds_ = certificateIds;
  for(int dep1 = 0; dep1 != certificateIds.size(); dep1++) {
    setParameter(std::string("CertificateIds") + "." + std::to_string(dep1 + 1), certificateIds[dep1]);
  }
}

std::string ListListenerCertificatesRequest::getNextToken() const {
  return nextToken_;
}

void ListListenerCertificatesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListListenerCertificatesRequest::getMaxResults() const {
  return maxResults_;
}

void ListListenerCertificatesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

