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

#include <alibabacloud/ga/model/ListListenerCertificatesRequest.h>

using AlibabaCloud::Ga::Model::ListListenerCertificatesRequest;

ListListenerCertificatesRequest::ListListenerCertificatesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListListenerCertificates") {
  setMethod(HttpRequest::Method::Post);
}

ListListenerCertificatesRequest::~ListListenerCertificatesRequest() {}

std::string ListListenerCertificatesRequest::getRole() const {
  return role_;
}

void ListListenerCertificatesRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::string ListListenerCertificatesRequest::getListenerId() const {
  return listenerId_;
}

void ListListenerCertificatesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListListenerCertificatesRequest::getRegionId() const {
  return regionId_;
}

void ListListenerCertificatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
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

std::string ListListenerCertificatesRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListListenerCertificatesRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

