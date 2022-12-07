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

#include <alibabacloud/alikafka/model/UpgradePrePayOrderRequest.h>

using AlibabaCloud::Alikafka::Model::UpgradePrePayOrderRequest;

UpgradePrePayOrderRequest::UpgradePrePayOrderRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "UpgradePrePayOrder") {
  setMethod(HttpRequest::Method::Post);
}

UpgradePrePayOrderRequest::~UpgradePrePayOrderRequest() {}

int UpgradePrePayOrderRequest::getDiskSize() const {
  return diskSize_;
}

void UpgradePrePayOrderRequest::setDiskSize(int diskSize) {
  diskSize_ = diskSize;
  setParameter(std::string("DiskSize"), std::to_string(diskSize));
}

int UpgradePrePayOrderRequest::getIoMax() const {
  return ioMax_;
}

void UpgradePrePayOrderRequest::setIoMax(int ioMax) {
  ioMax_ = ioMax;
  setParameter(std::string("IoMax"), std::to_string(ioMax));
}

bool UpgradePrePayOrderRequest::getEipModel() const {
  return eipModel_;
}

void UpgradePrePayOrderRequest::setEipModel(bool eipModel) {
  eipModel_ = eipModel;
  setParameter(std::string("EipModel"), eipModel ? "true" : "false");
}

std::string UpgradePrePayOrderRequest::getIoMaxSpec() const {
  return ioMaxSpec_;
}

void UpgradePrePayOrderRequest::setIoMaxSpec(const std::string &ioMaxSpec) {
  ioMaxSpec_ = ioMaxSpec;
  setParameter(std::string("IoMaxSpec"), ioMaxSpec);
}

int UpgradePrePayOrderRequest::getTopicQuota() const {
  return topicQuota_;
}

void UpgradePrePayOrderRequest::setTopicQuota(int topicQuota) {
  topicQuota_ = topicQuota;
  setParameter(std::string("TopicQuota"), std::to_string(topicQuota));
}

int UpgradePrePayOrderRequest::getEipMax() const {
  return eipMax_;
}

void UpgradePrePayOrderRequest::setEipMax(int eipMax) {
  eipMax_ = eipMax;
  setParameter(std::string("EipMax"), std::to_string(eipMax));
}

std::string UpgradePrePayOrderRequest::getSpecType() const {
  return specType_;
}

void UpgradePrePayOrderRequest::setSpecType(const std::string &specType) {
  specType_ = specType;
  setParameter(std::string("SpecType"), specType);
}

std::string UpgradePrePayOrderRequest::getInstanceId() const {
  return instanceId_;
}

void UpgradePrePayOrderRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpgradePrePayOrderRequest::getRegionId() const {
  return regionId_;
}

void UpgradePrePayOrderRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpgradePrePayOrderRequest::getPartitionNum() const {
  return partitionNum_;
}

void UpgradePrePayOrderRequest::setPartitionNum(int partitionNum) {
  partitionNum_ = partitionNum;
  setParameter(std::string("PartitionNum"), std::to_string(partitionNum));
}

