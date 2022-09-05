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

#include <alibabacloud/cdn/model/DescribeConfigOfVersionRequest.h>

using AlibabaCloud::Cdn::Model::DescribeConfigOfVersionRequest;

DescribeConfigOfVersionRequest::DescribeConfigOfVersionRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeConfigOfVersion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeConfigOfVersionRequest::~DescribeConfigOfVersionRequest() {}

std::string DescribeConfigOfVersionRequest::getVersionId() const {
  return versionId_;
}

void DescribeConfigOfVersionRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string DescribeConfigOfVersionRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeConfigOfVersionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeConfigOfVersionRequest::getFunctionName() const {
  return functionName_;
}

void DescribeConfigOfVersionRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("FunctionName"), functionName);
}

long DescribeConfigOfVersionRequest::getGroupId() const {
  return groupId_;
}

void DescribeConfigOfVersionRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

long DescribeConfigOfVersionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeConfigOfVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeConfigOfVersionRequest::getFunctionId() const {
  return functionId_;
}

void DescribeConfigOfVersionRequest::setFunctionId(int functionId) {
  functionId_ = functionId;
  setParameter(std::string("FunctionId"), std::to_string(functionId));
}

