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

#include <alibabacloud/sas/model/DescribePropertyUserDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyUserDetailRequest;

DescribePropertyUserDetailRequest::DescribePropertyUserDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyUserDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyUserDetailRequest::~DescribePropertyUserDetailRequest() {}

std::string DescribePropertyUserDetailRequest::getRemark() const {
  return remark_;
}

void DescribePropertyUserDetailRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribePropertyUserDetailRequest::getUuid() const {
  return uuid_;
}

void DescribePropertyUserDetailRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribePropertyUserDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyUserDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyUserDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyUserDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribePropertyUserDetailRequest::getLastLoginTimeStart() const {
  return lastLoginTimeStart_;
}

void DescribePropertyUserDetailRequest::setLastLoginTimeStart(long lastLoginTimeStart) {
  lastLoginTimeStart_ = lastLoginTimeStart;
  setParameter(std::string("LastLoginTimeStart"), std::to_string(lastLoginTimeStart));
}

int DescribePropertyUserDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyUserDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribePropertyUserDetailRequest::getLastLoginTimeEnd() const {
  return lastLoginTimeEnd_;
}

void DescribePropertyUserDetailRequest::setLastLoginTimeEnd(long lastLoginTimeEnd) {
  lastLoginTimeEnd_ = lastLoginTimeEnd;
  setParameter(std::string("LastLoginTimeEnd"), std::to_string(lastLoginTimeEnd));
}

std::string DescribePropertyUserDetailRequest::getExtend() const {
  return extend_;
}

void DescribePropertyUserDetailRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string DescribePropertyUserDetailRequest::getIsRoot() const {
  return isRoot_;
}

void DescribePropertyUserDetailRequest::setIsRoot(const std::string &isRoot) {
  isRoot_ = isRoot;
  setParameter(std::string("IsRoot"), isRoot);
}

std::string DescribePropertyUserDetailRequest::getUser() const {
  return user_;
}

void DescribePropertyUserDetailRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

