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

#include <alibabacloud/ga/model/ListBasicAccelerateIpsRequest.h>

using AlibabaCloud::Ga::Model::ListBasicAccelerateIpsRequest;

ListBasicAccelerateIpsRequest::ListBasicAccelerateIpsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListBasicAccelerateIps") {
  setMethod(HttpRequest::Method::Post);
}

ListBasicAccelerateIpsRequest::~ListBasicAccelerateIpsRequest() {}

std::string ListBasicAccelerateIpsRequest::getClientToken() const {
  return clientToken_;
}

void ListBasicAccelerateIpsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListBasicAccelerateIpsRequest::getIpSetId() const {
  return ipSetId_;
}

void ListBasicAccelerateIpsRequest::setIpSetId(const std::string &ipSetId) {
  ipSetId_ = ipSetId;
  setParameter(std::string("IpSetId"), ipSetId);
}

std::string ListBasicAccelerateIpsRequest::getAccelerateIpAddress() const {
  return accelerateIpAddress_;
}

void ListBasicAccelerateIpsRequest::setAccelerateIpAddress(const std::string &accelerateIpAddress) {
  accelerateIpAddress_ = accelerateIpAddress;
  setParameter(std::string("AccelerateIpAddress"), accelerateIpAddress);
}

std::string ListBasicAccelerateIpsRequest::getAccelerateIpId() const {
  return accelerateIpId_;
}

void ListBasicAccelerateIpsRequest::setAccelerateIpId(const std::string &accelerateIpId) {
  accelerateIpId_ = accelerateIpId;
  setParameter(std::string("AccelerateIpId"), accelerateIpId);
}

std::string ListBasicAccelerateIpsRequest::getRegionId() const {
  return regionId_;
}

void ListBasicAccelerateIpsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListBasicAccelerateIpsRequest::getNextToken() const {
  return nextToken_;
}

void ListBasicAccelerateIpsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListBasicAccelerateIpsRequest::getMaxResults() const {
  return maxResults_;
}

void ListBasicAccelerateIpsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

