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

#include <alibabacloud/eas/model/ListResourceInstancesRequest.h>

using AlibabaCloud::Eas::Model::ListResourceInstancesRequest;

ListResourceInstancesRequest::ListResourceInstancesRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/resources/[ClusterId]/[ResourceId]/instances"};
  setMethod(HttpRequest::Method::Get);
}

ListResourceInstancesRequest::~ListResourceInstancesRequest() {}

std::string ListResourceInstancesRequest::getResourceId() const {
  return resourceId_;
}

void ListResourceInstancesRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListResourceInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void ListResourceInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string ListResourceInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void ListResourceInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListResourceInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListResourceInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListResourceInstancesRequest::getClusterId() const {
  return clusterId_;
}

void ListResourceInstancesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListResourceInstancesRequest::getChargeType() const {
  return chargeType_;
}

void ListResourceInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

int ListResourceInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListResourceInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

