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

#include <alibabacloud/cams/model/ChatappSyncPhoneNumberRequest.h>

using AlibabaCloud::Cams::Model::ChatappSyncPhoneNumberRequest;

ChatappSyncPhoneNumberRequest::ChatappSyncPhoneNumberRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ChatappSyncPhoneNumber") {
  setMethod(HttpRequest::Method::Post);
}

ChatappSyncPhoneNumberRequest::~ChatappSyncPhoneNumberRequest() {}

long ChatappSyncPhoneNumberRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ChatappSyncPhoneNumberRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ChatappSyncPhoneNumberRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void ChatappSyncPhoneNumberRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string ChatappSyncPhoneNumberRequest::getExtendFunction() const {
  return extendFunction_;
}

void ChatappSyncPhoneNumberRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ChatappSyncPhoneNumberRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ChatappSyncPhoneNumberRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ChatappSyncPhoneNumberRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void ChatappSyncPhoneNumberRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string ChatappSyncPhoneNumberRequest::getRouteName() const {
  return routeName_;
}

void ChatappSyncPhoneNumberRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ChatappSyncPhoneNumberRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ChatappSyncPhoneNumberRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ChatappSyncPhoneNumberRequest::getOwnerId() const {
  return ownerId_;
}

void ChatappSyncPhoneNumberRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ChatappSyncPhoneNumberRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void ChatappSyncPhoneNumberRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string ChatappSyncPhoneNumberRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ChatappSyncPhoneNumberRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

