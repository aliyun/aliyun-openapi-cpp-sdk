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

#include <alibabacloud/mts/model/SubmitFpFileDeleteJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitFpFileDeleteJobRequest;

SubmitFpFileDeleteJobRequest::SubmitFpFileDeleteJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitFpFileDeleteJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitFpFileDeleteJobRequest::~SubmitFpFileDeleteJobRequest() {}

long SubmitFpFileDeleteJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitFpFileDeleteJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitFpFileDeleteJobRequest::getFpDBId() const {
  return fpDBId_;
}

void SubmitFpFileDeleteJobRequest::setFpDBId(const std::string &fpDBId) {
  fpDBId_ = fpDBId;
  setParameter(std::string("FpDBId"), fpDBId);
}

std::string SubmitFpFileDeleteJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitFpFileDeleteJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitFpFileDeleteJobRequest::getUserData() const {
  return userData_;
}

void SubmitFpFileDeleteJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitFpFileDeleteJobRequest::getPrimaryKeys() const {
  return primaryKeys_;
}

void SubmitFpFileDeleteJobRequest::setPrimaryKeys(const std::string &primaryKeys) {
  primaryKeys_ = primaryKeys;
  setParameter(std::string("PrimaryKeys"), primaryKeys);
}

std::string SubmitFpFileDeleteJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitFpFileDeleteJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitFpFileDeleteJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitFpFileDeleteJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitFpFileDeleteJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitFpFileDeleteJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitFpFileDeleteJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitFpFileDeleteJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitFpFileDeleteJobRequest::getFileIds() const {
  return fileIds_;
}

void SubmitFpFileDeleteJobRequest::setFileIds(const std::string &fileIds) {
  fileIds_ = fileIds;
  setParameter(std::string("FileIds"), fileIds);
}

