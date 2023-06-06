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

#include <alibabacloud/sas/model/CreateOrUpdateDingTalkRequest.h>

using AlibabaCloud::Sas::Model::CreateOrUpdateDingTalkRequest;

CreateOrUpdateDingTalkRequest::CreateOrUpdateDingTalkRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateOrUpdateDingTalk") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateDingTalkRequest::~CreateOrUpdateDingTalkRequest() {}

std::string CreateOrUpdateDingTalkRequest::getRuleActionName() const {
  return ruleActionName_;
}

void CreateOrUpdateDingTalkRequest::setRuleActionName(const std::string &ruleActionName) {
  ruleActionName_ = ruleActionName;
  setParameter(std::string("RuleActionName"), ruleActionName);
}

std::string CreateOrUpdateDingTalkRequest::getGroupIdList() const {
  return groupIdList_;
}

void CreateOrUpdateDingTalkRequest::setGroupIdList(const std::string &groupIdList) {
  groupIdList_ = groupIdList;
  setParameter(std::string("GroupIdList"), groupIdList);
}

std::string CreateOrUpdateDingTalkRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateOrUpdateDingTalkRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long CreateOrUpdateDingTalkRequest::getId() const {
  return id_;
}

void CreateOrUpdateDingTalkRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string CreateOrUpdateDingTalkRequest::getSendUrl() const {
  return sendUrl_;
}

void CreateOrUpdateDingTalkRequest::setSendUrl(const std::string &sendUrl) {
  sendUrl_ = sendUrl;
  setParameter(std::string("SendUrl"), sendUrl);
}

long CreateOrUpdateDingTalkRequest::getIntervalTime() const {
  return intervalTime_;
}

void CreateOrUpdateDingTalkRequest::setIntervalTime(long intervalTime) {
  intervalTime_ = intervalTime;
  setParameter(std::string("IntervalTime"), std::to_string(intervalTime));
}

std::string CreateOrUpdateDingTalkRequest::getDingTalkLang() const {
  return dingTalkLang_;
}

void CreateOrUpdateDingTalkRequest::setDingTalkLang(const std::string &dingTalkLang) {
  dingTalkLang_ = dingTalkLang;
  setParameter(std::string("DingTalkLang"), dingTalkLang);
}

std::string CreateOrUpdateDingTalkRequest::getConfigList() const {
  return configList_;
}

void CreateOrUpdateDingTalkRequest::setConfigList(const std::string &configList) {
  configList_ = configList;
  setParameter(std::string("ConfigList"), configList);
}

