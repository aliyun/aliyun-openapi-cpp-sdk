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

#include <alibabacloud/alikafka/model/EnableAutoTopicCreationRequest.h>

using AlibabaCloud::Alikafka::Model::EnableAutoTopicCreationRequest;

EnableAutoTopicCreationRequest::EnableAutoTopicCreationRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "EnableAutoTopicCreation") {
  setMethod(HttpRequest::Method::Post);
}

EnableAutoTopicCreationRequest::~EnableAutoTopicCreationRequest() {}

std::string EnableAutoTopicCreationRequest::getInstanceId() const {
  return instanceId_;
}

void EnableAutoTopicCreationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string EnableAutoTopicCreationRequest::getOperate() const {
  return operate_;
}

void EnableAutoTopicCreationRequest::setOperate(const std::string &operate) {
  operate_ = operate;
  setParameter(std::string("Operate"), operate);
}

std::string EnableAutoTopicCreationRequest::getRegionId() const {
  return regionId_;
}

void EnableAutoTopicCreationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long EnableAutoTopicCreationRequest::getPartitionNum() const {
  return partitionNum_;
}

void EnableAutoTopicCreationRequest::setPartitionNum(long partitionNum) {
  partitionNum_ = partitionNum;
  setParameter(std::string("PartitionNum"), std::to_string(partitionNum));
}

