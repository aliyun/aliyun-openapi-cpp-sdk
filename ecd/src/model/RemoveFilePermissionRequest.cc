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

#include <alibabacloud/ecd/model/RemoveFilePermissionRequest.h>

using AlibabaCloud::Ecd::Model::RemoveFilePermissionRequest;

RemoveFilePermissionRequest::RemoveFilePermissionRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "RemoveFilePermission") {
  setMethod(HttpRequest::Method::Post);
}

RemoveFilePermissionRequest::~RemoveFilePermissionRequest() {}

std::vector<RemoveFilePermissionRequest::MemberList> RemoveFilePermissionRequest::getMemberList() const {
  return memberList_;
}

void RemoveFilePermissionRequest::setMemberList(const std::vector<RemoveFilePermissionRequest::MemberList> &memberList) {
  memberList_ = memberList;
  for(int dep1 = 0; dep1 != memberList.size(); dep1++) {
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".RoleId", memberList[dep1].roleId);
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".CdsIdentity.Id", memberList[dep1].cdsIdentity.id);
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".CdsIdentity.Type", memberList[dep1].cdsIdentity.type);
  }
}

std::string RemoveFilePermissionRequest::getCdsId() const {
  return cdsId_;
}

void RemoveFilePermissionRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string RemoveFilePermissionRequest::getRegionId() const {
  return regionId_;
}

void RemoveFilePermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveFilePermissionRequest::getEndUserId() const {
  return endUserId_;
}

void RemoveFilePermissionRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string RemoveFilePermissionRequest::getFileId() const {
  return fileId_;
}

void RemoveFilePermissionRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

