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

#include <alibabacloud/ons/model/OnsTopicListRequest.h>

using AlibabaCloud::Ons::Model::OnsTopicListRequest;

OnsTopicListRequest::OnsTopicListRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsTopicList") {
  setMethod(HttpRequest::Method::Post);
}

OnsTopicListRequest::~OnsTopicListRequest() {}

std::string OnsTopicListRequest::getUserId() const {
  return userId_;
}

void OnsTopicListRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string OnsTopicListRequest::getInstanceId() const {
  return instanceId_;
}

void OnsTopicListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OnsTopicListRequest::getTopic() const {
  return topic_;
}

void OnsTopicListRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

std::vector<OnsTopicListRequest::Tag> OnsTopicListRequest::getTag() const {
  return tag_;
}

void OnsTopicListRequest::setTag(const std::vector<OnsTopicListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

