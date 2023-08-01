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

#include <alibabacloud/grace/model/UploadFileByOSSRequest.h>

using AlibabaCloud::Grace::Model::UploadFileByOSSRequest;

UploadFileByOSSRequest::UploadFileByOSSRequest()
    : RoaServiceRequest("grace", "2022-06-06") {
  setResourcePath("/UploadFileByOSS"};
  setMethod(HttpRequest::Method::Post);
}

UploadFileByOSSRequest::~UploadFileByOSSRequest() {}

std::string UploadFileByOSSRequest::getObjectName() const {
  return objectName_;
}

void UploadFileByOSSRequest::setObjectName(const std::string &objectName) {
  objectName_ = objectName;
  setParameter(std::string("objectName"), objectName);
}

std::string UploadFileByOSSRequest::getType() const {
  return type_;
}

void UploadFileByOSSRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

std::string UploadFileByOSSRequest::getEndpoint() const {
  return endpoint_;
}

void UploadFileByOSSRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setParameter(std::string("endpoint"), endpoint);
}

std::string UploadFileByOSSRequest::getBucketName() const {
  return bucketName_;
}

void UploadFileByOSSRequest::setBucketName(const std::string &bucketName) {
  bucketName_ = bucketName;
  setParameter(std::string("bucketName"), bucketName);
}

std::string UploadFileByOSSRequest::getDisplayName() const {
  return displayName_;
}

void UploadFileByOSSRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("displayName"), displayName);
}

