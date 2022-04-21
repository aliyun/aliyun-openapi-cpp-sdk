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

#include <alibabacloud/outboundbot/model/SubmitScriptReviewRequest.h>

using AlibabaCloud::OutboundBot::Model::SubmitScriptReviewRequest;

SubmitScriptReviewRequest::SubmitScriptReviewRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SubmitScriptReview") {
  setMethod(HttpRequest::Method::Post);
}

SubmitScriptReviewRequest::~SubmitScriptReviewRequest() {}

std::string SubmitScriptReviewRequest::getDescription() const {
  return description_;
}

void SubmitScriptReviewRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SubmitScriptReviewRequest::getScriptId() const {
  return scriptId_;
}

void SubmitScriptReviewRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string SubmitScriptReviewRequest::getInstanceId() const {
  return instanceId_;
}

void SubmitScriptReviewRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

