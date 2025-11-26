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

#include <alibabacloud/outboundbot/model/ListIntentionsRequest.h>

using AlibabaCloud::OutboundBot::Model::ListIntentionsRequest;

ListIntentionsRequest::ListIntentionsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListIntentions") {
  setMethod(HttpRequest::Method::Post);
}

ListIntentionsRequest::~ListIntentionsRequest() {}

std::string ListIntentionsRequest::getUserNick() const {
  return userNick_;
}

void ListIntentionsRequest::setUserNick(const std::string &userNick) {
  userNick_ = userNick;
  setParameter(std::string("UserNick"), userNick);
}

long ListIntentionsRequest::getIntentId() const {
  return intentId_;
}

void ListIntentionsRequest::setIntentId(long intentId) {
  intentId_ = intentId;
  setParameter(std::string("IntentId"), std::to_string(intentId));
}

long ListIntentionsRequest::getAnnotationMissionDataSourceType() const {
  return annotationMissionDataSourceType_;
}

void ListIntentionsRequest::setAnnotationMissionDataSourceType(long annotationMissionDataSourceType) {
  annotationMissionDataSourceType_ = annotationMissionDataSourceType;
  setParameter(std::string("AnnotationMissionDataSourceType"), std::to_string(annotationMissionDataSourceType));
}

long ListIntentionsRequest::getEnvironment() const {
  return environment_;
}

void ListIntentionsRequest::setEnvironment(long environment) {
  environment_ = environment;
  setParameter(std::string("Environment"), std::to_string(environment));
}

std::string ListIntentionsRequest::getScriptId() const {
  return scriptId_;
}

void ListIntentionsRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ListIntentionsRequest::getInstanceId() const {
  return instanceId_;
}

void ListIntentionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListIntentionsRequest::getPageSize() const {
  return pageSize_;
}

void ListIntentionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListIntentionsRequest::getPageIndex() const {
  return pageIndex_;
}

void ListIntentionsRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

std::string ListIntentionsRequest::getBotId() const {
  return botId_;
}

void ListIntentionsRequest::setBotId(const std::string &botId) {
  botId_ = botId;
  setParameter(std::string("BotId"), botId);
}

