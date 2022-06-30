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

#include <alibabacloud/facebody/model/LiquifyFaceRequest.h>

using AlibabaCloud::Facebody::Model::LiquifyFaceRequest;

LiquifyFaceRequest::LiquifyFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "LiquifyFace") {
  setMethod(HttpRequest::Method::Post);
}

LiquifyFaceRequest::~LiquifyFaceRequest() {}

bool LiquifyFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void LiquifyFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string LiquifyFaceRequest::getOssFile() const {
  return ossFile_;
}

void LiquifyFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

float LiquifyFaceRequest::getSlimDegree() const {
  return slimDegree_;
}

void LiquifyFaceRequest::setSlimDegree(float slimDegree) {
  slimDegree_ = slimDegree;
  setBodyParameter(std::string("SlimDegree"), std::to_string(slimDegree));
}

std::string LiquifyFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void LiquifyFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string LiquifyFaceRequest::getImageURL() const {
  return imageURL_;
}

void LiquifyFaceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

