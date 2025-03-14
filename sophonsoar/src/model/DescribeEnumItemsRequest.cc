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

#include <alibabacloud/sophonsoar/model/DescribeEnumItemsRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeEnumItemsRequest;

DescribeEnumItemsRequest::DescribeEnumItemsRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeEnumItems") {
  setMethod(HttpRequest::Method::Get);
}

DescribeEnumItemsRequest::~DescribeEnumItemsRequest() {}

std::string DescribeEnumItemsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeEnumItemsRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeEnumItemsRequest::getEnumType() const {
  return enumType_;
}

void DescribeEnumItemsRequest::setEnumType(const std::string &enumType) {
  enumType_ = enumType;
  setParameter(std::string("EnumType"), enumType);
}

std::string DescribeEnumItemsRequest::getRoleType() const {
  return roleType_;
}

void DescribeEnumItemsRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeEnumItemsRequest::getLang() const {
  return lang_;
}

void DescribeEnumItemsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

