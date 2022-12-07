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

#include <alibabacloud/alikafka/model/DeleteConsumerGroupRequest.h>

using AlibabaCloud::Alikafka::Model::DeleteConsumerGroupRequest;

DeleteConsumerGroupRequest::DeleteConsumerGroupRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "DeleteConsumerGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteConsumerGroupRequest::~DeleteConsumerGroupRequest() {}

std::string DeleteConsumerGroupRequest::getConsumerId() const {
  return consumerId_;
}

void DeleteConsumerGroupRequest::setConsumerId(const std::string &consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), consumerId);
}

std::string DeleteConsumerGroupRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteConsumerGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteConsumerGroupRequest::getRegionId() const {
  return regionId_;
}

void DeleteConsumerGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

