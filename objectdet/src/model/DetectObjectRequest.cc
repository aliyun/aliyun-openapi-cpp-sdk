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

#include <alibabacloud/objectdet/model/DetectObjectRequest.h>

using AlibabaCloud::Objectdet::Model::DetectObjectRequest;

DetectObjectRequest::DetectObjectRequest()
    : RpcServiceRequest("objectdet", "2019-12-30", "DetectObject") {
  setMethod(HttpRequest::Method::Post);
}

DetectObjectRequest::~DetectObjectRequest() {}

bool DetectObjectRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectObjectRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DetectObjectRequest::getOssFile() const {
  return ossFile_;
}

void DetectObjectRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DetectObjectRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectObjectRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectObjectRequest::getImageURL() const {
  return imageURL_;
}

void DetectObjectRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

