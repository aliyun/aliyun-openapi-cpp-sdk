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

#include <alibabacloud/cc5g/model/ListAPNsRequest.h>

using AlibabaCloud::CC5G::Model::ListAPNsRequest;

ListAPNsRequest::ListAPNsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListAPNs") {
  setMethod(HttpRequest::Method::Get);
}

ListAPNsRequest::~ListAPNsRequest() {}

std::string ListAPNsRequest::getISP() const {
  return iSP_;
}

void ListAPNsRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

std::string ListAPNsRequest::getRegionId() const {
  return regionId_;
}

void ListAPNsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListAPNsRequest::getNextToken() const {
  return nextToken_;
}

void ListAPNsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListAPNsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAPNsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListAPNsRequest::getAPN() const {
  return aPN_;
}

void ListAPNsRequest::setAPN(const std::string &aPN) {
  aPN_ = aPN;
  setParameter(std::string("APN"), aPN);
}

