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

#include <alibabacloud/swas-open/model/ListInstancesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancesRequest::~ListInstancesRequest() {}

std::string ListInstancesRequest::getPlanType() const {
  return planType_;
}

void ListInstancesRequest::setPlanType(const std::string &planType) {
  planType_ = planType;
  setParameter(std::string("PlanType"), planType);
}

int ListInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListInstancesRequest::getRegionId() const {
  return regionId_;
}

void ListInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInstancesRequest::getPublicIpAddresses() const {
  return publicIpAddresses_;
}

void ListInstancesRequest::setPublicIpAddresses(const std::string &publicIpAddresses) {
  publicIpAddresses_ = publicIpAddresses;
  setParameter(std::string("PublicIpAddresses"), publicIpAddresses);
}

std::vector<ListInstancesRequest::Tag> ListInstancesRequest::getTag() const {
  return tag_;
}

void ListInstancesRequest::setTag(const std::vector<ListInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string ListInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void ListInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string ListInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string ListInstancesRequest::getChargeType() const {
  return chargeType_;
}

void ListInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string ListInstancesRequest::getStatus() const {
  return status_;
}

void ListInstancesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

