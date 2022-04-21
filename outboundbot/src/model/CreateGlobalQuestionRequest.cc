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

#include <alibabacloud/outboundbot/model/CreateGlobalQuestionRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateGlobalQuestionRequest;

CreateGlobalQuestionRequest::CreateGlobalQuestionRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateGlobalQuestion") {
  setMethod(HttpRequest::Method::Post);
}

CreateGlobalQuestionRequest::~CreateGlobalQuestionRequest() {}

std::string CreateGlobalQuestionRequest::getGlobalQuestionName() const {
  return globalQuestionName_;
}

void CreateGlobalQuestionRequest::setGlobalQuestionName(const std::string &globalQuestionName) {
  globalQuestionName_ = globalQuestionName;
  setParameter(std::string("GlobalQuestionName"), globalQuestionName);
}

std::string CreateGlobalQuestionRequest::getQuestions() const {
  return questions_;
}

void CreateGlobalQuestionRequest::setQuestions(const std::string &questions) {
  questions_ = questions;
  setParameter(std::string("Questions"), questions);
}

std::string CreateGlobalQuestionRequest::getAnswers() const {
  return answers_;
}

void CreateGlobalQuestionRequest::setAnswers(const std::string &answers) {
  answers_ = answers;
  setParameter(std::string("Answers"), answers);
}

std::string CreateGlobalQuestionRequest::getScriptId() const {
  return scriptId_;
}

void CreateGlobalQuestionRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateGlobalQuestionRequest::getInstanceId() const {
  return instanceId_;
}

void CreateGlobalQuestionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateGlobalQuestionRequest::getGlobalQuestionType() const {
  return globalQuestionType_;
}

void CreateGlobalQuestionRequest::setGlobalQuestionType(const std::string &globalQuestionType) {
  globalQuestionType_ = globalQuestionType;
  setParameter(std::string("GlobalQuestionType"), globalQuestionType);
}

