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

#include <alibabacloud/vod/model/SubmitSnapshotJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitSnapshotJobRequest;

SubmitSnapshotJobRequest::SubmitSnapshotJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitSnapshotJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSnapshotJobRequest::~SubmitSnapshotJobRequest() {}

std::string SubmitSnapshotJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitSnapshotJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitSnapshotJobRequest::getUserData() const {
  return userData_;
}

void SubmitSnapshotJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long SubmitSnapshotJobRequest::getSpecifiedOffsetTime() const {
  return specifiedOffsetTime_;
}

void SubmitSnapshotJobRequest::setSpecifiedOffsetTime(long specifiedOffsetTime) {
  specifiedOffsetTime_ = specifiedOffsetTime;
  setParameter(std::string("SpecifiedOffsetTime"), std::to_string(specifiedOffsetTime));
}

std::string SubmitSnapshotJobRequest::getSpriteSnapshotConfig() const {
  return spriteSnapshotConfig_;
}

void SubmitSnapshotJobRequest::setSpriteSnapshotConfig(const std::string &spriteSnapshotConfig) {
  spriteSnapshotConfig_ = spriteSnapshotConfig;
  setParameter(std::string("SpriteSnapshotConfig"), spriteSnapshotConfig);
}

std::vector<SubmitSnapshotJobRequest::long> SubmitSnapshotJobRequest::getSpecifiedOffsetTimes() const {
  return specifiedOffsetTimes_;
}

void SubmitSnapshotJobRequest::setSpecifiedOffsetTimes(const std::vector<SubmitSnapshotJobRequest::long> &specifiedOffsetTimes) {
  specifiedOffsetTimes_ = specifiedOffsetTimes;
  for(int dep1 = 0; dep1 != specifiedOffsetTimes.size(); dep1++) {
    setParameter(std::string("SpecifiedOffsetTimes") + "." + std::to_string(dep1 + 1), std::to_string(specifiedOffsetTimes[dep1]));
  }
}

std::string SubmitSnapshotJobRequest::getSnapshotTemplateId() const {
  return snapshotTemplateId_;
}

void SubmitSnapshotJobRequest::setSnapshotTemplateId(const std::string &snapshotTemplateId) {
  snapshotTemplateId_ = snapshotTemplateId;
  setParameter(std::string("SnapshotTemplateId"), snapshotTemplateId);
}

std::string SubmitSnapshotJobRequest::getHeight() const {
  return height_;
}

void SubmitSnapshotJobRequest::setHeight(const std::string &height) {
  height_ = height;
  setParameter(std::string("Height"), height);
}

long SubmitSnapshotJobRequest::getCount() const {
  return count_;
}

void SubmitSnapshotJobRequest::setCount(long count) {
  count_ = count;
  setParameter(std::string("Count"), std::to_string(count));
}

std::string SubmitSnapshotJobRequest::getVideoId() const {
  return videoId_;
}

void SubmitSnapshotJobRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string SubmitSnapshotJobRequest::getWidth() const {
  return width_;
}

void SubmitSnapshotJobRequest::setWidth(const std::string &width) {
  width_ = width;
  setParameter(std::string("Width"), width);
}

std::string SubmitSnapshotJobRequest::getFileUrl() const {
  return fileUrl_;
}

void SubmitSnapshotJobRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setParameter(std::string("FileUrl"), fileUrl);
}

long SubmitSnapshotJobRequest::getInterval() const {
  return interval_;
}

void SubmitSnapshotJobRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

