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

#include <alibabacloud/alikafka/model/UpdateConsumerOffsetRequest.h>

using AlibabaCloud::Alikafka::Model::UpdateConsumerOffsetRequest;

UpdateConsumerOffsetRequest::UpdateConsumerOffsetRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "UpdateConsumerOffset") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConsumerOffsetRequest::~UpdateConsumerOffsetRequest() {}

std::string UpdateConsumerOffsetRequest::getConsumerId() const {
  return consumerId_;
}

void UpdateConsumerOffsetRequest::setConsumerId(const std::string &consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), consumerId);
}

std::string UpdateConsumerOffsetRequest::getResetType() const {
  return resetType_;
}

void UpdateConsumerOffsetRequest::setResetType(const std::string &resetType) {
  resetType_ = resetType;
  setParameter(std::string("ResetType"), resetType);
}

std::string UpdateConsumerOffsetRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateConsumerOffsetRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateConsumerOffsetRequest::getRegionId() const {
  return regionId_;
}

void UpdateConsumerOffsetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<UpdateConsumerOffsetRequest::Offsets> UpdateConsumerOffsetRequest::getOffsets() const {
  return offsets_;
}

void UpdateConsumerOffsetRequest::setOffsets(const std::vector<UpdateConsumerOffsetRequest::Offsets> &offsets) {
  offsets_ = offsets;
  for(int dep1 = 0; dep1 != offsets.size(); dep1++) {
    setParameter(std::string("Offsets") + "." + std::to_string(dep1 + 1) + ".Partition", std::to_string(offsets[dep1].partition));
    setParameter(std::string("Offsets") + "." + std::to_string(dep1 + 1) + ".Offset", std::to_string(offsets[dep1].offset));
  }
}

std::string UpdateConsumerOffsetRequest::getTopic() const {
  return topic_;
}

void UpdateConsumerOffsetRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

std::string UpdateConsumerOffsetRequest::getTime() const {
  return time_;
}

void UpdateConsumerOffsetRequest::setTime(const std::string &time) {
  time_ = time;
  setParameter(std::string("Time"), time);
}

