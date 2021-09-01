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

#include <alibabacloud/mts/model/SubmitFpCompareJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitFpCompareJobRequest;

SubmitFpCompareJobRequest::SubmitFpCompareJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitFpCompareJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitFpCompareJobRequest::~SubmitFpCompareJobRequest() {}

long SubmitFpCompareJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitFpCompareJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitFpCompareJobRequest::getFpDBId() const {
  return fpDBId_;
}

void SubmitFpCompareJobRequest::setFpDBId(const std::string &fpDBId) {
  fpDBId_ = fpDBId;
  setParameter(std::string("FpDBId"), fpDBId);
}

std::string SubmitFpCompareJobRequest::getMasterMedia() const {
  return masterMedia_;
}

void SubmitFpCompareJobRequest::setMasterMedia(const std::string &masterMedia) {
  masterMedia_ = masterMedia;
  setParameter(std::string("MasterMedia"), masterMedia);
}

std::string SubmitFpCompareJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitFpCompareJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitFpCompareJobRequest::getUserData() const {
  return userData_;
}

void SubmitFpCompareJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitFpCompareJobRequest::getQueryMedia() const {
  return queryMedia_;
}

void SubmitFpCompareJobRequest::setQueryMedia(const std::string &queryMedia) {
  queryMedia_ = queryMedia;
  setParameter(std::string("QueryMedia"), queryMedia);
}

std::string SubmitFpCompareJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitFpCompareJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitFpCompareJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitFpCompareJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitFpCompareJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitFpCompareJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitFpCompareJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitFpCompareJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitFpCompareJobRequest::getMatchedFrameStorage() const {
  return matchedFrameStorage_;
}

void SubmitFpCompareJobRequest::setMatchedFrameStorage(const std::string &matchedFrameStorage) {
  matchedFrameStorage_ = matchedFrameStorage;
  setParameter(std::string("MatchedFrameStorage"), matchedFrameStorage);
}

