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

#include <alibabacloud/facebody/model/EnhanceFaceRequest.h>

using AlibabaCloud::Facebody::Model::EnhanceFaceRequest;

EnhanceFaceRequest::EnhanceFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "EnhanceFace") {
  setMethod(HttpRequest::Method::Post);
}

EnhanceFaceRequest::~EnhanceFaceRequest() {}

bool EnhanceFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void EnhanceFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string EnhanceFaceRequest::getOssFile() const {
  return ossFile_;
}

void EnhanceFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string EnhanceFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void EnhanceFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string EnhanceFaceRequest::getImageURL() const {
  return imageURL_;
}

void EnhanceFaceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

