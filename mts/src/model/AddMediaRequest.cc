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

#include <alibabacloud/mts/model/AddMediaRequest.h>

using AlibabaCloud::Mts::Model::AddMediaRequest;

AddMediaRequest::AddMediaRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddMedia") {
  setMethod(HttpRequest::Method::Post);
}

AddMediaRequest::~AddMediaRequest() {}

long AddMediaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddMediaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddMediaRequest::getDescription() const {
  return description_;
}

void AddMediaRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddMediaRequest::getTitle() const {
  return title_;
}

void AddMediaRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

bool AddMediaRequest::getInputUnbind() const {
  return inputUnbind_;
}

void AddMediaRequest::setInputUnbind(bool inputUnbind) {
  inputUnbind_ = inputUnbind;
  setParameter(std::string("InputUnbind"), inputUnbind ? "true" : "false");
}

std::string AddMediaRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddMediaRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddMediaRequest::getCoverURL() const {
  return coverURL_;
}

void AddMediaRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

long AddMediaRequest::getCateId() const {
  return cateId_;
}

void AddMediaRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string AddMediaRequest::getMediaWorkflowId() const {
  return mediaWorkflowId_;
}

void AddMediaRequest::setMediaWorkflowId(const std::string &mediaWorkflowId) {
  mediaWorkflowId_ = mediaWorkflowId;
  setParameter(std::string("MediaWorkflowId"), mediaWorkflowId);
}

std::string AddMediaRequest::getMediaWorkflowUserData() const {
  return mediaWorkflowUserData_;
}

void AddMediaRequest::setMediaWorkflowUserData(const std::string &mediaWorkflowUserData) {
  mediaWorkflowUserData_ = mediaWorkflowUserData;
  setParameter(std::string("MediaWorkflowUserData"), mediaWorkflowUserData);
}

std::string AddMediaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddMediaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddMediaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddMediaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddMediaRequest::getOverrideParams() const {
  return overrideParams_;
}

void AddMediaRequest::setOverrideParams(const std::string &overrideParams) {
  overrideParams_ = overrideParams;
  setParameter(std::string("OverrideParams"), overrideParams);
}

long AddMediaRequest::getOwnerId() const {
  return ownerId_;
}

void AddMediaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddMediaRequest::getTags() const {
  return tags_;
}

void AddMediaRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string AddMediaRequest::getFileURL() const {
  return fileURL_;
}

void AddMediaRequest::setFileURL(const std::string &fileURL) {
  fileURL_ = fileURL;
  setParameter(std::string("FileURL"), fileURL);
}

