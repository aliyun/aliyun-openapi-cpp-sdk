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

#include <alibabacloud/nas/model/DeleteAccessRuleRequest.h>

using AlibabaCloud::NAS::Model::DeleteAccessRuleRequest;

DeleteAccessRuleRequest::DeleteAccessRuleRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DeleteAccessRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccessRuleRequest::~DeleteAccessRuleRequest() {}

std::string DeleteAccessRuleRequest::getFileSystemType() const {
  return fileSystemType_;
}

void DeleteAccessRuleRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

std::string DeleteAccessRuleRequest::getAccessRuleId() const {
  return accessRuleId_;
}

void DeleteAccessRuleRequest::setAccessRuleId(const std::string &accessRuleId) {
  accessRuleId_ = accessRuleId;
  setParameter(std::string("AccessRuleId"), accessRuleId);
}

std::string DeleteAccessRuleRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void DeleteAccessRuleRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

