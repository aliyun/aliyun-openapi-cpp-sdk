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

#include <alibabacloud/vod/model/SubmitAIImageAuditJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIImageAuditJobRequest;

SubmitAIImageAuditJobRequest::SubmitAIImageAuditJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitAIImageAuditJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAIImageAuditJobRequest::~SubmitAIImageAuditJobRequest() {}

std::string SubmitAIImageAuditJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitAIImageAuditJobRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string SubmitAIImageAuditJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitAIImageAuditJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitAIImageAuditJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitAIImageAuditJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitAIImageAuditJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitAIImageAuditJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SubmitAIImageAuditJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitAIImageAuditJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SubmitAIImageAuditJobRequest::getMediaId() const {
  return mediaId_;
}

void SubmitAIImageAuditJobRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string SubmitAIImageAuditJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitAIImageAuditJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string SubmitAIImageAuditJobRequest::getMediaAuditConfiguration() const {
  return mediaAuditConfiguration_;
}

void SubmitAIImageAuditJobRequest::setMediaAuditConfiguration(const std::string &mediaAuditConfiguration) {
  mediaAuditConfiguration_ = mediaAuditConfiguration;
  setParameter(std::string("MediaAuditConfiguration"), mediaAuditConfiguration);
}

