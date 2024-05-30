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

#include <alibabacloud/slb/model/EnableHighDefinationMonitorRequest.h>

using AlibabaCloud::Slb::Model::EnableHighDefinationMonitorRequest;

EnableHighDefinationMonitorRequest::EnableHighDefinationMonitorRequest()
    : RpcServiceRequest("slb", "2014-05-15", "EnableHighDefinationMonitor") {
  setMethod(HttpRequest::Method::Post);
}

EnableHighDefinationMonitorRequest::~EnableHighDefinationMonitorRequest() {}

std::string EnableHighDefinationMonitorRequest::getAccess_key_id() const {
  return access_key_id_;
}

void EnableHighDefinationMonitorRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long EnableHighDefinationMonitorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableHighDefinationMonitorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableHighDefinationMonitorRequest::getLogProject() const {
  return logProject_;
}

void EnableHighDefinationMonitorRequest::setLogProject(const std::string &logProject) {
  logProject_ = logProject;
  setParameter(std::string("LogProject"), logProject);
}

std::string EnableHighDefinationMonitorRequest::getRegionId() const {
  return regionId_;
}

void EnableHighDefinationMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableHighDefinationMonitorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnableHighDefinationMonitorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EnableHighDefinationMonitorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnableHighDefinationMonitorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EnableHighDefinationMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void EnableHighDefinationMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnableHighDefinationMonitorRequest::getTags() const {
  return tags_;
}

void EnableHighDefinationMonitorRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string EnableHighDefinationMonitorRequest::getLogStore() const {
  return logStore_;
}

void EnableHighDefinationMonitorRequest::setLogStore(const std::string &logStore) {
  logStore_ = logStore;
  setParameter(std::string("LogStore"), logStore);
}

