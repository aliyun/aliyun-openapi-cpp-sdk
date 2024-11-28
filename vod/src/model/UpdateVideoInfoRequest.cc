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

#include <alibabacloud/vod/model/UpdateVideoInfoRequest.h>

using AlibabaCloud::Vod::Model::UpdateVideoInfoRequest;

UpdateVideoInfoRequest::UpdateVideoInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateVideoInfo") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVideoInfoRequest::~UpdateVideoInfoRequest() {}

std::string UpdateVideoInfoRequest::getDescription() const {
  return description_;
}

void UpdateVideoInfoRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateVideoInfoRequest::getTitle() const {
  return title_;
}

void UpdateVideoInfoRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string UpdateVideoInfoRequest::getCoverURL() const {
  return coverURL_;
}

void UpdateVideoInfoRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string UpdateVideoInfoRequest::getUserData() const {
  return userData_;
}

void UpdateVideoInfoRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string UpdateVideoInfoRequest::getDownloadSwitch() const {
  return downloadSwitch_;
}

void UpdateVideoInfoRequest::setDownloadSwitch(const std::string &downloadSwitch) {
  downloadSwitch_ = downloadSwitch;
  setParameter(std::string("DownloadSwitch"), downloadSwitch);
}

long UpdateVideoInfoRequest::getCateId() const {
  return cateId_;
}

void UpdateVideoInfoRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string UpdateVideoInfoRequest::getCustomMediaInfo() const {
  return customMediaInfo_;
}

void UpdateVideoInfoRequest::setCustomMediaInfo(const std::string &customMediaInfo) {
  customMediaInfo_ = customMediaInfo;
  setParameter(std::string("CustomMediaInfo"), customMediaInfo);
}

std::string UpdateVideoInfoRequest::getVideoId() const {
  return videoId_;
}

void UpdateVideoInfoRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string UpdateVideoInfoRequest::getTags() const {
  return tags_;
}

void UpdateVideoInfoRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateVideoInfoRequest::getStatus() const {
  return status_;
}

void UpdateVideoInfoRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

