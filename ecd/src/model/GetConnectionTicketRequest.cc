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

#include <alibabacloud/ecd/model/GetConnectionTicketRequest.h>

using AlibabaCloud::Ecd::Model::GetConnectionTicketRequest;

GetConnectionTicketRequest::GetConnectionTicketRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "GetConnectionTicket") {
  setMethod(HttpRequest::Method::Post);
}

GetConnectionTicketRequest::~GetConnectionTicketRequest() {}

long GetConnectionTicketRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetConnectionTicketRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetConnectionTicketRequest::getUuid() const {
  return uuid_;
}

void GetConnectionTicketRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string GetConnectionTicketRequest::getCommandContent() const {
  return commandContent_;
}

void GetConnectionTicketRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

std::string GetConnectionTicketRequest::getPassword() const {
  return password_;
}

void GetConnectionTicketRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string GetConnectionTicketRequest::getRegionId() const {
  return regionId_;
}

void GetConnectionTicketRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetConnectionTicketRequest::getEndUserId() const {
  return endUserId_;
}

void GetConnectionTicketRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string GetConnectionTicketRequest::getDesktopId() const {
  return desktopId_;
}

void GetConnectionTicketRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string GetConnectionTicketRequest::getTaskId() const {
  return taskId_;
}

void GetConnectionTicketRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string GetConnectionTicketRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetConnectionTicketRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetConnectionTicketRequest::getOwnerId() const {
  return ownerId_;
}

void GetConnectionTicketRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

