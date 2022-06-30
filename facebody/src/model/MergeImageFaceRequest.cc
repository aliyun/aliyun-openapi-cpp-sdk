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

#include <alibabacloud/facebody/model/MergeImageFaceRequest.h>

using AlibabaCloud::Facebody::Model::MergeImageFaceRequest;

MergeImageFaceRequest::MergeImageFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "MergeImageFace") {
  setMethod(HttpRequest::Method::Post);
}

MergeImageFaceRequest::~MergeImageFaceRequest() {}

bool MergeImageFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void MergeImageFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string MergeImageFaceRequest::getUserId() const {
  return userId_;
}

void MergeImageFaceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string MergeImageFaceRequest::getOssFile() const {
  return ossFile_;
}

void MergeImageFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string MergeImageFaceRequest::getTemplateId() const {
  return templateId_;
}

void MergeImageFaceRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::string MergeImageFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void MergeImageFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string MergeImageFaceRequest::getImageURL() const {
  return imageURL_;
}

void MergeImageFaceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

