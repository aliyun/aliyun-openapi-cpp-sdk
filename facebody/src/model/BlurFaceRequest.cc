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

#include <alibabacloud/facebody/model/BlurFaceRequest.h>

using AlibabaCloud::Facebody::Model::BlurFaceRequest;

BlurFaceRequest::BlurFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "BlurFace") {
  setMethod(HttpRequest::Method::Post);
}

BlurFaceRequest::~BlurFaceRequest() {}

bool BlurFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void BlurFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string BlurFaceRequest::getOssFile() const {
  return ossFile_;
}

void BlurFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string BlurFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void BlurFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string BlurFaceRequest::getImageURL() const {
  return imageURL_;
}

void BlurFaceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

