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

#include <alibabacloud/vod/model/AddEditingProjectRequest.h>

using AlibabaCloud::Vod::Model::AddEditingProjectRequest;

AddEditingProjectRequest::AddEditingProjectRequest()
    : RpcServiceRequest("vod", "2017-03-21", "AddEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

AddEditingProjectRequest::~AddEditingProjectRequest() {}

std::string AddEditingProjectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddEditingProjectRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string AddEditingProjectRequest::getDescription() const {
  return description_;
}

void AddEditingProjectRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddEditingProjectRequest::getTitle() const {
  return title_;
}

void AddEditingProjectRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string AddEditingProjectRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddEditingProjectRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddEditingProjectRequest::getCoverURL() const {
  return coverURL_;
}

void AddEditingProjectRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string AddEditingProjectRequest::getDivision() const {
  return division_;
}

void AddEditingProjectRequest::setDivision(const std::string &division) {
  division_ = division;
  setParameter(std::string("Division"), division);
}

float AddEditingProjectRequest::getDuration() const {
  return duration_;
}

void AddEditingProjectRequest::setDuration(float duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string AddEditingProjectRequest::getFEExtend() const {
  return fEExtend_;
}

void AddEditingProjectRequest::setFEExtend(const std::string &fEExtend) {
  fEExtend_ = fEExtend;
  setParameter(std::string("FEExtend"), fEExtend);
}

std::string AddEditingProjectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddEditingProjectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddEditingProjectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddEditingProjectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddEditingProjectRequest::getOwnerId() const {
  return ownerId_;
}

void AddEditingProjectRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string AddEditingProjectRequest::getTimeline() const {
  return timeline_;
}

void AddEditingProjectRequest::setTimeline(const std::string &timeline) {
  timeline_ = timeline;
  setParameter(std::string("Timeline"), timeline);
}

