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

#include <alibabacloud/ecs/model/CreateSimulatedSystemEventsRequest.h>

using AlibabaCloud::Ecs::Model::CreateSimulatedSystemEventsRequest;

CreateSimulatedSystemEventsRequest::CreateSimulatedSystemEventsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateSimulatedSystemEvents") {
  setMethod(HttpRequest::Method::Post);
}

CreateSimulatedSystemEventsRequest::~CreateSimulatedSystemEventsRequest() {}

long CreateSimulatedSystemEventsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSimulatedSystemEventsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSimulatedSystemEventsRequest::getNotBefore() const {
  return notBefore_;
}

void CreateSimulatedSystemEventsRequest::setNotBefore(const std::string &notBefore) {
  notBefore_ = notBefore;
  setParameter(std::string("NotBefore"), notBefore);
}

std::string CreateSimulatedSystemEventsRequest::getRegionId() const {
  return regionId_;
}

void CreateSimulatedSystemEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSimulatedSystemEventsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSimulatedSystemEventsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSimulatedSystemEventsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSimulatedSystemEventsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateSimulatedSystemEventsRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSimulatedSystemEventsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> CreateSimulatedSystemEventsRequest::getInstanceId() const {
  return instanceId_;
}

void CreateSimulatedSystemEventsRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string CreateSimulatedSystemEventsRequest::getEventType() const {
  return eventType_;
}

void CreateSimulatedSystemEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

