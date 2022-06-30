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

#include <alibabacloud/facebody/model/CountCrowdRequest.h>

using AlibabaCloud::Facebody::Model::CountCrowdRequest;

CountCrowdRequest::CountCrowdRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "CountCrowd") {
  setMethod(HttpRequest::Method::Post);
}

CountCrowdRequest::~CountCrowdRequest() {}

bool CountCrowdRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void CountCrowdRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

bool CountCrowdRequest::getIsShow() const {
  return isShow_;
}

void CountCrowdRequest::setIsShow(bool isShow) {
  isShow_ = isShow;
  setBodyParameter(std::string("IsShow"), isShow ? "true" : "false");
}

std::string CountCrowdRequest::getOssFile() const {
  return ossFile_;
}

void CountCrowdRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string CountCrowdRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void CountCrowdRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string CountCrowdRequest::getImageURL() const {
  return imageURL_;
}

void CountCrowdRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

