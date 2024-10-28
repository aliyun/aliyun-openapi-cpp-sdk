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

#include <alibabacloud/nas/model/DescribeFileSystemsRequest.h>

using AlibabaCloud::NAS::Model::DescribeFileSystemsRequest;

DescribeFileSystemsRequest::DescribeFileSystemsRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeFileSystems") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFileSystemsRequest::~DescribeFileSystemsRequest() {}

bool DescribeFileSystemsRequest::getUseUTCDateTime() const {
  return useUTCDateTime_;
}

void DescribeFileSystemsRequest::setUseUTCDateTime(bool useUTCDateTime) {
  useUTCDateTime_ = useUTCDateTime;
  setParameter(std::string("UseUTCDateTime"), useUTCDateTime ? "true" : "false");
}

std::string DescribeFileSystemsRequest::getDescription() const {
  return description_;
}

void DescribeFileSystemsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string DescribeFileSystemsRequest::getOrderByField() const {
  return orderByField_;
}

void DescribeFileSystemsRequest::setOrderByField(const std::string &orderByField) {
  orderByField_ = orderByField;
  setParameter(std::string("OrderByField"), orderByField);
}

std::string DescribeFileSystemsRequest::getFileSystemType() const {
  return fileSystemType_;
}

void DescribeFileSystemsRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

std::string DescribeFileSystemsRequest::getPackageIds() const {
  return packageIds_;
}

void DescribeFileSystemsRequest::setPackageIds(const std::string &packageIds) {
  packageIds_ = packageIds;
  setParameter(std::string("PackageIds"), packageIds);
}

int DescribeFileSystemsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeFileSystemsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeFileSystemsRequest::getStorageType() const {
  return storageType_;
}

void DescribeFileSystemsRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string DescribeFileSystemsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeFileSystemsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeFileSystemsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeFileSystemsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeFileSystemsRequest::getSortOrder() const {
  return sortOrder_;
}

void DescribeFileSystemsRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::vector<DescribeFileSystemsRequest::Tag> DescribeFileSystemsRequest::getTag() const {
  return tag_;
}

void DescribeFileSystemsRequest::setTag(const std::vector<DescribeFileSystemsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeFileSystemsRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeFileSystemsRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string DescribeFileSystemsRequest::getVpcId() const {
  return vpcId_;
}

void DescribeFileSystemsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeFileSystemsRequest::getChargeType() const {
  return chargeType_;
}

void DescribeFileSystemsRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string DescribeFileSystemsRequest::getFileSystemIds() const {
  return fileSystemIds_;
}

void DescribeFileSystemsRequest::setFileSystemIds(const std::string &fileSystemIds) {
  fileSystemIds_ = fileSystemIds;
  setParameter(std::string("FileSystemIds"), fileSystemIds);
}

