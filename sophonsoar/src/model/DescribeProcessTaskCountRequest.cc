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

#include <alibabacloud/sophonsoar/model/DescribeProcessTaskCountRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeProcessTaskCountRequest;

DescribeProcessTaskCountRequest::DescribeProcessTaskCountRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeProcessTaskCount") {
  setMethod(HttpRequest::Method::Get);
}

DescribeProcessTaskCountRequest::~DescribeProcessTaskCountRequest() {}

std::vector<std::string> DescribeProcessTaskCountRequest::getEntityUuidList() const {
  return entityUuidList_;
}

void DescribeProcessTaskCountRequest::setEntityUuidList(const std::vector<std::string> &entityUuidList) {
  entityUuidList_ = entityUuidList;
}

long DescribeProcessTaskCountRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeProcessTaskCountRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeProcessTaskCountRequest::getRoleType() const {
  return roleType_;
}

void DescribeProcessTaskCountRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeProcessTaskCountRequest::getLang() const {
  return lang_;
}

void DescribeProcessTaskCountRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

