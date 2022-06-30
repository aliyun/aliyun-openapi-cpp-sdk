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

#include <alibabacloud/facebody/model/SwapFacialFeaturesRequest.h>

using AlibabaCloud::Facebody::Model::SwapFacialFeaturesRequest;

SwapFacialFeaturesRequest::SwapFacialFeaturesRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "SwapFacialFeatures") {
  setMethod(HttpRequest::Method::Post);
}

SwapFacialFeaturesRequest::~SwapFacialFeaturesRequest() {}

std::string SwapFacialFeaturesRequest::getTargetImageURL() const {
  return targetImageURL_;
}

void SwapFacialFeaturesRequest::setTargetImageURL(const std::string &targetImageURL) {
  targetImageURL_ = targetImageURL;
  setBodyParameter(std::string("TargetImageURL"), targetImageURL);
}

bool SwapFacialFeaturesRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void SwapFacialFeaturesRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string SwapFacialFeaturesRequest::getSourceImageData() const {
  return sourceImageData_;
}

void SwapFacialFeaturesRequest::setSourceImageData(const std::string &sourceImageData) {
  sourceImageData_ = sourceImageData;
  setBodyParameter(std::string("SourceImageData"), sourceImageData);
}

std::string SwapFacialFeaturesRequest::getOssFile() const {
  return ossFile_;
}

void SwapFacialFeaturesRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string SwapFacialFeaturesRequest::getSourceImageURL() const {
  return sourceImageURL_;
}

void SwapFacialFeaturesRequest::setSourceImageURL(const std::string &sourceImageURL) {
  sourceImageURL_ = sourceImageURL;
  setBodyParameter(std::string("SourceImageURL"), sourceImageURL);
}

std::string SwapFacialFeaturesRequest::getTargetImageData() const {
  return targetImageData_;
}

void SwapFacialFeaturesRequest::setTargetImageData(const std::string &targetImageData) {
  targetImageData_ = targetImageData;
  setBodyParameter(std::string("TargetImageData"), targetImageData);
}

std::string SwapFacialFeaturesRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SwapFacialFeaturesRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string SwapFacialFeaturesRequest::getEditPart() const {
  return editPart_;
}

void SwapFacialFeaturesRequest::setEditPart(const std::string &editPart) {
  editPart_ = editPart;
  setBodyParameter(std::string("EditPart"), editPart);
}

