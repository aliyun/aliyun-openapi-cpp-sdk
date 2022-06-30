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

#include <alibabacloud/facebody/model/FaceBeautyRequest.h>

using AlibabaCloud::Facebody::Model::FaceBeautyRequest;

FaceBeautyRequest::FaceBeautyRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "FaceBeauty") {
  setMethod(HttpRequest::Method::Post);
}

FaceBeautyRequest::~FaceBeautyRequest() {}

bool FaceBeautyRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void FaceBeautyRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

float FaceBeautyRequest::getWhite() const {
  return white_;
}

void FaceBeautyRequest::setWhite(float white) {
  white_ = white;
  setBodyParameter(std::string("White"), std::to_string(white));
}

std::string FaceBeautyRequest::getOssFile() const {
  return ossFile_;
}

void FaceBeautyRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

float FaceBeautyRequest::getSmooth() const {
  return smooth_;
}

void FaceBeautyRequest::setSmooth(float smooth) {
  smooth_ = smooth;
  setBodyParameter(std::string("Smooth"), std::to_string(smooth));
}

std::string FaceBeautyRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void FaceBeautyRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

float FaceBeautyRequest::getSharp() const {
  return sharp_;
}

void FaceBeautyRequest::setSharp(float sharp) {
  sharp_ = sharp;
  setBodyParameter(std::string("Sharp"), std::to_string(sharp));
}

std::string FaceBeautyRequest::getImageURL() const {
  return imageURL_;
}

void FaceBeautyRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

