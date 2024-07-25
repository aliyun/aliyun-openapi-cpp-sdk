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

#include <alibabacloud/cams/model/GetConversationalAutomationRequest.h>

using AlibabaCloud::Cams::Model::GetConversationalAutomationRequest;

GetConversationalAutomationRequest::GetConversationalAutomationRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetConversationalAutomation") {
  setMethod(HttpRequest::Method::Post);
}

GetConversationalAutomationRequest::~GetConversationalAutomationRequest() {}

long GetConversationalAutomationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetConversationalAutomationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetConversationalAutomationRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void GetConversationalAutomationRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string GetConversationalAutomationRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void GetConversationalAutomationRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string GetConversationalAutomationRequest::getExtendFunction() const {
  return extendFunction_;
}

void GetConversationalAutomationRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string GetConversationalAutomationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetConversationalAutomationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetConversationalAutomationRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void GetConversationalAutomationRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string GetConversationalAutomationRequest::getRouteName() const {
  return routeName_;
}

void GetConversationalAutomationRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string GetConversationalAutomationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetConversationalAutomationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetConversationalAutomationRequest::getOwnerId() const {
  return ownerId_;
}

void GetConversationalAutomationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetConversationalAutomationRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void GetConversationalAutomationRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string GetConversationalAutomationRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetConversationalAutomationRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

