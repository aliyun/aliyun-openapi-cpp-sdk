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

#include <alibabacloud/vod/model/UpdateEditingProjectRequest.h>

using AlibabaCloud::Vod::Model::UpdateEditingProjectRequest;

UpdateEditingProjectRequest::UpdateEditingProjectRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEditingProjectRequest::~UpdateEditingProjectRequest() {}

std::string UpdateEditingProjectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateEditingProjectRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string UpdateEditingProjectRequest::getDescription() const {
  return description_;
}

void UpdateEditingProjectRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateEditingProjectRequest::getTitle() const {
  return title_;
}

void UpdateEditingProjectRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string UpdateEditingProjectRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateEditingProjectRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateEditingProjectRequest::getCoverURL() const {
  return coverURL_;
}

void UpdateEditingProjectRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

float UpdateEditingProjectRequest::getDuration() const {
  return duration_;
}

void UpdateEditingProjectRequest::setDuration(float duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string UpdateEditingProjectRequest::getProjectId() const {
  return projectId_;
}

void UpdateEditingProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string UpdateEditingProjectRequest::getFEExtend() const {
  return fEExtend_;
}

void UpdateEditingProjectRequest::setFEExtend(const std::string &fEExtend) {
  fEExtend_ = fEExtend;
  setParameter(std::string("FEExtend"), fEExtend);
}

std::string UpdateEditingProjectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateEditingProjectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateEditingProjectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateEditingProjectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpdateEditingProjectRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateEditingProjectRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string UpdateEditingProjectRequest::getTimeline() const {
  return timeline_;
}

void UpdateEditingProjectRequest::setTimeline(const std::string &timeline) {
  timeline_ = timeline;
  setParameter(std::string("Timeline"), timeline);
}

