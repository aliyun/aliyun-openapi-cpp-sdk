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

#include <alibabacloud/facebody/model/GetRealPersonVerificationResultRequest.h>

using AlibabaCloud::Facebody::Model::GetRealPersonVerificationResultRequest;

GetRealPersonVerificationResultRequest::GetRealPersonVerificationResultRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "GetRealPersonVerificationResult") {
  setMethod(HttpRequest::Method::Post);
}

GetRealPersonVerificationResultRequest::~GetRealPersonVerificationResultRequest() {}

bool GetRealPersonVerificationResultRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void GetRealPersonVerificationResultRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string GetRealPersonVerificationResultRequest::getMaterialHash() const {
  return materialHash_;
}

void GetRealPersonVerificationResultRequest::setMaterialHash(const std::string &materialHash) {
  materialHash_ = materialHash;
  setBodyParameter(std::string("MaterialHash"), materialHash);
}

std::string GetRealPersonVerificationResultRequest::getOssFile() const {
  return ossFile_;
}

void GetRealPersonVerificationResultRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string GetRealPersonVerificationResultRequest::getVerificationToken() const {
  return verificationToken_;
}

void GetRealPersonVerificationResultRequest::setVerificationToken(const std::string &verificationToken) {
  verificationToken_ = verificationToken;
  setBodyParameter(std::string("VerificationToken"), verificationToken);
}

std::string GetRealPersonVerificationResultRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void GetRealPersonVerificationResultRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

