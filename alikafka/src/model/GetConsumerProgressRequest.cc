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

#include <alibabacloud/alikafka/model/GetConsumerProgressRequest.h>

using AlibabaCloud::Alikafka::Model::GetConsumerProgressRequest;

GetConsumerProgressRequest::GetConsumerProgressRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "GetConsumerProgress") {
  setMethod(HttpRequest::Method::Post);
}

GetConsumerProgressRequest::~GetConsumerProgressRequest() {}

std::string GetConsumerProgressRequest::getConsumerId() const {
  return consumerId_;
}

void GetConsumerProgressRequest::setConsumerId(const std::string &consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), consumerId);
}

std::string GetConsumerProgressRequest::getInstanceId() const {
  return instanceId_;
}

void GetConsumerProgressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetConsumerProgressRequest::getRegionId() const {
  return regionId_;
}

void GetConsumerProgressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

