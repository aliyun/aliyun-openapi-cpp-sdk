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

#include <alibabacloud/vod/model/GetMezzanineInfoRequest.h>

using AlibabaCloud::Vod::Model::GetMezzanineInfoRequest;

GetMezzanineInfoRequest::GetMezzanineInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetMezzanineInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetMezzanineInfoRequest::~GetMezzanineInfoRequest() {}

std::string GetMezzanineInfoRequest::getOutputType() const {
  return outputType_;
}

void GetMezzanineInfoRequest::setOutputType(const std::string &outputType) {
  outputType_ = outputType;
  setParameter(std::string("OutputType"), outputType);
}

long GetMezzanineInfoRequest::getAuthTimeout() const {
  return authTimeout_;
}

void GetMezzanineInfoRequest::setAuthTimeout(long authTimeout) {
  authTimeout_ = authTimeout;
  setParameter(std::string("AuthTimeout"), std::to_string(authTimeout));
}

std::string GetMezzanineInfoRequest::getVideoId() const {
  return videoId_;
}

void GetMezzanineInfoRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

bool GetMezzanineInfoRequest::getPreviewSegment() const {
  return previewSegment_;
}

void GetMezzanineInfoRequest::setPreviewSegment(bool previewSegment) {
  previewSegment_ = previewSegment;
  setParameter(std::string("PreviewSegment"), previewSegment ? "true" : "false");
}

std::string GetMezzanineInfoRequest::getAdditionType() const {
  return additionType_;
}

void GetMezzanineInfoRequest::setAdditionType(const std::string &additionType) {
  additionType_ = additionType;
  setParameter(std::string("AdditionType"), additionType);
}

