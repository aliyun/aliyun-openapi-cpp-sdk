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

#include <alibabacloud/facebody/model/DetectIPCPedestrianRequest.h>

using AlibabaCloud::Facebody::Model::DetectIPCPedestrianRequest;

DetectIPCPedestrianRequest::DetectIPCPedestrianRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "DetectIPCPedestrian") {
  setMethod(HttpRequest::Method::Post);
}

DetectIPCPedestrianRequest::~DetectIPCPedestrianRequest() {}

bool DetectIPCPedestrianRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectIPCPedestrianRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

bool DetectIPCPedestrianRequest::getContinueOnError() const {
  return continueOnError_;
}

void DetectIPCPedestrianRequest::setContinueOnError(bool continueOnError) {
  continueOnError_ = continueOnError;
  setBodyParameter(std::string("ContinueOnError"), continueOnError ? "true" : "false");
}

std::string DetectIPCPedestrianRequest::getOssFile() const {
  return ossFile_;
}

void DetectIPCPedestrianRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

int DetectIPCPedestrianRequest::getHeight() const {
  return height_;
}

void DetectIPCPedestrianRequest::setHeight(int height) {
  height_ = height;
  setBodyParameter(std::string("Height"), std::to_string(height));
}

std::string DetectIPCPedestrianRequest::getImageData() const {
  return imageData_;
}

void DetectIPCPedestrianRequest::setImageData(const std::string &imageData) {
  imageData_ = imageData;
  setBodyParameter(std::string("ImageData"), imageData);
}

std::string DetectIPCPedestrianRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectIPCPedestrianRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectIPCPedestrianRequest::getDataId() const {
  return dataId_;
}

void DetectIPCPedestrianRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setBodyParameter(std::string("DataId"), dataId);
}

std::string DetectIPCPedestrianRequest::getImageURL() const {
  return imageURL_;
}

void DetectIPCPedestrianRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

int DetectIPCPedestrianRequest::getWidth() const {
  return width_;
}

void DetectIPCPedestrianRequest::setWidth(int width) {
  width_ = width;
  setBodyParameter(std::string("Width"), std::to_string(width));
}

