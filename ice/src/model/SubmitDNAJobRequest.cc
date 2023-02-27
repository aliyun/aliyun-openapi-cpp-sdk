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

#include <alibabacloud/ice/model/SubmitDNAJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitDNAJobRequest;

SubmitDNAJobRequest::SubmitDNAJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitDNAJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitDNAJobRequest::~SubmitDNAJobRequest() {}

long SubmitDNAJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitDNAJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitDNAJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitDNAJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitDNAJobRequest::getUserData() const {
  return userData_;
}

void SubmitDNAJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitDNAJobRequest::getPrimaryKey() const {
  return primaryKey_;
}

void SubmitDNAJobRequest::setPrimaryKey(const std::string &primaryKey) {
  primaryKey_ = primaryKey;
  setParameter(std::string("PrimaryKey"), primaryKey);
}

std::string SubmitDNAJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitDNAJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitDNAJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitDNAJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitDNAJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitDNAJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitDNAJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitDNAJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string SubmitDNAJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitDNAJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

SubmitDNAJobRequest::Input SubmitDNAJobRequest::getInput() const {
  return input_;
}

void SubmitDNAJobRequest::setInput(const SubmitDNAJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitDNAJobRequest::getDBId() const {
  return dBId_;
}

void SubmitDNAJobRequest::setDBId(const std::string &dBId) {
  dBId_ = dBId;
  setParameter(std::string("DBId"), dBId);
}

std::string SubmitDNAJobRequest::getConfig() const {
  return config_;
}

void SubmitDNAJobRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

