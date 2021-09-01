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

#include <alibabacloud/mts/model/SubmitFpDBDeleteJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitFpDBDeleteJobRequest;

SubmitFpDBDeleteJobRequest::SubmitFpDBDeleteJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitFpDBDeleteJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitFpDBDeleteJobRequest::~SubmitFpDBDeleteJobRequest() {}

long SubmitFpDBDeleteJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitFpDBDeleteJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitFpDBDeleteJobRequest::getFpDBId() const {
  return fpDBId_;
}

void SubmitFpDBDeleteJobRequest::setFpDBId(const std::string &fpDBId) {
  fpDBId_ = fpDBId;
  setParameter(std::string("FpDBId"), fpDBId);
}

std::string SubmitFpDBDeleteJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitFpDBDeleteJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitFpDBDeleteJobRequest::getUserData() const {
  return userData_;
}

void SubmitFpDBDeleteJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitFpDBDeleteJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitFpDBDeleteJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitFpDBDeleteJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitFpDBDeleteJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitFpDBDeleteJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitFpDBDeleteJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitFpDBDeleteJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitFpDBDeleteJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitFpDBDeleteJobRequest::getDelType() const {
  return delType_;
}

void SubmitFpDBDeleteJobRequest::setDelType(const std::string &delType) {
  delType_ = delType;
  setParameter(std::string("DelType"), delType);
}

