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

#include <alibabacloud/sddp/model/DescribeEventsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeEventsRequest;

DescribeEventsRequest::DescribeEventsRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEventsRequest::~DescribeEventsRequest() {}

int DescribeEventsRequest::getWarnLevel() const {
  return warnLevel_;
}

void DescribeEventsRequest::setWarnLevel(int warnLevel) {
  warnLevel_ = warnLevel;
  setParameter(std::string("WarnLevel"), std::to_string(warnLevel));
}

std::string DescribeEventsRequest::getProductCode() const {
  return productCode_;
}

void DescribeEventsRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string DescribeEventsRequest::getStartTime() const {
  return startTime_;
}

void DescribeEventsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeEventsRequest::getUserId() const {
  return userId_;
}

void DescribeEventsRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

std::string DescribeEventsRequest::getTypeCode() const {
  return typeCode_;
}

void DescribeEventsRequest::setTypeCode(const std::string &typeCode) {
  typeCode_ = typeCode;
  setParameter(std::string("TypeCode"), typeCode);
}

std::string DescribeEventsRequest::getSubTypeCode() const {
  return subTypeCode_;
}

void DescribeEventsRequest::setSubTypeCode(const std::string &subTypeCode) {
  subTypeCode_ = subTypeCode;
  setParameter(std::string("SubTypeCode"), subTypeCode);
}

std::string DescribeEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeEventsRequest::getTargetProductCode() const {
  return targetProductCode_;
}

void DescribeEventsRequest::setTargetProductCode(const std::string &targetProductCode) {
  targetProductCode_ = targetProductCode;
  setParameter(std::string("TargetProductCode"), targetProductCode);
}

int DescribeEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeEventsRequest::getId() const {
  return id_;
}

void DescribeEventsRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DescribeEventsRequest::getLang() const {
  return lang_;
}

void DescribeEventsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeEventsRequest::getDealUserId() const {
  return dealUserId_;
}

void DescribeEventsRequest::setDealUserId(const std::string &dealUserId) {
  dealUserId_ = dealUserId;
  setParameter(std::string("DealUserId"), dealUserId);
}

int DescribeEventsRequest::getFeatureType() const {
  return featureType_;
}

void DescribeEventsRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeEventsRequest::getEndTime() const {
  return endTime_;
}

void DescribeEventsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

int DescribeEventsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeEventsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeEventsRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeEventsRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

long DescribeEventsRequest::getDepartId() const {
  return departId_;
}

void DescribeEventsRequest::setDepartId(long departId) {
  departId_ = departId;
  setParameter(std::string("DepartId"), std::to_string(departId));
}

std::string DescribeEventsRequest::getStatus() const {
  return status_;
}

void DescribeEventsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeEventsRequest::getUserName() const {
  return userName_;
}

void DescribeEventsRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

