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

#include <alibabacloud/smartag/model/EnableSmartAGDpiMonitorRequest.h>

using AlibabaCloud::Smartag::Model::EnableSmartAGDpiMonitorRequest;

EnableSmartAGDpiMonitorRequest::EnableSmartAGDpiMonitorRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "EnableSmartAGDpiMonitor") {
  setMethod(HttpRequest::Method::Post);
}

EnableSmartAGDpiMonitorRequest::~EnableSmartAGDpiMonitorRequest() {}

std::string EnableSmartAGDpiMonitorRequest::getSlsLogStore() const {
  return slsLogStore_;
}

void EnableSmartAGDpiMonitorRequest::setSlsLogStore(const std::string &slsLogStore) {
  slsLogStore_ = slsLogStore;
  setParameter(std::string("SlsLogStore"), slsLogStore);
}

long EnableSmartAGDpiMonitorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableSmartAGDpiMonitorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableSmartAGDpiMonitorRequest::getClientToken() const {
  return clientToken_;
}

void EnableSmartAGDpiMonitorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableSmartAGDpiMonitorRequest::getRegionId() const {
  return regionId_;
}

void EnableSmartAGDpiMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableSmartAGDpiMonitorRequest::getSlsProjectName() const {
  return slsProjectName_;
}

void EnableSmartAGDpiMonitorRequest::setSlsProjectName(const std::string &slsProjectName) {
  slsProjectName_ = slsProjectName;
  setParameter(std::string("SlsProjectName"), slsProjectName);
}

bool EnableSmartAGDpiMonitorRequest::getDryRun() const {
  return dryRun_;
}

void EnableSmartAGDpiMonitorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string EnableSmartAGDpiMonitorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnableSmartAGDpiMonitorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EnableSmartAGDpiMonitorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnableSmartAGDpiMonitorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EnableSmartAGDpiMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void EnableSmartAGDpiMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnableSmartAGDpiMonitorRequest::getSmartAGId() const {
  return smartAGId_;
}

void EnableSmartAGDpiMonitorRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

