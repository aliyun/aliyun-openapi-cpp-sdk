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

#include <alibabacloud/vod/model/GetImageInfoRequest.h>

using AlibabaCloud::Vod::Model::GetImageInfoRequest;

GetImageInfoRequest::GetImageInfoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetImageInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetImageInfoRequest::~GetImageInfoRequest() {}

std::string GetImageInfoRequest::getImageId() const {
  return imageId_;
}

void GetImageInfoRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string GetImageInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetImageInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetImageInfoRequest::getOutputType() const {
  return outputType_;
}

void GetImageInfoRequest::setOutputType(const std::string &outputType) {
  outputType_ = outputType;
  setParameter(std::string("OutputType"), outputType);
}

long GetImageInfoRequest::getAuthTimeout() const {
  return authTimeout_;
}

void GetImageInfoRequest::setAuthTimeout(long authTimeout) {
  authTimeout_ = authTimeout;
  setParameter(std::string("AuthTimeout"), std::to_string(authTimeout));
}

