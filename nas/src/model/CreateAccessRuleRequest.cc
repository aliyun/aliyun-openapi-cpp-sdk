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

#include <alibabacloud/nas/model/CreateAccessRuleRequest.h>

using AlibabaCloud::NAS::Model::CreateAccessRuleRequest;

CreateAccessRuleRequest::CreateAccessRuleRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateAccessRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccessRuleRequest::~CreateAccessRuleRequest() {}

std::string CreateAccessRuleRequest::getRWAccessType() const {
  return rWAccessType_;
}

void CreateAccessRuleRequest::setRWAccessType(const std::string &rWAccessType) {
  rWAccessType_ = rWAccessType;
  setParameter(std::string("RWAccessType"), rWAccessType);
}

std::string CreateAccessRuleRequest::getUserAccessType() const {
  return userAccessType_;
}

void CreateAccessRuleRequest::setUserAccessType(const std::string &userAccessType) {
  userAccessType_ = userAccessType;
  setParameter(std::string("UserAccessType"), userAccessType);
}

std::string CreateAccessRuleRequest::getFileSystemType() const {
  return fileSystemType_;
}

void CreateAccessRuleRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

std::string CreateAccessRuleRequest::getIpv6SourceCidrIp() const {
  return ipv6SourceCidrIp_;
}

void CreateAccessRuleRequest::setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp) {
  ipv6SourceCidrIp_ = ipv6SourceCidrIp;
  setParameter(std::string("Ipv6SourceCidrIp"), ipv6SourceCidrIp);
}

std::string CreateAccessRuleRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void CreateAccessRuleRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

int CreateAccessRuleRequest::getPriority() const {
  return priority_;
}

void CreateAccessRuleRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateAccessRuleRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void CreateAccessRuleRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

