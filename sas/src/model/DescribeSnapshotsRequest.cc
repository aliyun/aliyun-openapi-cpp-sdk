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

#include <alibabacloud/sas/model/DescribeSnapshotsRequest.h>

using AlibabaCloud::Sas::Model::DescribeSnapshotsRequest;

DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnapshotsRequest::~DescribeSnapshotsRequest() {}

long DescribeSnapshotsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSnapshotsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSnapshotsRequest::getStatusList() const {
  return statusList_;
}

void DescribeSnapshotsRequest::setStatusList(const std::string &statusList) {
  statusList_ = statusList;
  setParameter(std::string("StatusList"), statusList);
}

std::string DescribeSnapshotsRequest::getUuid() const {
  return uuid_;
}

void DescribeSnapshotsRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeSnapshotsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSnapshotsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSnapshotsRequest::getMachineRemark() const {
  return machineRemark_;
}

void DescribeSnapshotsRequest::setMachineRemark(const std::string &machineRemark) {
  machineRemark_ = machineRemark;
  setParameter(std::string("MachineRemark"), machineRemark);
}

std::string DescribeSnapshotsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSnapshotsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeSnapshotsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSnapshotsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeSnapshotsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSnapshotsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeSnapshotsRequest::getApiVersion() const {
  return apiVersion_;
}

void DescribeSnapshotsRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string DescribeSnapshotsRequest::getMachineRegion() const {
  return machineRegion_;
}

void DescribeSnapshotsRequest::setMachineRegion(const std::string &machineRegion) {
  machineRegion_ = machineRegion;
  setParameter(std::string("MachineRegion"), machineRegion);
}

std::string DescribeSnapshotsRequest::getIsAliYunEcs() const {
  return isAliYunEcs_;
}

void DescribeSnapshotsRequest::setIsAliYunEcs(const std::string &isAliYunEcs) {
  isAliYunEcs_ = isAliYunEcs;
  setParameter(std::string("IsAliYunEcs"), isAliYunEcs);
}

