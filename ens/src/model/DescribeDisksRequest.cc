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

#include <alibabacloud/ens/model/DescribeDisksRequest.h>

using AlibabaCloud::Ens::Model::DescribeDisksRequest;

DescribeDisksRequest::DescribeDisksRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeDisks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDisksRequest::~DescribeDisksRequest() {}

std::string DescribeDisksRequest::getType() const {
  return type_;
}

void DescribeDisksRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeDisksRequest::getOrderByParams() const {
  return orderByParams_;
}

void DescribeDisksRequest::setOrderByParams(const std::string &orderByParams) {
  orderByParams_ = orderByParams;
  setParameter(std::string("OrderByParams"), orderByParams);
}

std::string DescribeDisksRequest::getDiskName() const {
  return diskName_;
}

void DescribeDisksRequest::setDiskName(const std::string &diskName) {
  diskName_ = diskName;
  setParameter(std::string("DiskName"), diskName);
}

std::string DescribeDisksRequest::getDiskChargeType() const {
  return diskChargeType_;
}

void DescribeDisksRequest::setDiskChargeType(const std::string &diskChargeType) {
  diskChargeType_ = diskChargeType;
  setParameter(std::string("DiskChargeType"), diskChargeType);
}

std::string DescribeDisksRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeDisksRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeDisksRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDisksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDisksRequest::getStatus() const {
  return status_;
}

void DescribeDisksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeDisksRequest::getSnapshotId() const {
  return snapshotId_;
}

void DescribeDisksRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string DescribeDisksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDisksRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeDisksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDisksRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeDisksRequest::getDiskIds() const {
  return diskIds_;
}

void DescribeDisksRequest::setDiskIds(const std::string &diskIds) {
  diskIds_ = diskIds;
  setParameter(std::string("DiskIds"), diskIds);
}

std::string DescribeDisksRequest::getDiskId() const {
  return diskId_;
}

void DescribeDisksRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::string DescribeDisksRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeDisksRequest::setEnsRegionIds(const std::string &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  setParameter(std::string("EnsRegionIds"), ensRegionIds);
}

std::string DescribeDisksRequest::getDiskType() const {
  return diskType_;
}

void DescribeDisksRequest::setDiskType(const std::string &diskType) {
  diskType_ = diskType;
  setParameter(std::string("DiskType"), diskType);
}

std::string DescribeDisksRequest::getCategory() const {
  return category_;
}

void DescribeDisksRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

