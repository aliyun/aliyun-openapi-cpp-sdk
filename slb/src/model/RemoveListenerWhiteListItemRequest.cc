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

#include <alibabacloud/slb/model/RemoveListenerWhiteListItemRequest.h>

using AlibabaCloud::Slb::Model::RemoveListenerWhiteListItemRequest;

RemoveListenerWhiteListItemRequest::RemoveListenerWhiteListItemRequest()
    : RpcServiceRequest("slb", "2014-05-15", "RemoveListenerWhiteListItem") {
  setMethod(HttpRequest::Method::Post);
}

RemoveListenerWhiteListItemRequest::~RemoveListenerWhiteListItemRequest() {}

std::string RemoveListenerWhiteListItemRequest::getAccess_key_id() const {
  return access_key_id_;
}

void RemoveListenerWhiteListItemRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long RemoveListenerWhiteListItemRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveListenerWhiteListItemRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveListenerWhiteListItemRequest::getSourceItems() const {
  return sourceItems_;
}

void RemoveListenerWhiteListItemRequest::setSourceItems(const std::string &sourceItems) {
  sourceItems_ = sourceItems;
  setParameter(std::string("SourceItems"), sourceItems);
}

std::string RemoveListenerWhiteListItemRequest::getRegionId() const {
  return regionId_;
}

void RemoveListenerWhiteListItemRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int RemoveListenerWhiteListItemRequest::getListenerPort() const {
  return listenerPort_;
}

void RemoveListenerWhiteListItemRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string RemoveListenerWhiteListItemRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveListenerWhiteListItemRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveListenerWhiteListItemRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveListenerWhiteListItemRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveListenerWhiteListItemRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveListenerWhiteListItemRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RemoveListenerWhiteListItemRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void RemoveListenerWhiteListItemRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string RemoveListenerWhiteListItemRequest::getTags() const {
  return tags_;
}

void RemoveListenerWhiteListItemRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string RemoveListenerWhiteListItemRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void RemoveListenerWhiteListItemRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

