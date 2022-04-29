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

#include <alibabacloud/nas/model/ModifyAccessRuleRequest.h>

using AlibabaCloud::NAS::Model::ModifyAccessRuleRequest;

ModifyAccessRuleRequest::ModifyAccessRuleRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyAccessRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccessRuleRequest::~ModifyAccessRuleRequest() {}

std::string ModifyAccessRuleRequest::getRWAccessType() const {
  return rWAccessType_;
}

void ModifyAccessRuleRequest::setRWAccessType(const std::string &rWAccessType) {
  rWAccessType_ = rWAccessType;
  setParameter(std::string("RWAccessType"), rWAccessType);
}

std::string ModifyAccessRuleRequest::getUserAccessType() const {
  return userAccessType_;
}

void ModifyAccessRuleRequest::setUserAccessType(const std::string &userAccessType) {
  userAccessType_ = userAccessType;
  setParameter(std::string("UserAccessType"), userAccessType);
}

std::string ModifyAccessRuleRequest::getFileSystemType() const {
  return fileSystemType_;
}

void ModifyAccessRuleRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

std::string ModifyAccessRuleRequest::getAccessRuleId() const {
  return accessRuleId_;
}

void ModifyAccessRuleRequest::setAccessRuleId(const std::string &accessRuleId) {
  accessRuleId_ = accessRuleId;
  setParameter(std::string("AccessRuleId"), accessRuleId);
}

std::string ModifyAccessRuleRequest::getIpv6SourceCidrIp() const {
  return ipv6SourceCidrIp_;
}

void ModifyAccessRuleRequest::setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp) {
  ipv6SourceCidrIp_ = ipv6SourceCidrIp;
  setParameter(std::string("Ipv6SourceCidrIp"), ipv6SourceCidrIp);
}

std::string ModifyAccessRuleRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void ModifyAccessRuleRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

int ModifyAccessRuleRequest::getPriority() const {
  return priority_;
}

void ModifyAccessRuleRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string ModifyAccessRuleRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void ModifyAccessRuleRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

