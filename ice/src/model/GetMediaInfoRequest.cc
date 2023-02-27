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

#include <alibabacloud/ice/model/GetMediaInfoRequest.h>

using AlibabaCloud::ICE::Model::GetMediaInfoRequest;

GetMediaInfoRequest::GetMediaInfoRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetMediaInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetMediaInfoRequest::~GetMediaInfoRequest() {}

std::string GetMediaInfoRequest::getInputURL() const {
  return inputURL_;
}

void GetMediaInfoRequest::setInputURL(const std::string &inputURL) {
  inputURL_ = inputURL;
  setParameter(std::string("InputURL"), inputURL);
}

std::string GetMediaInfoRequest::getMediaId() const {
  return mediaId_;
}

void GetMediaInfoRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string GetMediaInfoRequest::getOutputType() const {
  return outputType_;
}

void GetMediaInfoRequest::setOutputType(const std::string &outputType) {
  outputType_ = outputType;
  setParameter(std::string("OutputType"), outputType);
}

