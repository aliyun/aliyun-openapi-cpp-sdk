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

#include <alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigPlayBooksRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeAutomateResponseConfigPlayBooksRequest;

DescribeAutomateResponseConfigPlayBooksRequest::DescribeAutomateResponseConfigPlayBooksRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeAutomateResponseConfigPlayBooks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutomateResponseConfigPlayBooksRequest::~DescribeAutomateResponseConfigPlayBooksRequest() {}

long DescribeAutomateResponseConfigPlayBooksRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeAutomateResponseConfigPlayBooksRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeAutomateResponseConfigPlayBooksRequest::getRegionId() const {
  return regionId_;
}

void DescribeAutomateResponseConfigPlayBooksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DescribeAutomateResponseConfigPlayBooksRequest::getAutoResponseType() const {
  return autoResponseType_;
}

void DescribeAutomateResponseConfigPlayBooksRequest::setAutoResponseType(const std::string &autoResponseType) {
  autoResponseType_ = autoResponseType;
  setBodyParameter(std::string("AutoResponseType"), autoResponseType);
}

int DescribeAutomateResponseConfigPlayBooksRequest::getRoleType() const {
  return roleType_;
}

void DescribeAutomateResponseConfigPlayBooksRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeAutomateResponseConfigPlayBooksRequest::getEntityType() const {
  return entityType_;
}

void DescribeAutomateResponseConfigPlayBooksRequest::setEntityType(const std::string &entityType) {
  entityType_ = entityType;
  setBodyParameter(std::string("EntityType"), entityType);
}

