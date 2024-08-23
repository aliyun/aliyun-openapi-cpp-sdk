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

#include <alibabacloud/ens/model/DescribeStorageVolumeRequest.h>

using AlibabaCloud::Ens::Model::DescribeStorageVolumeRequest;

DescribeStorageVolumeRequest::DescribeStorageVolumeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeStorageVolume") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStorageVolumeRequest::~DescribeStorageVolumeRequest() {}

std::string DescribeStorageVolumeRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeStorageVolumeRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeStorageVolumeRequest::getGatewayId() const {
  return gatewayId_;
}

void DescribeStorageVolumeRequest::setGatewayId(const std::string &gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), gatewayId);
}

std::string DescribeStorageVolumeRequest::getVolumeId() const {
  return volumeId_;
}

void DescribeStorageVolumeRequest::setVolumeId(const std::string &volumeId) {
  volumeId_ = volumeId;
  setParameter(std::string("VolumeId"), volumeId);
}

int DescribeStorageVolumeRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeStorageVolumeRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeStorageVolumeRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStorageVolumeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeStorageVolumeRequest::getIsEnable() const {
  return isEnable_;
}

void DescribeStorageVolumeRequest::setIsEnable(int isEnable) {
  isEnable_ = isEnable;
  setParameter(std::string("IsEnable"), std::to_string(isEnable));
}

std::string DescribeStorageVolumeRequest::getStorageId() const {
  return storageId_;
}

void DescribeStorageVolumeRequest::setStorageId(const std::string &storageId) {
  storageId_ = storageId;
  setParameter(std::string("StorageId"), storageId);
}

