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

#include <alibabacloud/objectdet/model/DetectTransparentImageRequest.h>

using AlibabaCloud::Objectdet::Model::DetectTransparentImageRequest;

DetectTransparentImageRequest::DetectTransparentImageRequest()
    : RpcServiceRequest("objectdet", "2019-12-30", "DetectTransparentImage") {
  setMethod(HttpRequest::Method::Post);
}

DetectTransparentImageRequest::~DetectTransparentImageRequest() {}

bool DetectTransparentImageRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectTransparentImageRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DetectTransparentImageRequest::getOssFile() const {
  return ossFile_;
}

void DetectTransparentImageRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DetectTransparentImageRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectTransparentImageRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectTransparentImageRequest::getImageURL() const {
  return imageURL_;
}

void DetectTransparentImageRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

