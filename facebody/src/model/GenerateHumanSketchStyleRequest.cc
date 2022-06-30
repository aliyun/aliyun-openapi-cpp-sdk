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

#include <alibabacloud/facebody/model/GenerateHumanSketchStyleRequest.h>

using AlibabaCloud::Facebody::Model::GenerateHumanSketchStyleRequest;

GenerateHumanSketchStyleRequest::GenerateHumanSketchStyleRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "GenerateHumanSketchStyle") {
  setMethod(HttpRequest::Method::Post);
}

GenerateHumanSketchStyleRequest::~GenerateHumanSketchStyleRequest() {}

bool GenerateHumanSketchStyleRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void GenerateHumanSketchStyleRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string GenerateHumanSketchStyleRequest::getOssFile() const {
  return ossFile_;
}

void GenerateHumanSketchStyleRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string GenerateHumanSketchStyleRequest::getReturnType() const {
  return returnType_;
}

void GenerateHumanSketchStyleRequest::setReturnType(const std::string &returnType) {
  returnType_ = returnType;
  setBodyParameter(std::string("ReturnType"), returnType);
}

std::string GenerateHumanSketchStyleRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void GenerateHumanSketchStyleRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string GenerateHumanSketchStyleRequest::getImageURL() const {
  return imageURL_;
}

void GenerateHumanSketchStyleRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

