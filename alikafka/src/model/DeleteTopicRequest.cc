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

#include <alibabacloud/alikafka/model/DeleteTopicRequest.h>

using AlibabaCloud::Alikafka::Model::DeleteTopicRequest;

DeleteTopicRequest::DeleteTopicRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "DeleteTopic") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTopicRequest::~DeleteTopicRequest() {}

std::string DeleteTopicRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteTopicRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteTopicRequest::getRegionId() const {
  return regionId_;
}

void DeleteTopicRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteTopicRequest::getTopic() const {
  return topic_;
}

void DeleteTopicRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

