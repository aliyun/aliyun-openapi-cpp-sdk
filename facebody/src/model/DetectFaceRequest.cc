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

#include <alibabacloud/facebody/model/DetectFaceRequest.h>

using AlibabaCloud::Facebody::Model::DetectFaceRequest;

DetectFaceRequest::DetectFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DetectFace") {
  setMethod(HttpRequest::Method::Post);
}

DetectFaceRequest::~DetectFaceRequest() {}

long DetectFaceRequest::getMaxFaceNumber() const {
  return maxFaceNumber_;
}

void DetectFaceRequest::setMaxFaceNumber(long maxFaceNumber) {
  maxFaceNumber_ = maxFaceNumber;
  setBodyParameter(std::string("MaxFaceNumber"), std::to_string(maxFaceNumber));
}

bool DetectFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

bool DetectFaceRequest::getLandmark() const {
  return landmark_;
}

void DetectFaceRequest::setLandmark(bool landmark) {
  landmark_ = landmark;
  setBodyParameter(std::string("Landmark"), landmark ? "true" : "false");
}

std::string DetectFaceRequest::getOssFile() const {
  return ossFile_;
}

void DetectFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

int DetectFaceRequest::getImageType() const {
  return imageType_;
}

void DetectFaceRequest::setImageType(int imageType) {
  imageType_ = imageType;
  setBodyParameter(std::string("ImageType"), std::to_string(imageType));
}

bool DetectFaceRequest::getPose() const {
  return pose_;
}

void DetectFaceRequest::setPose(bool pose) {
  pose_ = pose;
  setBodyParameter(std::string("Pose"), pose ? "true" : "false");
}

std::string DetectFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

bool DetectFaceRequest::getQuality() const {
  return quality_;
}

void DetectFaceRequest::setQuality(bool quality) {
  quality_ = quality;
  setBodyParameter(std::string("Quality"), quality ? "true" : "false");
}

std::string DetectFaceRequest::getImageURL() const {
  return imageURL_;
}

void DetectFaceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

