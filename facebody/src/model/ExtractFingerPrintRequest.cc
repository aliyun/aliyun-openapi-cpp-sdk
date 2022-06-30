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

#include <alibabacloud/facebody/model/ExtractFingerPrintRequest.h>

using AlibabaCloud::Facebody::Model::ExtractFingerPrintRequest;

ExtractFingerPrintRequest::ExtractFingerPrintRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "ExtractFingerPrint") {
  setMethod(HttpRequest::Method::Post);
}

ExtractFingerPrintRequest::~ExtractFingerPrintRequest() {}

bool ExtractFingerPrintRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void ExtractFingerPrintRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string ExtractFingerPrintRequest::getOssFile() const {
  return ossFile_;
}

void ExtractFingerPrintRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string ExtractFingerPrintRequest::getImageData() const {
  return imageData_;
}

void ExtractFingerPrintRequest::setImageData(const std::string &imageData) {
  imageData_ = imageData;
  setBodyParameter(std::string("ImageData"), imageData);
}

std::string ExtractFingerPrintRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ExtractFingerPrintRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string ExtractFingerPrintRequest::getImageURL() const {
  return imageURL_;
}

void ExtractFingerPrintRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

