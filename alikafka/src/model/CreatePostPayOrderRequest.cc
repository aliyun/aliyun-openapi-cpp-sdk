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

#include <alibabacloud/alikafka/model/CreatePostPayOrderRequest.h>

using AlibabaCloud::Alikafka::Model::CreatePostPayOrderRequest;

CreatePostPayOrderRequest::CreatePostPayOrderRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "CreatePostPayOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreatePostPayOrderRequest::~CreatePostPayOrderRequest() {}

int CreatePostPayOrderRequest::getIoMax() const {
  return ioMax_;
}

void CreatePostPayOrderRequest::setIoMax(int ioMax) {
  ioMax_ = ioMax;
  setParameter(std::string("IoMax"), std::to_string(ioMax));
}

int CreatePostPayOrderRequest::getEipMax() const {
  return eipMax_;
}

void CreatePostPayOrderRequest::setEipMax(int eipMax) {
  eipMax_ = eipMax;
  setParameter(std::string("EipMax"), std::to_string(eipMax));
}

std::string CreatePostPayOrderRequest::getSpecType() const {
  return specType_;
}

void CreatePostPayOrderRequest::setSpecType(const std::string &specType) {
  specType_ = specType;
  setParameter(std::string("SpecType"), specType);
}

std::string CreatePostPayOrderRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreatePostPayOrderRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreatePostPayOrderRequest::getRegionId() const {
  return regionId_;
}

void CreatePostPayOrderRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreatePostPayOrderRequest::Tag> CreatePostPayOrderRequest::getTag() const {
  return tag_;
}

void CreatePostPayOrderRequest::setTag(const std::vector<CreatePostPayOrderRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

int CreatePostPayOrderRequest::getPartitionNum() const {
  return partitionNum_;
}

void CreatePostPayOrderRequest::setPartitionNum(int partitionNum) {
  partitionNum_ = partitionNum;
  setParameter(std::string("PartitionNum"), std::to_string(partitionNum));
}

int CreatePostPayOrderRequest::getPaidType() const {
  return paidType_;
}

void CreatePostPayOrderRequest::setPaidType(int paidType) {
  paidType_ = paidType;
  setParameter(std::string("PaidType"), std::to_string(paidType));
}

int CreatePostPayOrderRequest::getDiskSize() const {
  return diskSize_;
}

void CreatePostPayOrderRequest::setDiskSize(int diskSize) {
  diskSize_ = diskSize;
  setParameter(std::string("DiskSize"), std::to_string(diskSize));
}

std::string CreatePostPayOrderRequest::getIoMaxSpec() const {
  return ioMaxSpec_;
}

void CreatePostPayOrderRequest::setIoMaxSpec(const std::string &ioMaxSpec) {
  ioMaxSpec_ = ioMaxSpec;
  setParameter(std::string("IoMaxSpec"), ioMaxSpec);
}

std::string CreatePostPayOrderRequest::getDiskType() const {
  return diskType_;
}

void CreatePostPayOrderRequest::setDiskType(const std::string &diskType) {
  diskType_ = diskType;
  setParameter(std::string("DiskType"), diskType);
}

int CreatePostPayOrderRequest::getTopicQuota() const {
  return topicQuota_;
}

void CreatePostPayOrderRequest::setTopicQuota(int topicQuota) {
  topicQuota_ = topicQuota;
  setParameter(std::string("TopicQuota"), std::to_string(topicQuota));
}

int CreatePostPayOrderRequest::getDeployType() const {
  return deployType_;
}

void CreatePostPayOrderRequest::setDeployType(int deployType) {
  deployType_ = deployType;
  setParameter(std::string("DeployType"), std::to_string(deployType));
}

