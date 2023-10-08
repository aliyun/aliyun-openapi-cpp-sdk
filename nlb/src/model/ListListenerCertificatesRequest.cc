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

#include <alibabacloud/nlb/model/ListListenerCertificatesRequest.h>

using AlibabaCloud::Nlb::Model::ListListenerCertificatesRequest;

ListListenerCertificatesRequest::ListListenerCertificatesRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "ListListenerCertificates") {
  setMethod(HttpRequest::Method::Post);
}

ListListenerCertificatesRequest::~ListListenerCertificatesRequest() {}

std::string ListListenerCertificatesRequest::getListenerId() const {
  return listenerId_;
}

void ListListenerCertificatesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::string ListListenerCertificatesRequest::getCertType() const {
  return certType_;
}

void ListListenerCertificatesRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setBodyParameter(std::string("CertType"), certType);
}

std::string ListListenerCertificatesRequest::getNextToken() const {
  return nextToken_;
}

void ListListenerCertificatesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListListenerCertificatesRequest::getRegionId() const {
  return regionId_;
}

void ListListenerCertificatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListListenerCertificatesRequest::getMaxResults() const {
  return maxResults_;
}

void ListListenerCertificatesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

