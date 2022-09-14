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

#include <alibabacloud/ons/model/OnsTraceQueryByMsgIdRequest.h>

using AlibabaCloud::Ons::Model::OnsTraceQueryByMsgIdRequest;

OnsTraceQueryByMsgIdRequest::OnsTraceQueryByMsgIdRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsTraceQueryByMsgId") {
  setMethod(HttpRequest::Method::Post);
}

OnsTraceQueryByMsgIdRequest::~OnsTraceQueryByMsgIdRequest() {}

std::string OnsTraceQueryByMsgIdRequest::getMsgId() const {
  return msgId_;
}

void OnsTraceQueryByMsgIdRequest::setMsgId(const std::string &msgId) {
  msgId_ = msgId;
  setParameter(std::string("MsgId"), msgId);
}

long OnsTraceQueryByMsgIdRequest::getEndTime() const {
  return endTime_;
}

void OnsTraceQueryByMsgIdRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long OnsTraceQueryByMsgIdRequest::getBeginTime() const {
  return beginTime_;
}

void OnsTraceQueryByMsgIdRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string OnsTraceQueryByMsgIdRequest::getInstanceId() const {
  return instanceId_;
}

void OnsTraceQueryByMsgIdRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OnsTraceQueryByMsgIdRequest::getTopic() const {
  return topic_;
}

void OnsTraceQueryByMsgIdRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

