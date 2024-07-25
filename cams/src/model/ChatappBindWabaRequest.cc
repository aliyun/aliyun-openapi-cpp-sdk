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

#include <alibabacloud/cams/model/ChatappBindWabaRequest.h>

using AlibabaCloud::Cams::Model::ChatappBindWabaRequest;

ChatappBindWabaRequest::ChatappBindWabaRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ChatappBindWaba") {
  setMethod(HttpRequest::Method::Post);
}

ChatappBindWabaRequest::~ChatappBindWabaRequest() {}

long ChatappBindWabaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ChatappBindWabaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ChatappBindWabaRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void ChatappBindWabaRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string ChatappBindWabaRequest::getExtendFunction() const {
  return extendFunction_;
}

void ChatappBindWabaRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ChatappBindWabaRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ChatappBindWabaRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ChatappBindWabaRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void ChatappBindWabaRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string ChatappBindWabaRequest::getRouteName() const {
  return routeName_;
}

void ChatappBindWabaRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ChatappBindWabaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ChatappBindWabaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ChatappBindWabaRequest::getOwnerId() const {
  return ownerId_;
}

void ChatappBindWabaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ChatappBindWabaRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void ChatappBindWabaRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string ChatappBindWabaRequest::getWabaId() const {
  return wabaId_;
}

void ChatappBindWabaRequest::setWabaId(const std::string &wabaId) {
  wabaId_ = wabaId;
  setParameter(std::string("WabaId"), wabaId);
}

