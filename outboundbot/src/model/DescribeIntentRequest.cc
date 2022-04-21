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

#include <alibabacloud/outboundbot/model/DescribeIntentRequest.h>

using AlibabaCloud::OutboundBot::Model::DescribeIntentRequest;

DescribeIntentRequest::DescribeIntentRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DescribeIntent") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIntentRequest::~DescribeIntentRequest() {}

std::string DescribeIntentRequest::getIntentId() const {
  return intentId_;
}

void DescribeIntentRequest::setIntentId(const std::string &intentId) {
  intentId_ = intentId;
  setParameter(std::string("IntentId"), intentId);
}

std::string DescribeIntentRequest::getScriptId() const {
  return scriptId_;
}

void DescribeIntentRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string DescribeIntentRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeIntentRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

