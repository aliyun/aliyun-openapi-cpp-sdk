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

#include <alibabacloud/imagerecog/model/RecognizeImageStyleRequest.h>

using AlibabaCloud::Imagerecog::Model::RecognizeImageStyleRequest;

RecognizeImageStyleRequest::RecognizeImageStyleRequest()
    : RpcServiceRequest("imagerecog", "2019-09-30", "RecognizeImageStyle") {
  setMethod(HttpRequest::Method::Post);
}

RecognizeImageStyleRequest::~RecognizeImageStyleRequest() {}

bool RecognizeImageStyleRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void RecognizeImageStyleRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string RecognizeImageStyleRequest::getOssFile() const {
  return ossFile_;
}

void RecognizeImageStyleRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string RecognizeImageStyleRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void RecognizeImageStyleRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string RecognizeImageStyleRequest::getUrl() const {
  return url_;
}

void RecognizeImageStyleRequest::setUrl(const std::string &url) {
  url_ = url;
  setBodyParameter(std::string("Url"), url);
}

