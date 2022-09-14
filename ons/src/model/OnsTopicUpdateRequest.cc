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

#include <alibabacloud/ons/model/OnsTopicUpdateRequest.h>

using AlibabaCloud::Ons::Model::OnsTopicUpdateRequest;

OnsTopicUpdateRequest::OnsTopicUpdateRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsTopicUpdate") {
  setMethod(HttpRequest::Method::Post);
}

OnsTopicUpdateRequest::~OnsTopicUpdateRequest() {}

int OnsTopicUpdateRequest::getPerm() const {
  return perm_;
}

void OnsTopicUpdateRequest::setPerm(int perm) {
  perm_ = perm;
  setParameter(std::string("Perm"), std::to_string(perm));
}

std::string OnsTopicUpdateRequest::getInstanceId() const {
  return instanceId_;
}

void OnsTopicUpdateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OnsTopicUpdateRequest::getTopic() const {
  return topic_;
}

void OnsTopicUpdateRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

