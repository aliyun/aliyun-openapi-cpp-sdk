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

#include <alibabacloud/sas/model/ListUninstallAegisMachinesRequest.h>

using AlibabaCloud::Sas::Model::ListUninstallAegisMachinesRequest;

ListUninstallAegisMachinesRequest::ListUninstallAegisMachinesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListUninstallAegisMachines") {
  setMethod(HttpRequest::Method::Post);
}

ListUninstallAegisMachinesRequest::~ListUninstallAegisMachinesRequest() {}

std::string ListUninstallAegisMachinesRequest::getRemark() const {
  return remark_;
}

void ListUninstallAegisMachinesRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ListUninstallAegisMachinesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListUninstallAegisMachinesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListUninstallAegisMachinesRequest::getVendor() const {
  return vendor_;
}

void ListUninstallAegisMachinesRequest::setVendor(int vendor) {
  vendor_ = vendor;
  setParameter(std::string("Vendor"), std::to_string(vendor));
}

int ListUninstallAegisMachinesRequest::getPageSize() const {
  return pageSize_;
}

void ListUninstallAegisMachinesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListUninstallAegisMachinesRequest::getOs() const {
  return os_;
}

void ListUninstallAegisMachinesRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

int ListUninstallAegisMachinesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUninstallAegisMachinesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListUninstallAegisMachinesRequest::getRegionNo() const {
  return regionNo_;
}

void ListUninstallAegisMachinesRequest::setRegionNo(const std::string &regionNo) {
  regionNo_ = regionNo;
  setParameter(std::string("RegionNo"), regionNo);
}

std::string ListUninstallAegisMachinesRequest::getRegionIdStr() const {
  return regionIdStr_;
}

void ListUninstallAegisMachinesRequest::setRegionIdStr(const std::string &regionIdStr) {
  regionIdStr_ = regionIdStr;
  setParameter(std::string("RegionIdStr"), regionIdStr);
}

