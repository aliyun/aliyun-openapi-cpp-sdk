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

#include <alibabacloud/facebody/model/DetectCelebrityRequest.h>

using AlibabaCloud::Facebody::Model::DetectCelebrityRequest;

DetectCelebrityRequest::DetectCelebrityRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DetectCelebrity") {
  setMethod(HttpRequest::Method::Post);
}

DetectCelebrityRequest::~DetectCelebrityRequest() {}

bool DetectCelebrityRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectCelebrityRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DetectCelebrityRequest::getOssFile() const {
  return ossFile_;
}

void DetectCelebrityRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DetectCelebrityRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectCelebrityRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectCelebrityRequest::getImageURL() const {
  return imageURL_;
}

void DetectCelebrityRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

