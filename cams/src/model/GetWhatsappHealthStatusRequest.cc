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

#include <alibabacloud/cams/model/GetWhatsappHealthStatusRequest.h>

using AlibabaCloud::Cams::Model::GetWhatsappHealthStatusRequest;

GetWhatsappHealthStatusRequest::GetWhatsappHealthStatusRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetWhatsappHealthStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetWhatsappHealthStatusRequest::~GetWhatsappHealthStatusRequest() {}

long GetWhatsappHealthStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetWhatsappHealthStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetWhatsappHealthStatusRequest::getNodeType() const {
  return nodeType_;
}

void GetWhatsappHealthStatusRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string GetWhatsappHealthStatusRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void GetWhatsappHealthStatusRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string GetWhatsappHealthStatusRequest::getLanguage() const {
  return language_;
}

void GetWhatsappHealthStatusRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string GetWhatsappHealthStatusRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void GetWhatsappHealthStatusRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string GetWhatsappHealthStatusRequest::getExtendFunction() const {
  return extendFunction_;
}

void GetWhatsappHealthStatusRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string GetWhatsappHealthStatusRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetWhatsappHealthStatusRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetWhatsappHealthStatusRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void GetWhatsappHealthStatusRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string GetWhatsappHealthStatusRequest::getRouteName() const {
  return routeName_;
}

void GetWhatsappHealthStatusRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string GetWhatsappHealthStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetWhatsappHealthStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetWhatsappHealthStatusRequest::getOwnerId() const {
  return ownerId_;
}

void GetWhatsappHealthStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetWhatsappHealthStatusRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void GetWhatsappHealthStatusRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string GetWhatsappHealthStatusRequest::getWabaId() const {
  return wabaId_;
}

void GetWhatsappHealthStatusRequest::setWabaId(const std::string &wabaId) {
  wabaId_ = wabaId;
  setParameter(std::string("WabaId"), wabaId);
}

std::string GetWhatsappHealthStatusRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetWhatsappHealthStatusRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string GetWhatsappHealthStatusRequest::getTemplateCode() const {
  return templateCode_;
}

void GetWhatsappHealthStatusRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setParameter(std::string("TemplateCode"), templateCode);
}

