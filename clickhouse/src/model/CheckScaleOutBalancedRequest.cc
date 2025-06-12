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

#include <alibabacloud/clickhouse/model/CheckScaleOutBalancedRequest.h>

using AlibabaCloud::Clickhouse::Model::CheckScaleOutBalancedRequest;

CheckScaleOutBalancedRequest::CheckScaleOutBalancedRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CheckScaleOutBalanced") {
  setMethod(HttpRequest::Method::Post);
}

CheckScaleOutBalancedRequest::~CheckScaleOutBalancedRequest() {}

long CheckScaleOutBalancedRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckScaleOutBalancedRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CheckScaleOutBalancedRequest::getPageNumber() const {
  return pageNumber_;
}

void CheckScaleOutBalancedRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string CheckScaleOutBalancedRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckScaleOutBalancedRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckScaleOutBalancedRequest::getRegionId() const {
  return regionId_;
}

void CheckScaleOutBalancedRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CheckScaleOutBalancedRequest::getPageSize() const {
  return pageSize_;
}

void CheckScaleOutBalancedRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string CheckScaleOutBalancedRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckScaleOutBalancedRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckScaleOutBalancedRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CheckScaleOutBalancedRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CheckScaleOutBalancedRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckScaleOutBalancedRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckScaleOutBalancedRequest::getOwnerId() const {
  return ownerId_;
}

void CheckScaleOutBalancedRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

