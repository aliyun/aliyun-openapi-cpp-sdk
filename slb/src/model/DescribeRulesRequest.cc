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

#include <alibabacloud/slb/model/DescribeRulesRequest.h>

using AlibabaCloud::Slb::Model::DescribeRulesRequest;

DescribeRulesRequest::DescribeRulesRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRulesRequest::~DescribeRulesRequest() {}

std::string DescribeRulesRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeRulesRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRulesRequest::getListenerPort() const {
  return listenerPort_;
}

void DescribeRulesRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string DescribeRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRulesRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void DescribeRulesRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string DescribeRulesRequest::getTags() const {
  return tags_;
}

void DescribeRulesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeRulesRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeRulesRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

