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

#include <alibabacloud/sophonsoar/model/DescribeFieldRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeFieldRequest;

DescribeFieldRequest::DescribeFieldRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeField") {
  setMethod(HttpRequest::Method::Get);
}

DescribeFieldRequest::~DescribeFieldRequest() {}

std::string DescribeFieldRequest::getQueryKey() const {
  return queryKey_;
}

void DescribeFieldRequest::setQueryKey(const std::string &queryKey) {
  queryKey_ = queryKey;
  setParameter(std::string("QueryKey"), queryKey);
}

std::string DescribeFieldRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeFieldRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeFieldRequest::getRoleType() const {
  return roleType_;
}

void DescribeFieldRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeFieldRequest::getLang() const {
  return lang_;
}

void DescribeFieldRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

