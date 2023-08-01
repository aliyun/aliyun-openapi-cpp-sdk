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

#include <alibabacloud/grace/model/UploadFileByURLRequest.h>

using AlibabaCloud::Grace::Model::UploadFileByURLRequest;

UploadFileByURLRequest::UploadFileByURLRequest()
    : RoaServiceRequest("grace", "2022-06-06") {
  setResourcePath("/UploadFileByURL"};
  setMethod(HttpRequest::Method::Post);
}

UploadFileByURLRequest::~UploadFileByURLRequest() {}

std::string UploadFileByURLRequest::getType() const {
  return type_;
}

void UploadFileByURLRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

std::string UploadFileByURLRequest::getUrl() const {
  return url_;
}

void UploadFileByURLRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("url"), url);
}

std::string UploadFileByURLRequest::getDisplayName() const {
  return displayName_;
}

void UploadFileByURLRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("displayName"), displayName);
}

