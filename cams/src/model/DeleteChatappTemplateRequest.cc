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

#include <alibabacloud/cams/model/DeleteChatappTemplateRequest.h>

using AlibabaCloud::Cams::Model::DeleteChatappTemplateRequest;

DeleteChatappTemplateRequest::DeleteChatappTemplateRequest()
    : RpcServiceRequest("cams", "2020-06-06", "DeleteChatappTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteChatappTemplateRequest::~DeleteChatappTemplateRequest() {}

long DeleteChatappTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteChatappTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteChatappTemplateRequest::getCustWabaId() const {
  return custWabaId_;
}

void DeleteChatappTemplateRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setParameter(std::string("CustWabaId"), custWabaId);
}

std::string DeleteChatappTemplateRequest::getLanguage() const {
  return language_;
}

void DeleteChatappTemplateRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string DeleteChatappTemplateRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void DeleteChatappTemplateRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string DeleteChatappTemplateRequest::getExtendFunction() const {
  return extendFunction_;
}

void DeleteChatappTemplateRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string DeleteChatappTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteChatappTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteChatappTemplateRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void DeleteChatappTemplateRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string DeleteChatappTemplateRequest::getTemplateType() const {
  return templateType_;
}

void DeleteChatappTemplateRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string DeleteChatappTemplateRequest::getTemplateName() const {
  return templateName_;
}

void DeleteChatappTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string DeleteChatappTemplateRequest::getRouteName() const {
  return routeName_;
}

void DeleteChatappTemplateRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string DeleteChatappTemplateRequest::getIsvCode() const {
  return isvCode_;
}

void DeleteChatappTemplateRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setParameter(std::string("IsvCode"), isvCode);
}

std::string DeleteChatappTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteChatappTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteChatappTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteChatappTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteChatappTemplateRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void DeleteChatappTemplateRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string DeleteChatappTemplateRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void DeleteChatappTemplateRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string DeleteChatappTemplateRequest::getTemplateCode() const {
  return templateCode_;
}

void DeleteChatappTemplateRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setParameter(std::string("TemplateCode"), templateCode);
}

