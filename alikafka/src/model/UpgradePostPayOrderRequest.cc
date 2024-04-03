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

#include <alibabacloud/alikafka/model/UpgradePostPayOrderRequest.h>

using AlibabaCloud::Alikafka::Model::UpgradePostPayOrderRequest;

UpgradePostPayOrderRequest::UpgradePostPayOrderRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "UpgradePostPayOrder") {
  setMethod(HttpRequest::Method::Post);
}

UpgradePostPayOrderRequest::~UpgradePostPayOrderRequest() {}

UpgradePostPayOrderRequest::ServerlessConfig UpgradePostPayOrderRequest::getServerlessConfig() const {
  return serverlessConfig_;
}

void UpgradePostPayOrderRequest::setServerlessConfig(const UpgradePostPayOrderRequest::ServerlessConfig &serverlessConfig) {
  serverlessConfig_ = serverlessConfig;
  setParameter(std::string("ServerlessConfig") + ".ReservedPublishCapacity", std::to_string(serverlessConfig.reservedPublishCapacity));
  setParameter(std::string("ServerlessConfig") + ".ReservedSubscribeCapacity", std::to_string(serverlessConfig.reservedSubscribeCapacity));
}

int UpgradePostPayOrderRequest::getDiskSize() const {
  return diskSize_;
}

void UpgradePostPayOrderRequest::setDiskSize(int diskSize) {
  diskSize_ = diskSize;
  setParameter(std::string("DiskSize"), std::to_string(diskSize));
}

int UpgradePostPayOrderRequest::getIoMax() const {
  return ioMax_;
}

void UpgradePostPayOrderRequest::setIoMax(int ioMax) {
  ioMax_ = ioMax;
  setParameter(std::string("IoMax"), std::to_string(ioMax));
}

bool UpgradePostPayOrderRequest::getEipModel() const {
  return eipModel_;
}

void UpgradePostPayOrderRequest::setEipModel(bool eipModel) {
  eipModel_ = eipModel;
  setParameter(std::string("EipModel"), eipModel ? "true" : "false");
}

std::string UpgradePostPayOrderRequest::getIoMaxSpec() const {
  return ioMaxSpec_;
}

void UpgradePostPayOrderRequest::setIoMaxSpec(const std::string &ioMaxSpec) {
  ioMaxSpec_ = ioMaxSpec;
  setParameter(std::string("IoMaxSpec"), ioMaxSpec);
}

int UpgradePostPayOrderRequest::getTopicQuota() const {
  return topicQuota_;
}

void UpgradePostPayOrderRequest::setTopicQuota(int topicQuota) {
  topicQuota_ = topicQuota;
  setParameter(std::string("TopicQuota"), std::to_string(topicQuota));
}

int UpgradePostPayOrderRequest::getEipMax() const {
  return eipMax_;
}

void UpgradePostPayOrderRequest::setEipMax(int eipMax) {
  eipMax_ = eipMax;
  setParameter(std::string("EipMax"), std::to_string(eipMax));
}

std::string UpgradePostPayOrderRequest::getSpecType() const {
  return specType_;
}

void UpgradePostPayOrderRequest::setSpecType(const std::string &specType) {
  specType_ = specType;
  setParameter(std::string("SpecType"), specType);
}

std::string UpgradePostPayOrderRequest::getInstanceId() const {
  return instanceId_;
}

void UpgradePostPayOrderRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpgradePostPayOrderRequest::getRegionId() const {
  return regionId_;
}

void UpgradePostPayOrderRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpgradePostPayOrderRequest::getPartitionNum() const {
  return partitionNum_;
}

void UpgradePostPayOrderRequest::setPartitionNum(int partitionNum) {
  partitionNum_ = partitionNum;
  setParameter(std::string("PartitionNum"), std::to_string(partitionNum));
}

