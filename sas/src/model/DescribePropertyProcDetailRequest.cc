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

#include <alibabacloud/sas/model/DescribePropertyProcDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyProcDetailRequest;

DescribePropertyProcDetailRequest::DescribePropertyProcDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyProcDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyProcDetailRequest::~DescribePropertyProcDetailRequest() {}

std::string DescribePropertyProcDetailRequest::getRemark() const {
  return remark_;
}

void DescribePropertyProcDetailRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribePropertyProcDetailRequest::getUuid() const {
  return uuid_;
}

void DescribePropertyProcDetailRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribePropertyProcDetailRequest::getCmdline() const {
  return cmdline_;
}

void DescribePropertyProcDetailRequest::setCmdline(const std::string &cmdline) {
  cmdline_ = cmdline;
  setParameter(std::string("Cmdline"), cmdline);
}

std::string DescribePropertyProcDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyProcDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyProcDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyProcDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribePropertyProcDetailRequest::getProcTimeStart() const {
  return procTimeStart_;
}

void DescribePropertyProcDetailRequest::setProcTimeStart(long procTimeStart) {
  procTimeStart_ = procTimeStart;
  setParameter(std::string("ProcTimeStart"), std::to_string(procTimeStart));
}

int DescribePropertyProcDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyProcDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribePropertyProcDetailRequest::getProcTimeEnd() const {
  return procTimeEnd_;
}

void DescribePropertyProcDetailRequest::setProcTimeEnd(long procTimeEnd) {
  procTimeEnd_ = procTimeEnd;
  setParameter(std::string("ProcTimeEnd"), std::to_string(procTimeEnd));
}

std::string DescribePropertyProcDetailRequest::getExtend() const {
  return extend_;
}

void DescribePropertyProcDetailRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string DescribePropertyProcDetailRequest::getName() const {
  return name_;
}

void DescribePropertyProcDetailRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribePropertyProcDetailRequest::getUser() const {
  return user_;
}

void DescribePropertyProcDetailRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

