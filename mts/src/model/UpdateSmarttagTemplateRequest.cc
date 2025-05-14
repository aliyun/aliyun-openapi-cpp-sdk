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

#include <alibabacloud/mts/model/UpdateSmarttagTemplateRequest.h>

using AlibabaCloud::Mts::Model::UpdateSmarttagTemplateRequest;

UpdateSmarttagTemplateRequest::UpdateSmarttagTemplateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateSmarttagTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSmarttagTemplateRequest::~UpdateSmarttagTemplateRequest() {}

long UpdateSmarttagTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateSmarttagTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateSmarttagTemplateRequest::getKnowledgeConfig() const {
  return knowledgeConfig_;
}

void UpdateSmarttagTemplateRequest::setKnowledgeConfig(const std::string &knowledgeConfig) {
  knowledgeConfig_ = knowledgeConfig;
  setParameter(std::string("KnowledgeConfig"), knowledgeConfig);
}

std::string UpdateSmarttagTemplateRequest::getIndustry() const {
  return industry_;
}

void UpdateSmarttagTemplateRequest::setIndustry(const std::string &industry) {
  industry_ = industry;
  setParameter(std::string("Industry"), industry);
}

std::string UpdateSmarttagTemplateRequest::getLabelVersion() const {
  return labelVersion_;
}

void UpdateSmarttagTemplateRequest::setLabelVersion(const std::string &labelVersion) {
  labelVersion_ = labelVersion;
  setParameter(std::string("LabelVersion"), labelVersion);
}

std::string UpdateSmarttagTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateSmarttagTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateSmarttagTemplateRequest::getScene() const {
  return scene_;
}

void UpdateSmarttagTemplateRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

std::string UpdateSmarttagTemplateRequest::getTemplateConfig() const {
  return templateConfig_;
}

void UpdateSmarttagTemplateRequest::setTemplateConfig(const std::string &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig"), templateConfig);
}

std::string UpdateSmarttagTemplateRequest::getFaceCustomParamsConfig() const {
  return faceCustomParamsConfig_;
}

void UpdateSmarttagTemplateRequest::setFaceCustomParamsConfig(const std::string &faceCustomParamsConfig) {
  faceCustomParamsConfig_ = faceCustomParamsConfig;
  setParameter(std::string("FaceCustomParamsConfig"), faceCustomParamsConfig);
}

std::string UpdateSmarttagTemplateRequest::getTemplateName() const {
  return templateName_;
}

void UpdateSmarttagTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

bool UpdateSmarttagTemplateRequest::getIsDefault() const {
  return isDefault_;
}

void UpdateSmarttagTemplateRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
}

std::string UpdateSmarttagTemplateRequest::getFaceCategoryIds() const {
  return faceCategoryIds_;
}

void UpdateSmarttagTemplateRequest::setFaceCategoryIds(const std::string &faceCategoryIds) {
  faceCategoryIds_ = faceCategoryIds;
  setParameter(std::string("FaceCategoryIds"), faceCategoryIds);
}

std::string UpdateSmarttagTemplateRequest::getKeywordConfig() const {
  return keywordConfig_;
}

void UpdateSmarttagTemplateRequest::setKeywordConfig(const std::string &keywordConfig) {
  keywordConfig_ = keywordConfig;
  setParameter(std::string("KeywordConfig"), keywordConfig);
}

std::string UpdateSmarttagTemplateRequest::getLandmarkGroupIds() const {
  return landmarkGroupIds_;
}

void UpdateSmarttagTemplateRequest::setLandmarkGroupIds(const std::string &landmarkGroupIds) {
  landmarkGroupIds_ = landmarkGroupIds;
  setParameter(std::string("LandmarkGroupIds"), landmarkGroupIds);
}

std::string UpdateSmarttagTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateSmarttagTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateSmarttagTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateSmarttagTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpdateSmarttagTemplateRequest::getObjectGroupIds() const {
  return objectGroupIds_;
}

void UpdateSmarttagTemplateRequest::setObjectGroupIds(const std::string &objectGroupIds) {
  objectGroupIds_ = objectGroupIds;
  setParameter(std::string("ObjectGroupIds"), objectGroupIds);
}

long UpdateSmarttagTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateSmarttagTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateSmarttagTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateSmarttagTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string UpdateSmarttagTemplateRequest::getAnalyseTypes() const {
  return analyseTypes_;
}

void UpdateSmarttagTemplateRequest::setAnalyseTypes(const std::string &analyseTypes) {
  analyseTypes_ = analyseTypes;
  setParameter(std::string("AnalyseTypes"), analyseTypes);
}

std::string UpdateSmarttagTemplateRequest::getLabelType() const {
  return labelType_;
}

void UpdateSmarttagTemplateRequest::setLabelType(const std::string &labelType) {
  labelType_ = labelType;
  setParameter(std::string("LabelType"), labelType);
}

