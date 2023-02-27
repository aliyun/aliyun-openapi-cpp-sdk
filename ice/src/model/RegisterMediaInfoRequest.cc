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

#include <alibabacloud/ice/model/RegisterMediaInfoRequest.h>

using AlibabaCloud::ICE::Model::RegisterMediaInfoRequest;

RegisterMediaInfoRequest::RegisterMediaInfoRequest()
    : RpcServiceRequest("ice", "2020-11-09", "RegisterMediaInfo") {
  setMethod(HttpRequest::Method::Post);
}

RegisterMediaInfoRequest::~RegisterMediaInfoRequest() {}

std::string RegisterMediaInfoRequest::getClientToken() const {
  return clientToken_;
}

void RegisterMediaInfoRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RegisterMediaInfoRequest::getDescription() const {
  return description_;
}

void RegisterMediaInfoRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string RegisterMediaInfoRequest::getEntityId() const {
  return entityId_;
}

void RegisterMediaInfoRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setParameter(std::string("EntityId"), entityId);
}

std::string RegisterMediaInfoRequest::getTitle() const {
  return title_;
}

void RegisterMediaInfoRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string RegisterMediaInfoRequest::getBusinessType() const {
  return businessType_;
}

void RegisterMediaInfoRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

std::string RegisterMediaInfoRequest::getCoverURL() const {
  return coverURL_;
}

void RegisterMediaInfoRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string RegisterMediaInfoRequest::getUserData() const {
  return userData_;
}

void RegisterMediaInfoRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string RegisterMediaInfoRequest::getBiz() const {
  return biz_;
}

void RegisterMediaInfoRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

long RegisterMediaInfoRequest::getCateId() const {
  return cateId_;
}

void RegisterMediaInfoRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string RegisterMediaInfoRequest::getDynamicMetaDataList() const {
  return dynamicMetaDataList_;
}

void RegisterMediaInfoRequest::setDynamicMetaDataList(const std::string &dynamicMetaDataList) {
  dynamicMetaDataList_ = dynamicMetaDataList;
  setParameter(std::string("DynamicMetaDataList"), dynamicMetaDataList);
}

bool RegisterMediaInfoRequest::getOverwrite() const {
  return overwrite_;
}

void RegisterMediaInfoRequest::setOverwrite(bool overwrite) {
  overwrite_ = overwrite;
  setParameter(std::string("Overwrite"), overwrite ? "true" : "false");
}

std::string RegisterMediaInfoRequest::getMediaTags() const {
  return mediaTags_;
}

void RegisterMediaInfoRequest::setMediaTags(const std::string &mediaTags) {
  mediaTags_ = mediaTags;
  setParameter(std::string("MediaTags"), mediaTags);
}

std::string RegisterMediaInfoRequest::getWorkflowId() const {
  return workflowId_;
}

void RegisterMediaInfoRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), workflowId);
}

std::string RegisterMediaInfoRequest::getDynamicMetaData() const {
  return dynamicMetaData_;
}

void RegisterMediaInfoRequest::setDynamicMetaData(const std::string &dynamicMetaData) {
  dynamicMetaData_ = dynamicMetaData;
  setParameter(std::string("DynamicMetaData"), dynamicMetaData);
}

std::string RegisterMediaInfoRequest::getUploadSource() const {
  return uploadSource_;
}

void RegisterMediaInfoRequest::setUploadSource(const std::string &uploadSource) {
  uploadSource_ = uploadSource;
  setParameter(std::string("UploadSource"), uploadSource);
}

std::string RegisterMediaInfoRequest::getInputURL() const {
  return inputURL_;
}

void RegisterMediaInfoRequest::setInputURL(const std::string &inputURL) {
  inputURL_ = inputURL;
  setParameter(std::string("InputURL"), inputURL);
}

std::string RegisterMediaInfoRequest::getReferenceId() const {
  return referenceId_;
}

void RegisterMediaInfoRequest::setReferenceId(const std::string &referenceId) {
  referenceId_ = referenceId;
  setParameter(std::string("ReferenceId"), referenceId);
}

std::string RegisterMediaInfoRequest::getAppId() const {
  return appId_;
}

void RegisterMediaInfoRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string RegisterMediaInfoRequest::getCategory() const {
  return category_;
}

void RegisterMediaInfoRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string RegisterMediaInfoRequest::getMediaType() const {
  return mediaType_;
}

void RegisterMediaInfoRequest::setMediaType(const std::string &mediaType) {
  mediaType_ = mediaType;
  setParameter(std::string("MediaType"), mediaType);
}

std::string RegisterMediaInfoRequest::getRegisterConfig() const {
  return registerConfig_;
}

void RegisterMediaInfoRequest::setRegisterConfig(const std::string &registerConfig) {
  registerConfig_ = registerConfig;
  setParameter(std::string("RegisterConfig"), registerConfig);
}

