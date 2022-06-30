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

#include <alibabacloud/facebody/model/FaceFilterRequest.h>

using AlibabaCloud::Facebody::Model::FaceFilterRequest;

FaceFilterRequest::FaceFilterRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "FaceFilter") {
  setMethod(HttpRequest::Method::Post);
}

FaceFilterRequest::~FaceFilterRequest() {}

float FaceFilterRequest::getStrength() const {
  return strength_;
}

void FaceFilterRequest::setStrength(float strength) {
  strength_ = strength;
  setBodyParameter(std::string("Strength"), std::to_string(strength));
}

bool FaceFilterRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void FaceFilterRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string FaceFilterRequest::getOssFile() const {
  return ossFile_;
}

void FaceFilterRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string FaceFilterRequest::getResourceType() const {
  return resourceType_;
}

void FaceFilterRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setBodyParameter(std::string("ResourceType"), resourceType);
}

std::string FaceFilterRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void FaceFilterRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string FaceFilterRequest::getImageURL() const {
  return imageURL_;
}

void FaceFilterRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

