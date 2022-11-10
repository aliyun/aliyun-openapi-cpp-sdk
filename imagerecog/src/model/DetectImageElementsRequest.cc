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

#include <alibabacloud/imagerecog/model/DetectImageElementsRequest.h>

using AlibabaCloud::Imagerecog::Model::DetectImageElementsRequest;

DetectImageElementsRequest::DetectImageElementsRequest()
    : RpcServiceRequest("imagerecog", "2019-09-30", "DetectImageElements") {
  setMethod(HttpRequest::Method::Post);
}

DetectImageElementsRequest::~DetectImageElementsRequest() {}

bool DetectImageElementsRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void DetectImageElementsRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string DetectImageElementsRequest::getOssFile() const {
  return ossFile_;
}

void DetectImageElementsRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string DetectImageElementsRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void DetectImageElementsRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string DetectImageElementsRequest::getUrl() const {
  return url_;
}

void DetectImageElementsRequest::setUrl(const std::string &url) {
  url_ = url;
  setBodyParameter(std::string("Url"), url);
}

