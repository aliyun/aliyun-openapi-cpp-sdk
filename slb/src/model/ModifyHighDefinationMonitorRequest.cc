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

#include <alibabacloud/slb/model/ModifyHighDefinationMonitorRequest.h>

using AlibabaCloud::Slb::Model::ModifyHighDefinationMonitorRequest;

ModifyHighDefinationMonitorRequest::ModifyHighDefinationMonitorRequest()
    : RpcServiceRequest("slb", "2014-05-15", "ModifyHighDefinationMonitor") {
  setMethod(HttpRequest::Method::Post);
}

ModifyHighDefinationMonitorRequest::~ModifyHighDefinationMonitorRequest() {}

long ModifyHighDefinationMonitorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyHighDefinationMonitorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyHighDefinationMonitorRequest::getLogProject() const {
  return logProject_;
}

void ModifyHighDefinationMonitorRequest::setLogProject(const std::string &logProject) {
  logProject_ = logProject;
  setParameter(std::string("LogProject"), logProject);
}

std::string ModifyHighDefinationMonitorRequest::getRegionId() const {
  return regionId_;
}

void ModifyHighDefinationMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyHighDefinationMonitorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyHighDefinationMonitorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyHighDefinationMonitorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyHighDefinationMonitorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyHighDefinationMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyHighDefinationMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyHighDefinationMonitorRequest::getLogStore() const {
  return logStore_;
}

void ModifyHighDefinationMonitorRequest::setLogStore(const std::string &logStore) {
  logStore_ = logStore;
  setParameter(std::string("LogStore"), logStore);
}

