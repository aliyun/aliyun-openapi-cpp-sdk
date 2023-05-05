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

#include <alibabacloud/ecd/model/AddFilePermissionRequest.h>

using AlibabaCloud::Ecd::Model::AddFilePermissionRequest;

AddFilePermissionRequest::AddFilePermissionRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "AddFilePermission") {
  setMethod(HttpRequest::Method::Post);
}

AddFilePermissionRequest::~AddFilePermissionRequest() {}

std::vector<AddFilePermissionRequest::MemberList> AddFilePermissionRequest::getMemberList() const {
  return memberList_;
}

void AddFilePermissionRequest::setMemberList(const std::vector<AddFilePermissionRequest::MemberList> &memberList) {
  memberList_ = memberList;
  for(int dep1 = 0; dep1 != memberList.size(); dep1++) {
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".ExpireTime", std::to_string(memberList[dep1].expireTime));
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".RoleId", memberList[dep1].roleId);
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".CdsIdentity.Id", memberList[dep1].cdsIdentity.id);
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".CdsIdentity.Type", memberList[dep1].cdsIdentity.type);
    setParameter(std::string("MemberList") + "." + std::to_string(dep1 + 1) + ".DisinheritSubGroup", memberList[dep1].disinheritSubGroup ? "true" : "false");
  }
}

std::string AddFilePermissionRequest::getCdsId() const {
  return cdsId_;
}

void AddFilePermissionRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string AddFilePermissionRequest::getRegionId() const {
  return regionId_;
}

void AddFilePermissionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddFilePermissionRequest::getEndUserId() const {
  return endUserId_;
}

void AddFilePermissionRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string AddFilePermissionRequest::getFileId() const {
  return fileId_;
}

void AddFilePermissionRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

