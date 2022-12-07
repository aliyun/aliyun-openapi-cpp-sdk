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

#include <alibabacloud/alikafka/model/CreateTopicRequest.h>

using AlibabaCloud::Alikafka::Model::CreateTopicRequest;

CreateTopicRequest::CreateTopicRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "CreateTopic") {
  setMethod(HttpRequest::Method::Post);
}

CreateTopicRequest::~CreateTopicRequest() {}

std::string CreateTopicRequest::getRemark() const {
  return remark_;
}

void CreateTopicRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

long CreateTopicRequest::getReplicationFactor() const {
  return replicationFactor_;
}

void CreateTopicRequest::setReplicationFactor(long replicationFactor) {
  replicationFactor_ = replicationFactor;
  setParameter(std::string("ReplicationFactor"), std::to_string(replicationFactor));
}

long CreateTopicRequest::getMinInsyncReplicas() const {
  return minInsyncReplicas_;
}

void CreateTopicRequest::setMinInsyncReplicas(long minInsyncReplicas) {
  minInsyncReplicas_ = minInsyncReplicas;
  setParameter(std::string("MinInsyncReplicas"), std::to_string(minInsyncReplicas));
}

std::string CreateTopicRequest::getInstanceId() const {
  return instanceId_;
}

void CreateTopicRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateTopicRequest::getRegionId() const {
  return regionId_;
}

void CreateTopicRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTopicRequest::getTopic() const {
  return topic_;
}

void CreateTopicRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

bool CreateTopicRequest::getCompactTopic() const {
  return compactTopic_;
}

void CreateTopicRequest::setCompactTopic(bool compactTopic) {
  compactTopic_ = compactTopic;
  setParameter(std::string("CompactTopic"), compactTopic ? "true" : "false");
}

std::vector<CreateTopicRequest::Tag> CreateTopicRequest::getTag() const {
  return tag_;
}

void CreateTopicRequest::setTag(const std::vector<CreateTopicRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateTopicRequest::getPartitionNum() const {
  return partitionNum_;
}

void CreateTopicRequest::setPartitionNum(const std::string &partitionNum) {
  partitionNum_ = partitionNum;
  setParameter(std::string("PartitionNum"), partitionNum);
}

std::string CreateTopicRequest::getConfig() const {
  return config_;
}

void CreateTopicRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

bool CreateTopicRequest::getLocalTopic() const {
  return localTopic_;
}

void CreateTopicRequest::setLocalTopic(bool localTopic) {
  localTopic_ = localTopic;
  setParameter(std::string("LocalTopic"), localTopic ? "true" : "false");
}

