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

#include <alibabacloud/mts/model/AddSmarttagTemplateRequest.h>

using AlibabaCloud::Mts::Model::AddSmarttagTemplateRequest;

AddSmarttagTemplateRequest::AddSmarttagTemplateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddSmarttagTemplate") {
  setMethod(HttpRequest::Method::Post);
}

AddSmarttagTemplateRequest::~AddSmarttagTemplateRequest() {}

long AddSmarttagTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddSmarttagTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddSmarttagTemplateRequest::getIndustry() const {
  return industry_;
}

void AddSmarttagTemplateRequest::setIndustry(const std::string &industry) {
  industry_ = industry;
  setParameter(std::string("Industry"), industry);
}

std::string AddSmarttagTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddSmarttagTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddSmarttagTemplateRequest::getScene() const {
  return scene_;
}

void AddSmarttagTemplateRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

std::string AddSmarttagTemplateRequest::getTemplateName() const {
  return templateName_;
}

void AddSmarttagTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

bool AddSmarttagTemplateRequest::getIsDefault() const {
  return isDefault_;
}

void AddSmarttagTemplateRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
}

std::string AddSmarttagTemplateRequest::getFaceCategoryIds() const {
  return faceCategoryIds_;
}

void AddSmarttagTemplateRequest::setFaceCategoryIds(const std::string &faceCategoryIds) {
  faceCategoryIds_ = faceCategoryIds;
  setParameter(std::string("FaceCategoryIds"), faceCategoryIds);
}

std::string AddSmarttagTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddSmarttagTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddSmarttagTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddSmarttagTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddSmarttagTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void AddSmarttagTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddSmarttagTemplateRequest::getAnalyseTypes() const {
  return analyseTypes_;
}

void AddSmarttagTemplateRequest::setAnalyseTypes(const std::string &analyseTypes) {
  analyseTypes_ = analyseTypes;
  setParameter(std::string("AnalyseTypes"), analyseTypes);
}

