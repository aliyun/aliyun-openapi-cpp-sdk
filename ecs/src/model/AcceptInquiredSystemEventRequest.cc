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

#include <alibabacloud/ecs/model/AcceptInquiredSystemEventRequest.h>

using AlibabaCloud::Ecs::Model::AcceptInquiredSystemEventRequest;

AcceptInquiredSystemEventRequest::AcceptInquiredSystemEventRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AcceptInquiredSystemEvent") {
  setMethod(HttpRequest::Method::Post);
}

AcceptInquiredSystemEventRequest::~AcceptInquiredSystemEventRequest() {}

std::string AcceptInquiredSystemEventRequest::getEventId() const {
  return eventId_;
}

void AcceptInquiredSystemEventRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

long AcceptInquiredSystemEventRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AcceptInquiredSystemEventRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AcceptInquiredSystemEventRequest::getRegionId() const {
  return regionId_;
}

void AcceptInquiredSystemEventRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AcceptInquiredSystemEventRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AcceptInquiredSystemEventRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AcceptInquiredSystemEventRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AcceptInquiredSystemEventRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AcceptInquiredSystemEventRequest::getOwnerId() const {
  return ownerId_;
}

void AcceptInquiredSystemEventRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AcceptInquiredSystemEventRequest::getChoice() const {
  return choice_;
}

void AcceptInquiredSystemEventRequest::setChoice(const std::string &choice) {
  choice_ = choice;
  setParameter(std::string("Choice"), choice);
}

