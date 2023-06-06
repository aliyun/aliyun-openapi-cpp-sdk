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

#include <alibabacloud/sas/model/DescribeGroupedInstancesRequest.h>

using AlibabaCloud::Sas::Model::DescribeGroupedInstancesRequest;

DescribeGroupedInstancesRequest::DescribeGroupedInstancesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeGroupedInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupedInstancesRequest::~DescribeGroupedInstancesRequest() {}

std::string DescribeGroupedInstancesRequest::getCriteria() const {
  return criteria_;
}

void DescribeGroupedInstancesRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string DescribeGroupedInstancesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeGroupedInstancesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeGroupedInstancesRequest::getGroupField() const {
  return groupField_;
}

void DescribeGroupedInstancesRequest::setGroupField(const std::string &groupField) {
  groupField_ = groupField;
  setParameter(std::string("GroupField"), groupField);
}

bool DescribeGroupedInstancesRequest::getNoPage() const {
  return noPage_;
}

void DescribeGroupedInstancesRequest::setNoPage(bool noPage) {
  noPage_ = noPage;
  setParameter(std::string("NoPage"), noPage ? "true" : "false");
}

int DescribeGroupedInstancesRequest::getVendor() const {
  return vendor_;
}

void DescribeGroupedInstancesRequest::setVendor(int vendor) {
  vendor_ = vendor;
  setParameter(std::string("Vendor"), std::to_string(vendor));
}

int DescribeGroupedInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGroupedInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGroupedInstancesRequest::getLang() const {
  return lang_;
}

void DescribeGroupedInstancesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeGroupedInstancesRequest::getVendors() const {
  return vendors_;
}

void DescribeGroupedInstancesRequest::setVendors(const std::string &vendors) {
  vendors_ = vendors;
  setParameter(std::string("Vendors"), vendors);
}

std::string DescribeGroupedInstancesRequest::getFieldValue() const {
  return fieldValue_;
}

void DescribeGroupedInstancesRequest::setFieldValue(const std::string &fieldValue) {
  fieldValue_ = fieldValue;
  setParameter(std::string("FieldValue"), fieldValue);
}

int DescribeGroupedInstancesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeGroupedInstancesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeGroupedInstancesRequest::getMachineTypes() const {
  return machineTypes_;
}

void DescribeGroupedInstancesRequest::setMachineTypes(const std::string &machineTypes) {
  machineTypes_ = machineTypes;
  setParameter(std::string("MachineTypes"), machineTypes);
}

std::string DescribeGroupedInstancesRequest::getSaleVersionCheckCode() const {
  return saleVersionCheckCode_;
}

void DescribeGroupedInstancesRequest::setSaleVersionCheckCode(const std::string &saleVersionCheckCode) {
  saleVersionCheckCode_ = saleVersionCheckCode;
  setParameter(std::string("SaleVersionCheckCode"), saleVersionCheckCode);
}

