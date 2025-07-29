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

#include <alibabacloud/live/model/DescribeCastersRequest.h>

using AlibabaCloud::Live::Model::DescribeCastersRequest;

DescribeCastersRequest::DescribeCastersRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeCasters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCastersRequest::~DescribeCastersRequest() {}

std::string DescribeCastersRequest::getStartTime() const {
  return startTime_;
}

void DescribeCastersRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeCastersRequest::getPageNum() const {
  return pageNum_;
}

void DescribeCastersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeCastersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCastersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCastersRequest::getRegionId() const {
  return regionId_;
}

void DescribeCastersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCastersRequest::getCasterName() const {
  return casterName_;
}

void DescribeCastersRequest::setCasterName(const std::string &casterName) {
  casterName_ = casterName;
  setParameter(std::string("CasterName"), casterName);
}

int DescribeCastersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCastersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeCastersRequest::Tag> DescribeCastersRequest::getTag() const {
  return tag_;
}

void DescribeCastersRequest::setTag(const std::vector<DescribeCastersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeCastersRequest::getNormType() const {
  return normType_;
}

void DescribeCastersRequest::setNormType(const std::string &normType) {
  normType_ = normType;
  setParameter(std::string("NormType"), normType);
}

std::string DescribeCastersRequest::getCasterId() const {
  return casterId_;
}

void DescribeCastersRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

std::string DescribeCastersRequest::getEndTime() const {
  return endTime_;
}

void DescribeCastersRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeCastersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCastersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCastersRequest::getOrderByModifyAsc() const {
  return orderByModifyAsc_;
}

void DescribeCastersRequest::setOrderByModifyAsc(const std::string &orderByModifyAsc) {
  orderByModifyAsc_ = orderByModifyAsc;
  setParameter(std::string("OrderByModifyAsc"), orderByModifyAsc);
}

int DescribeCastersRequest::getChargeType() const {
  return chargeType_;
}

void DescribeCastersRequest::setChargeType(int chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), std::to_string(chargeType));
}

int DescribeCastersRequest::getStatus() const {
  return status_;
}

void DescribeCastersRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

