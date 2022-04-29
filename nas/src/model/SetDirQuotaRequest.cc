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

#include <alibabacloud/nas/model/SetDirQuotaRequest.h>

using AlibabaCloud::NAS::Model::SetDirQuotaRequest;

SetDirQuotaRequest::SetDirQuotaRequest()
    : RpcServiceRequest("nas", "2017-06-26", "SetDirQuota") {
  setMethod(HttpRequest::Method::Post);
}

SetDirQuotaRequest::~SetDirQuotaRequest() {}

std::string SetDirQuotaRequest::getQuotaType() const {
  return quotaType_;
}

void SetDirQuotaRequest::setQuotaType(const std::string &quotaType) {
  quotaType_ = quotaType;
  setParameter(std::string("QuotaType"), quotaType);
}

std::string SetDirQuotaRequest::getUserId() const {
  return userId_;
}

void SetDirQuotaRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long SetDirQuotaRequest::getFileCountLimit() const {
  return fileCountLimit_;
}

void SetDirQuotaRequest::setFileCountLimit(long fileCountLimit) {
  fileCountLimit_ = fileCountLimit;
  setParameter(std::string("FileCountLimit"), std::to_string(fileCountLimit));
}

std::string SetDirQuotaRequest::getPath() const {
  return path_;
}

void SetDirQuotaRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

long SetDirQuotaRequest::getSizeLimit() const {
  return sizeLimit_;
}

void SetDirQuotaRequest::setSizeLimit(long sizeLimit) {
  sizeLimit_ = sizeLimit;
  setParameter(std::string("SizeLimit"), std::to_string(sizeLimit));
}

std::string SetDirQuotaRequest::getFileSystemId() const {
  return fileSystemId_;
}

void SetDirQuotaRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string SetDirQuotaRequest::getUserType() const {
  return userType_;
}

void SetDirQuotaRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

