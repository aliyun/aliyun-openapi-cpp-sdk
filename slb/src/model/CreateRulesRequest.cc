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

#include <alibabacloud/slb/model/CreateRulesRequest.h>

using AlibabaCloud::Slb::Model::CreateRulesRequest;

CreateRulesRequest::CreateRulesRequest()
    : RpcServiceRequest("slb", "2014-05-15", "CreateRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateRulesRequest::~CreateRulesRequest() {}

std::string CreateRulesRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateRulesRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long CreateRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateRulesRequest::getRegionId() const {
  return regionId_;
}

void CreateRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRulesRequest::getRuleList() const {
  return ruleList_;
}

void CreateRulesRequest::setRuleList(const std::string &ruleList) {
  ruleList_ = ruleList;
  setParameter(std::string("RuleList"), ruleList);
}

int CreateRulesRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateRulesRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string CreateRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateRulesRequest::getOwnerId() const {
  return ownerId_;
}

void CreateRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateRulesRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void CreateRulesRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string CreateRulesRequest::getTags() const {
  return tags_;
}

void CreateRulesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateRulesRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateRulesRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

