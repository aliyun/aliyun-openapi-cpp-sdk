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

#include <alibabacloud/alikafka/model/CreatePrePayOrderRequest.h>

using AlibabaCloud::Alikafka::Model::CreatePrePayOrderRequest;

CreatePrePayOrderRequest::CreatePrePayOrderRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "CreatePrePayOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreatePrePayOrderRequest::~CreatePrePayOrderRequest() {}

int CreatePrePayOrderRequest::getIoMax() const {
  return ioMax_;
}

void CreatePrePayOrderRequest::setIoMax(int ioMax) {
  ioMax_ = ioMax;
  setParameter(std::string("IoMax"), std::to_string(ioMax));
}

int CreatePrePayOrderRequest::getEipMax() const {
  return eipMax_;
}

void CreatePrePayOrderRequest::setEipMax(int eipMax) {
  eipMax_ = eipMax;
  setParameter(std::string("EipMax"), std::to_string(eipMax));
}

int CreatePrePayOrderRequest::getDuration() const {
  return duration_;
}

void CreatePrePayOrderRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string CreatePrePayOrderRequest::getSpecType() const {
  return specType_;
}

void CreatePrePayOrderRequest::setSpecType(const std::string &specType) {
  specType_ = specType;
  setParameter(std::string("SpecType"), specType);
}

std::string CreatePrePayOrderRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreatePrePayOrderRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreatePrePayOrderRequest::getRegionId() const {
  return regionId_;
}

void CreatePrePayOrderRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

CreatePrePayOrderRequest::ConfluentConfig CreatePrePayOrderRequest::getConfluentConfig() const {
  return confluentConfig_;
}

void CreatePrePayOrderRequest::setConfluentConfig(const CreatePrePayOrderRequest::ConfluentConfig &confluentConfig) {
  confluentConfig_ = confluentConfig;
  setParameter(std::string("ConfluentConfig") + ".KsqlStorage", std::to_string(confluentConfig.ksqlStorage));
  setParameter(std::string("ConfluentConfig") + ".ControlCenterStorage", std::to_string(confluentConfig.controlCenterStorage));
  setParameter(std::string("ConfluentConfig") + ".KafkaRestProxyReplica", std::to_string(confluentConfig.kafkaRestProxyReplica));
  setParameter(std::string("ConfluentConfig") + ".ZooKeeperReplica", std::to_string(confluentConfig.zooKeeperReplica));
  setParameter(std::string("ConfluentConfig") + ".ConnectCU", std::to_string(confluentConfig.connectCU));
  setParameter(std::string("ConfluentConfig") + ".KafkaReplica", std::to_string(confluentConfig.kafkaReplica));
  setParameter(std::string("ConfluentConfig") + ".SchemaRegistryReplica", std::to_string(confluentConfig.schemaRegistryReplica));
  setParameter(std::string("ConfluentConfig") + ".KafkaCU", std::to_string(confluentConfig.kafkaCU));
  setParameter(std::string("ConfluentConfig") + ".ConnectReplica", std::to_string(confluentConfig.connectReplica));
  setParameter(std::string("ConfluentConfig") + ".ControlCenterCU", std::to_string(confluentConfig.controlCenterCU));
  setParameter(std::string("ConfluentConfig") + ".KsqlReplica", std::to_string(confluentConfig.ksqlReplica));
  setParameter(std::string("ConfluentConfig") + ".ControlCenterReplica", std::to_string(confluentConfig.controlCenterReplica));
  setParameter(std::string("ConfluentConfig") + ".KafkaStorage", std::to_string(confluentConfig.kafkaStorage));
  setParameter(std::string("ConfluentConfig") + ".ZooKeeperStorage", std::to_string(confluentConfig.zooKeeperStorage));
  setParameter(std::string("ConfluentConfig") + ".KsqlCU", std::to_string(confluentConfig.ksqlCU));
  setParameter(std::string("ConfluentConfig") + ".SchemaRegistryCU", std::to_string(confluentConfig.schemaRegistryCU));
  setParameter(std::string("ConfluentConfig") + ".ZooKeeperCU", std::to_string(confluentConfig.zooKeeperCU));
  setParameter(std::string("ConfluentConfig") + ".KafkaRestProxyCU", std::to_string(confluentConfig.kafkaRestProxyCU));
}

std::vector<CreatePrePayOrderRequest::Tag> CreatePrePayOrderRequest::getTag() const {
  return tag_;
}

void CreatePrePayOrderRequest::setTag(const std::vector<CreatePrePayOrderRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

int CreatePrePayOrderRequest::getPartitionNum() const {
  return partitionNum_;
}

void CreatePrePayOrderRequest::setPartitionNum(int partitionNum) {
  partitionNum_ = partitionNum;
  setParameter(std::string("PartitionNum"), std::to_string(partitionNum));
}

int CreatePrePayOrderRequest::getPaidType() const {
  return paidType_;
}

void CreatePrePayOrderRequest::setPaidType(int paidType) {
  paidType_ = paidType;
  setParameter(std::string("PaidType"), std::to_string(paidType));
}

int CreatePrePayOrderRequest::getDiskSize() const {
  return diskSize_;
}

void CreatePrePayOrderRequest::setDiskSize(int diskSize) {
  diskSize_ = diskSize;
  setParameter(std::string("DiskSize"), std::to_string(diskSize));
}

std::string CreatePrePayOrderRequest::getIoMaxSpec() const {
  return ioMaxSpec_;
}

void CreatePrePayOrderRequest::setIoMaxSpec(const std::string &ioMaxSpec) {
  ioMaxSpec_ = ioMaxSpec;
  setParameter(std::string("IoMaxSpec"), ioMaxSpec);
}

std::string CreatePrePayOrderRequest::getDiskType() const {
  return diskType_;
}

void CreatePrePayOrderRequest::setDiskType(const std::string &diskType) {
  diskType_ = diskType;
  setParameter(std::string("DiskType"), diskType);
}

int CreatePrePayOrderRequest::getTopicQuota() const {
  return topicQuota_;
}

void CreatePrePayOrderRequest::setTopicQuota(int topicQuota) {
  topicQuota_ = topicQuota;
  setParameter(std::string("TopicQuota"), std::to_string(topicQuota));
}

int CreatePrePayOrderRequest::getDeployType() const {
  return deployType_;
}

void CreatePrePayOrderRequest::setDeployType(int deployType) {
  deployType_ = deployType;
  setParameter(std::string("DeployType"), std::to_string(deployType));
}

