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

#include <alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportListRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeCacheAnalysisReportListRequest;

DescribeCacheAnalysisReportListRequest::DescribeCacheAnalysisReportListRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeCacheAnalysisReportList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCacheAnalysisReportListRequest::~DescribeCacheAnalysisReportListRequest() {}

std::string DescribeCacheAnalysisReportListRequest::getDate() const {
  return date_;
}

void DescribeCacheAnalysisReportListRequest::setDate(const std::string &date) {
  date_ = date;
  setParameter(std::string("Date"), date);
}

long DescribeCacheAnalysisReportListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCacheAnalysisReportListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCacheAnalysisReportListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCacheAnalysisReportListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeCacheAnalysisReportListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeCacheAnalysisReportListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeCacheAnalysisReportListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCacheAnalysisReportListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeCacheAnalysisReportListRequest::getPageNumbers() const {
  return pageNumbers_;
}

void DescribeCacheAnalysisReportListRequest::setPageNumbers(int pageNumbers) {
  pageNumbers_ = pageNumbers;
  setParameter(std::string("PageNumbers"), std::to_string(pageNumbers));
}

std::string DescribeCacheAnalysisReportListRequest::getNodeId() const {
  return nodeId_;
}

void DescribeCacheAnalysisReportListRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeCacheAnalysisReportListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCacheAnalysisReportListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCacheAnalysisReportListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCacheAnalysisReportListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCacheAnalysisReportListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCacheAnalysisReportListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCacheAnalysisReportListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCacheAnalysisReportListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeCacheAnalysisReportListRequest::getDays() const {
  return days_;
}

void DescribeCacheAnalysisReportListRequest::setDays(int days) {
  days_ = days;
  setParameter(std::string("Days"), std::to_string(days));
}

