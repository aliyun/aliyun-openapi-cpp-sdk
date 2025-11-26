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

#include <alibabacloud/outboundbot/model/CreateAnnotationMissionRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateAnnotationMissionRequest;

CreateAnnotationMissionRequest::CreateAnnotationMissionRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateAnnotationMission") {
  setMethod(HttpRequest::Method::Post);
}

CreateAnnotationMissionRequest::~CreateAnnotationMissionRequest() {}

std::string CreateAnnotationMissionRequest::getSessionEndReasonFilterListJsonString() const {
  return sessionEndReasonFilterListJsonString_;
}

void CreateAnnotationMissionRequest::setSessionEndReasonFilterListJsonString(const std::string &sessionEndReasonFilterListJsonString) {
  sessionEndReasonFilterListJsonString_ = sessionEndReasonFilterListJsonString;
  setParameter(std::string("SessionEndReasonFilterListJsonString"), sessionEndReasonFilterListJsonString);
}

int CreateAnnotationMissionRequest::getSamplingType() const {
  return samplingType_;
}

void CreateAnnotationMissionRequest::setSamplingType(int samplingType) {
  samplingType_ = samplingType;
  setParameter(std::string("SamplingType"), std::to_string(samplingType));
}

std::vector<int> CreateAnnotationMissionRequest::getSessionEndReasonFilterList() const {
  return sessionEndReasonFilterList_;
}

void CreateAnnotationMissionRequest::setSessionEndReasonFilterList(const std::vector<int> &sessionEndReasonFilterList) {
  sessionEndReasonFilterList_ = sessionEndReasonFilterList;
}

int CreateAnnotationMissionRequest::getAnnotationMissionDataSourceType() const {
  return annotationMissionDataSourceType_;
}

void CreateAnnotationMissionRequest::setAnnotationMissionDataSourceType(int annotationMissionDataSourceType) {
  annotationMissionDataSourceType_ = annotationMissionDataSourceType;
  setParameter(std::string("AnnotationMissionDataSourceType"), std::to_string(annotationMissionDataSourceType));
}

std::string CreateAnnotationMissionRequest::getScriptId() const {
  return scriptId_;
}

void CreateAnnotationMissionRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateAnnotationMissionRequest::getAnnotationMissionDebugDataSourceListJsonString() const {
  return annotationMissionDebugDataSourceListJsonString_;
}

void CreateAnnotationMissionRequest::setAnnotationMissionDebugDataSourceListJsonString(const std::string &annotationMissionDebugDataSourceListJsonString) {
  annotationMissionDebugDataSourceListJsonString_ = annotationMissionDebugDataSourceListJsonString;
  setParameter(std::string("AnnotationMissionDebugDataSourceListJsonString"), annotationMissionDebugDataSourceListJsonString);
}

long CreateAnnotationMissionRequest::getConversationTimeEndFilter() const {
  return conversationTimeEndFilter_;
}

void CreateAnnotationMissionRequest::setConversationTimeEndFilter(long conversationTimeEndFilter) {
  conversationTimeEndFilter_ = conversationTimeEndFilter;
  setParameter(std::string("ConversationTimeEndFilter"), std::to_string(conversationTimeEndFilter));
}

long CreateAnnotationMissionRequest::getConversationTimeStartFilter() const {
  return conversationTimeStartFilter_;
}

void CreateAnnotationMissionRequest::setConversationTimeStartFilter(long conversationTimeStartFilter) {
  conversationTimeStartFilter_ = conversationTimeStartFilter;
  setParameter(std::string("ConversationTimeStartFilter"), std::to_string(conversationTimeStartFilter));
}

std::string CreateAnnotationMissionRequest::getAgentId() const {
  return agentId_;
}

void CreateAnnotationMissionRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

bool CreateAnnotationMissionRequest::getExcludeOtherSession() const {
  return excludeOtherSession_;
}

void CreateAnnotationMissionRequest::setExcludeOtherSession(bool excludeOtherSession) {
  excludeOtherSession_ = excludeOtherSession;
  setParameter(std::string("ExcludeOtherSession"), excludeOtherSession ? "true" : "false");
}

bool CreateAnnotationMissionRequest::getFinished() const {
  return finished_;
}

void CreateAnnotationMissionRequest::setFinished(bool finished) {
  finished_ = finished;
  setParameter(std::string("Finished"), finished ? "true" : "false");
}

int CreateAnnotationMissionRequest::getSamplingRate() const {
  return samplingRate_;
}

void CreateAnnotationMissionRequest::setSamplingRate(int samplingRate) {
  samplingRate_ = samplingRate;
  setParameter(std::string("SamplingRate"), std::to_string(samplingRate));
}

std::string CreateAnnotationMissionRequest::getAgentKey() const {
  return agentKey_;
}

void CreateAnnotationMissionRequest::setAgentKey(const std::string &agentKey) {
  agentKey_ = agentKey;
  setParameter(std::string("AgentKey"), agentKey);
}

std::string CreateAnnotationMissionRequest::getAnnotationMissionName() const {
  return annotationMissionName_;
}

void CreateAnnotationMissionRequest::setAnnotationMissionName(const std::string &annotationMissionName) {
  annotationMissionName_ = annotationMissionName;
  setParameter(std::string("AnnotationMissionName"), annotationMissionName);
}

std::string CreateAnnotationMissionRequest::getChatbotId() const {
  return chatbotId_;
}

void CreateAnnotationMissionRequest::setChatbotId(const std::string &chatbotId) {
  chatbotId_ = chatbotId;
  setParameter(std::string("ChatbotId"), chatbotId);
}

std::vector<CreateAnnotationMissionRequest::int> CreateAnnotationMissionRequest::getAnnotationMissionDebugDataSourceList() const {
  return annotationMissionDebugDataSourceList_;
}

void CreateAnnotationMissionRequest::setAnnotationMissionDebugDataSourceList(const std::vector<CreateAnnotationMissionRequest::int> &annotationMissionDebugDataSourceList) {
  annotationMissionDebugDataSourceList_ = annotationMissionDebugDataSourceList;
  for(int dep1 = 0; dep1 != annotationMissionDebugDataSourceList.size(); dep1++) {
    setParameter(std::string("AnnotationMissionDebugDataSourceList") + "." + std::to_string(dep1 + 1), std::to_string(annotationMissionDebugDataSourceList[dep1]));
  }
}

std::string CreateAnnotationMissionRequest::getInstanceId() const {
  return instanceId_;
}

void CreateAnnotationMissionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int CreateAnnotationMissionRequest::getSamplingCount() const {
  return samplingCount_;
}

void CreateAnnotationMissionRequest::setSamplingCount(int samplingCount) {
  samplingCount_ = samplingCount;
  setParameter(std::string("SamplingCount"), std::to_string(samplingCount));
}

