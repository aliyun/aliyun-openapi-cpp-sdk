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

#include <alibabacloud/objectdet/model/DetectKitchenAnimalsRequest.h>

using AlibabaCloud::Objectdet::Model::DetectKitchenAnimalsRequest;

DetectKitchenAnimalsRequest::DetectKitchenAnimalsRequest()
    : RpcServiceRequest("objectdet", "2019-12-30", "DetectKitchenAnimals") {
  setMethod(HttpRequest::Method::Post);
}

DetectKitchenAnimalsRequest::~DetectKitchenAnimalsRequest() {}

bool DetectKitchenAnimalsRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectKitchenAnimalsRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DetectKitchenAnimalsRequest::getImageURLB() const {
  return imageURLB_;
}

void DetectKitchenAnimalsRequest::setImageURLB(const std::string &imageURLB) {
  imageURLB_ = imageURLB;
  setBodyParameter(std::string("ImageURLB"), imageURLB);
}

std::string DetectKitchenAnimalsRequest::getImageURLA() const {
  return imageURLA_;
}

void DetectKitchenAnimalsRequest::setImageURLA(const std::string &imageURLA) {
  imageURLA_ = imageURLA;
  setBodyParameter(std::string("ImageURLA"), imageURLA);
}

std::string DetectKitchenAnimalsRequest::getOssFile() const {
  return ossFile_;
}

void DetectKitchenAnimalsRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DetectKitchenAnimalsRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectKitchenAnimalsRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

