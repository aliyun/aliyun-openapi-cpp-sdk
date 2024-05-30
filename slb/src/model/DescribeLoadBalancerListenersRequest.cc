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

#include <alibabacloud/slb/model/DescribeLoadBalancerListenersRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancerListenersRequest;

DescribeLoadBalancerListenersRequest::DescribeLoadBalancerListenersRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancerListeners") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancerListenersRequest::~DescribeLoadBalancerListenersRequest() {}

long DescribeLoadBalancerListenersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLoadBalancerListenersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeLoadBalancerListenersRequest::getDescription() const {
  return description_;
}

void DescribeLoadBalancerListenersRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string DescribeLoadBalancerListenersRequest::getRegionId() const {
  return regionId_;
}

void DescribeLoadBalancerListenersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLoadBalancerListenersRequest::getNextToken() const {
  return nextToken_;
}

void DescribeLoadBalancerListenersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<DescribeLoadBalancerListenersRequest::Tag> DescribeLoadBalancerListenersRequest::getTag() const {
  return tag_;
}

void DescribeLoadBalancerListenersRequest::setTag(const std::vector<DescribeLoadBalancerListenersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

int DescribeLoadBalancerListenersRequest::getListenerPort() const {
  return listenerPort_;
}

void DescribeLoadBalancerListenersRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string DescribeLoadBalancerListenersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLoadBalancerListenersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLoadBalancerListenersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLoadBalancerListenersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeLoadBalancerListenersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLoadBalancerListenersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLoadBalancerListenersRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void DescribeLoadBalancerListenersRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::vector<std::string> DescribeLoadBalancerListenersRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeLoadBalancerListenersRequest::setLoadBalancerId(const std::vector<std::string> &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
}

int DescribeLoadBalancerListenersRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeLoadBalancerListenersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

