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

#include <alibabacloud/objectdet/model/DetectVideoIPCObjectRequest.h>

using AlibabaCloud::Objectdet::Model::DetectVideoIPCObjectRequest;

DetectVideoIPCObjectRequest::DetectVideoIPCObjectRequest()
    : RpcServiceRequest("objectdet", "2019-12-30", "DetectVideoIPCObject") {
  setMethod(HttpRequest::Method::Post);
}

DetectVideoIPCObjectRequest::~DetectVideoIPCObjectRequest() {}

bool DetectVideoIPCObjectRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectVideoIPCObjectRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long DetectVideoIPCObjectRequest::getStartTimestamp() const {
  return startTimestamp_;
}

void DetectVideoIPCObjectRequest::setStartTimestamp(long startTimestamp) {
  startTimestamp_ = startTimestamp;
  setBodyParameter(std::string("StartTimestamp"), std::to_string(startTimestamp));
}

std::string DetectVideoIPCObjectRequest::getOssFile() const {
  return ossFile_;
}

void DetectVideoIPCObjectRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

bool DetectVideoIPCObjectRequest::getCallbackOnlyHasObject() const {
  return callbackOnlyHasObject_;
}

void DetectVideoIPCObjectRequest::setCallbackOnlyHasObject(bool callbackOnlyHasObject) {
  callbackOnlyHasObject_ = callbackOnlyHasObject;
  setBodyParameter(std::string("CallbackOnlyHasObject"), callbackOnlyHasObject ? "true" : "false");
}

std::string DetectVideoIPCObjectRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectVideoIPCObjectRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

bool DetectVideoIPCObjectRequest::getAsync() const {
  return async_;
}

void DetectVideoIPCObjectRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string DetectVideoIPCObjectRequest::getVideoURL() const {
  return videoURL_;
}

void DetectVideoIPCObjectRequest::setVideoURL(const std::string &videoURL) {
  videoURL_ = videoURL;
  setBodyParameter(std::string("VideoURL"), videoURL);
}

