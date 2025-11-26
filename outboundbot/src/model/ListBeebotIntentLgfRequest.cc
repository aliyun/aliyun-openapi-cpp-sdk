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

#include <alibabacloud/outboundbot/model/ListBeebotIntentLgfRequest.h>

using AlibabaCloud::OutboundBot::Model::ListBeebotIntentLgfRequest;

ListBeebotIntentLgfRequest::ListBeebotIntentLgfRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListBeebotIntentLgf") {
  setMethod(HttpRequest::Method::Post);
}

ListBeebotIntentLgfRequest::~ListBeebotIntentLgfRequest() {}

std::string ListBeebotIntentLgfRequest::getIntentId() const {
  return intentId_;
}

void ListBeebotIntentLgfRequest::setIntentId(const std::string &intentId) {
  intentId_ = intentId;
  setParameter(std::string("IntentId"), intentId);
}

int ListBeebotIntentLgfRequest::getPageNumber() const {
  return pageNumber_;
}

void ListBeebotIntentLgfRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListBeebotIntentLgfRequest::getLgfText() const {
  return lgfText_;
}

void ListBeebotIntentLgfRequest::setLgfText(const std::string &lgfText) {
  lgfText_ = lgfText;
  setParameter(std::string("LgfText"), lgfText);
}

std::string ListBeebotIntentLgfRequest::getScriptId() const {
  return scriptId_;
}

void ListBeebotIntentLgfRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ListBeebotIntentLgfRequest::getInstanceId() const {
  return instanceId_;
}

void ListBeebotIntentLgfRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListBeebotIntentLgfRequest::getPageSize() const {
  return pageSize_;
}

void ListBeebotIntentLgfRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

