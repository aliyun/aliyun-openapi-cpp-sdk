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

#include <alibabacloud/sas/model/DescribePropertyPortDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyPortDetailRequest;

DescribePropertyPortDetailRequest::DescribePropertyPortDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribePropertyPortDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribePropertyPortDetailRequest::~DescribePropertyPortDetailRequest() {}

std::string DescribePropertyPortDetailRequest::getRemark() const {
  return remark_;
}

void DescribePropertyPortDetailRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribePropertyPortDetailRequest::getUuid() const {
  return uuid_;
}

void DescribePropertyPortDetailRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribePropertyPortDetailRequest::getBindIp() const {
  return bindIp_;
}

void DescribePropertyPortDetailRequest::setBindIp(const std::string &bindIp) {
  bindIp_ = bindIp;
  setParameter(std::string("BindIp"), bindIp);
}

std::string DescribePropertyPortDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePropertyPortDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePropertyPortDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribePropertyPortDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribePropertyPortDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePropertyPortDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribePropertyPortDetailRequest::getExtend() const {
  return extend_;
}

void DescribePropertyPortDetailRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string DescribePropertyPortDetailRequest::getPort() const {
  return port_;
}

void DescribePropertyPortDetailRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string DescribePropertyPortDetailRequest::getProcName() const {
  return procName_;
}

void DescribePropertyPortDetailRequest::setProcName(const std::string &procName) {
  procName_ = procName;
  setParameter(std::string("ProcName"), procName);
}

