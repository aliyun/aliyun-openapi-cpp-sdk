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

#include <alibabacloud/outboundbot/model/DescribeGlobalQuestionRequest.h>

using AlibabaCloud::OutboundBot::Model::DescribeGlobalQuestionRequest;

DescribeGlobalQuestionRequest::DescribeGlobalQuestionRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DescribeGlobalQuestion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGlobalQuestionRequest::~DescribeGlobalQuestionRequest() {}

std::string DescribeGlobalQuestionRequest::getGlobalQuestionId() const {
  return globalQuestionId_;
}

void DescribeGlobalQuestionRequest::setGlobalQuestionId(const std::string &globalQuestionId) {
  globalQuestionId_ = globalQuestionId;
  setParameter(std::string("GlobalQuestionId"), globalQuestionId);
}

std::string DescribeGlobalQuestionRequest::getScriptId() const {
  return scriptId_;
}

void DescribeGlobalQuestionRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string DescribeGlobalQuestionRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeGlobalQuestionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

