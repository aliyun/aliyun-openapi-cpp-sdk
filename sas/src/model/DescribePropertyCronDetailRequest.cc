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

#include <alibabacloud/sas/model/DescribePropertyCronDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyCronDetailRequest;

DescribePropertyCronDetailRequest::DescribePropertyCronDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyCronDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyCronDetailRequest::~DescribePropertyCronDetailRequest() {}

std::string DescribePropertyCronDetailRequest::getRemark() const {
  return remark_;
}

void DescribePropertyCronDetailRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribePropertyCronDetailRequest::getSource() const {
  return source_;
}

void DescribePropertyCronDetailRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string DescribePropertyCronDetailRequest::getUuid() const {
  return uuid_;
}

void DescribePropertyCronDetailRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribePropertyCronDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyCronDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyCronDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyCronDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribePropertyCronDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyCronDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribePropertyCronDetailRequest::getExtend() const {
  return extend_;
}

void DescribePropertyCronDetailRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string DescribePropertyCronDetailRequest::getUser() const {
  return user_;
}

void DescribePropertyCronDetailRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

