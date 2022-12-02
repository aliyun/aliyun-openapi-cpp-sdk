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

#include <alibabacloud/sas/model/DescribeOfflineMachinesRequest.h>

using AlibabaCloud::Sas::Model::DescribeOfflineMachinesRequest;

DescribeOfflineMachinesRequest::DescribeOfflineMachinesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeOfflineMachines") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOfflineMachinesRequest::~DescribeOfflineMachinesRequest() {}

std::string DescribeOfflineMachinesRequest::getRemark() const {
  return remark_;
}

void DescribeOfflineMachinesRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeOfflineMachinesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeOfflineMachinesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeOfflineMachinesRequest::getVendor() const {
  return vendor_;
}

void DescribeOfflineMachinesRequest::setVendor(int vendor) {
  vendor_ = vendor;
  setParameter(std::string("Vendor"), std::to_string(vendor));
}

int DescribeOfflineMachinesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOfflineMachinesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOfflineMachinesRequest::getOs() const {
  return os_;
}

void DescribeOfflineMachinesRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

int DescribeOfflineMachinesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeOfflineMachinesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeOfflineMachinesRequest::getRegionNo() const {
  return regionNo_;
}

void DescribeOfflineMachinesRequest::setRegionNo(const std::string &regionNo) {
  regionNo_ = regionNo;
  setParameter(std::string("RegionNo"), regionNo);
}

std::string DescribeOfflineMachinesRequest::getRegionIdStr() const {
  return regionIdStr_;
}

void DescribeOfflineMachinesRequest::setRegionIdStr(const std::string &regionIdStr) {
  regionIdStr_ = regionIdStr;
  setParameter(std::string("RegionIdStr"), regionIdStr);
}

