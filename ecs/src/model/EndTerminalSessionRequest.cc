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

#include <alibabacloud/ecs/model/EndTerminalSessionRequest.h>

using AlibabaCloud::Ecs::Model::EndTerminalSessionRequest;

EndTerminalSessionRequest::EndTerminalSessionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "EndTerminalSession") {
  setMethod(HttpRequest::Method::Post);
}

EndTerminalSessionRequest::~EndTerminalSessionRequest() {}

long EndTerminalSessionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EndTerminalSessionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EndTerminalSessionRequest::getSessionId() const {
  return sessionId_;
}

void EndTerminalSessionRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string EndTerminalSessionRequest::getRegionId() const {
  return regionId_;
}

void EndTerminalSessionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EndTerminalSessionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EndTerminalSessionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EndTerminalSessionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EndTerminalSessionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EndTerminalSessionRequest::getOwnerId() const {
  return ownerId_;
}

void EndTerminalSessionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

