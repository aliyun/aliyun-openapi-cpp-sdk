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

#include <alibabacloud/bssopenapi/model/QueryAvailableInstancesRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryAvailableInstancesRequest;

QueryAvailableInstancesRequest::QueryAvailableInstancesRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryAvailableInstances") {
  setMethod(HttpRequest::Method::Post);
}

QueryAvailableInstancesRequest::~QueryAvailableInstancesRequest() {}

std::string QueryAvailableInstancesRequest::getProductCode() const {
  return productCode_;
}

void QueryAvailableInstancesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string QueryAvailableInstancesRequest::getSubscriptionType() const {
  return subscriptionType_;
}

void QueryAvailableInstancesRequest::setSubscriptionType(const std::string &subscriptionType) {
  subscriptionType_ = subscriptionType;
  setParameter(std::string("SubscriptionType"), subscriptionType);
}

int QueryAvailableInstancesRequest::getPageNum() const {
  return pageNum_;
}

void QueryAvailableInstancesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QueryAvailableInstancesRequest::getProductType() const {
  return productType_;
}

void QueryAvailableInstancesRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

int QueryAvailableInstancesRequest::getPageSize() const {
  return pageSize_;
}

void QueryAvailableInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryAvailableInstancesRequest::getRenewStatus() const {
  return renewStatus_;
}

void QueryAvailableInstancesRequest::setRenewStatus(const std::string &renewStatus) {
  renewStatus_ = renewStatus;
  setParameter(std::string("RenewStatus"), renewStatus);
}

long QueryAvailableInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void QueryAvailableInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryAvailableInstancesRequest::getEndTimeStart() const {
  return endTimeStart_;
}

void QueryAvailableInstancesRequest::setEndTimeStart(const std::string &endTimeStart) {
  endTimeStart_ = endTimeStart;
  setParameter(std::string("EndTimeStart"), endTimeStart);
}

std::string QueryAvailableInstancesRequest::getCreateTimeEnd() const {
  return createTimeEnd_;
}

void QueryAvailableInstancesRequest::setCreateTimeEnd(const std::string &createTimeEnd) {
  createTimeEnd_ = createTimeEnd;
  setParameter(std::string("CreateTimeEnd"), createTimeEnd);
}

std::string QueryAvailableInstancesRequest::getInstanceIDs() const {
  return instanceIDs_;
}

void QueryAvailableInstancesRequest::setInstanceIDs(const std::string &instanceIDs) {
  instanceIDs_ = instanceIDs;
  setParameter(std::string("InstanceIDs"), instanceIDs);
}

std::string QueryAvailableInstancesRequest::getEndTimeEnd() const {
  return endTimeEnd_;
}

void QueryAvailableInstancesRequest::setEndTimeEnd(const std::string &endTimeEnd) {
  endTimeEnd_ = endTimeEnd;
  setParameter(std::string("EndTimeEnd"), endTimeEnd);
}

std::string QueryAvailableInstancesRequest::getCreateTimeStart() const {
  return createTimeStart_;
}

void QueryAvailableInstancesRequest::setCreateTimeStart(const std::string &createTimeStart) {
  createTimeStart_ = createTimeStart;
  setParameter(std::string("CreateTimeStart"), createTimeStart);
}

std::string QueryAvailableInstancesRequest::getRegion() const {
  return region_;
}

void QueryAvailableInstancesRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

