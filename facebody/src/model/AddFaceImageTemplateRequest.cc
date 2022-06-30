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

#include <alibabacloud/facebody/model/AddFaceImageTemplateRequest.h>

using AlibabaCloud::Facebody::Model::AddFaceImageTemplateRequest;

AddFaceImageTemplateRequest::AddFaceImageTemplateRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "AddFaceImageTemplate") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceImageTemplateRequest::~AddFaceImageTemplateRequest() {}

bool AddFaceImageTemplateRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void AddFaceImageTemplateRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string AddFaceImageTemplateRequest::getUserId() const {
  return userId_;
}

void AddFaceImageTemplateRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string AddFaceImageTemplateRequest::getOssFile() const {
  return ossFile_;
}

void AddFaceImageTemplateRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string AddFaceImageTemplateRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void AddFaceImageTemplateRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string AddFaceImageTemplateRequest::getImageURL() const {
  return imageURL_;
}

void AddFaceImageTemplateRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

