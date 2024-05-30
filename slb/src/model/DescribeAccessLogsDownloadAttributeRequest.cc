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

#include <alibabacloud/slb/model/DescribeAccessLogsDownloadAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeAccessLogsDownloadAttributeRequest;

DescribeAccessLogsDownloadAttributeRequest::DescribeAccessLogsDownloadAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeAccessLogsDownloadAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccessLogsDownloadAttributeRequest::~DescribeAccessLogsDownloadAttributeRequest() {}

std::string DescribeAccessLogsDownloadAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeAccessLogsDownloadAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeAccessLogsDownloadAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAccessLogsDownloadAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeAccessLogsDownloadAttributeRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAccessLogsDownloadAttributeRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAccessLogsDownloadAttributeRequest::getLogType() const {
  return logType_;
}

void DescribeAccessLogsDownloadAttributeRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setParameter(std::string("LogType"), logType);
}

std::string DescribeAccessLogsDownloadAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeAccessLogsDownloadAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAccessLogsDownloadAttributeRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAccessLogsDownloadAttributeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAccessLogsDownloadAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAccessLogsDownloadAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAccessLogsDownloadAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAccessLogsDownloadAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAccessLogsDownloadAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAccessLogsDownloadAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAccessLogsDownloadAttributeRequest::getTags() const {
  return tags_;
}

void DescribeAccessLogsDownloadAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeAccessLogsDownloadAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeAccessLogsDownloadAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

