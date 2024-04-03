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

#include <alibabacloud/alikafka/model/UpdateTopicConfigRequest.h>

using AlibabaCloud::Alikafka::Model::UpdateTopicConfigRequest;

UpdateTopicConfigRequest::UpdateTopicConfigRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "UpdateTopicConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTopicConfigRequest::~UpdateTopicConfigRequest() {}

std::string UpdateTopicConfigRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateTopicConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateTopicConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateTopicConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateTopicConfigRequest::getTopic() const {
  return topic_;
}

void UpdateTopicConfigRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

std::string UpdateTopicConfigRequest::getConfig() const {
  return config_;
}

void UpdateTopicConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

std::string UpdateTopicConfigRequest::getValue() const {
  return value_;
}

void UpdateTopicConfigRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

