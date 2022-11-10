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

#include <alibabacloud/videoenhan/model/AdjustVideoColorRequest.h>

using AlibabaCloud::Videoenhan::Model::AdjustVideoColorRequest;

AdjustVideoColorRequest::AdjustVideoColorRequest()
    : RpcServiceRequest("videoenhan", "2020-03-20", "AdjustVideoColor") {
  setMethod(HttpRequest::Method::Post);
}

AdjustVideoColorRequest::~AdjustVideoColorRequest() {}

std::string AdjustVideoColorRequest::getMode() const {
  return mode_;
}

void AdjustVideoColorRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setBodyParameter(std::string("Mode"), mode);
}

bool AdjustVideoColorRequest::getAsync() const {
  return async_;
}

void AdjustVideoColorRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string AdjustVideoColorRequest::getVideoUrl() const {
  return videoUrl_;
}

void AdjustVideoColorRequest::setVideoUrl(const std::string &videoUrl) {
  videoUrl_ = videoUrl;
  setBodyParameter(std::string("VideoUrl"), videoUrl);
}

long AdjustVideoColorRequest::getVideoBitrate() const {
  return videoBitrate_;
}

void AdjustVideoColorRequest::setVideoBitrate(long videoBitrate) {
  videoBitrate_ = videoBitrate;
  setBodyParameter(std::string("VideoBitrate"), std::to_string(videoBitrate));
}

std::string AdjustVideoColorRequest::getVideoCodec() const {
  return videoCodec_;
}

void AdjustVideoColorRequest::setVideoCodec(const std::string &videoCodec) {
  videoCodec_ = videoCodec;
  setBodyParameter(std::string("VideoCodec"), videoCodec);
}

std::string AdjustVideoColorRequest::getVideoFormat() const {
  return videoFormat_;
}

void AdjustVideoColorRequest::setVideoFormat(const std::string &videoFormat) {
  videoFormat_ = videoFormat;
  setBodyParameter(std::string("VideoFormat"), videoFormat);
}

