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

#include <alibabacloud/outboundbot/model/SaveAnnotationMissionSessionListRequest.h>

using AlibabaCloud::OutboundBot::Model::SaveAnnotationMissionSessionListRequest;

SaveAnnotationMissionSessionListRequest::SaveAnnotationMissionSessionListRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SaveAnnotationMissionSessionList") {
  setMethod(HttpRequest::Method::Post);
}

SaveAnnotationMissionSessionListRequest::~SaveAnnotationMissionSessionListRequest() {}

std::string SaveAnnotationMissionSessionListRequest::getAgentId() const {
  return agentId_;
}

void SaveAnnotationMissionSessionListRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

std::string SaveAnnotationMissionSessionListRequest::getUserNick() const {
  return userNick_;
}

void SaveAnnotationMissionSessionListRequest::setUserNick(const std::string &userNick) {
  userNick_ = userNick;
  setParameter(std::string("UserNick"), userNick);
}

std::string SaveAnnotationMissionSessionListRequest::getAgentKey() const {
  return agentKey_;
}

void SaveAnnotationMissionSessionListRequest::setAgentKey(const std::string &agentKey) {
  agentKey_ = agentKey;
  setParameter(std::string("AgentKey"), agentKey);
}

long SaveAnnotationMissionSessionListRequest::getAnnotationMissionDataSourceType() const {
  return annotationMissionDataSourceType_;
}

void SaveAnnotationMissionSessionListRequest::setAnnotationMissionDataSourceType(long annotationMissionDataSourceType) {
  annotationMissionDataSourceType_ = annotationMissionDataSourceType;
  setParameter(std::string("AnnotationMissionDataSourceType"), std::to_string(annotationMissionDataSourceType));
}

long SaveAnnotationMissionSessionListRequest::getEnvironment() const {
  return environment_;
}

void SaveAnnotationMissionSessionListRequest::setEnvironment(long environment) {
  environment_ = environment;
  setParameter(std::string("Environment"), std::to_string(environment));
}

std::vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList> SaveAnnotationMissionSessionListRequest::getAnnotationMissionSessionList() const {
  return annotationMissionSessionList_;
}

void SaveAnnotationMissionSessionListRequest::setAnnotationMissionSessionList(const std::vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList> &annotationMissionSessionList) {
  annotationMissionSessionList_ = annotationMissionSessionList;
  for(int dep1 = 0; dep1 != annotationMissionSessionList.size(); dep1++) {
  auto annotationMissionSessionListObj = annotationMissionSessionList.at(dep1);
  std::string annotationMissionSessionListObjStr = std::string("AnnotationMissionSessionList") + "." + std::to_string(dep1 + 1);
    setParameter(annotationMissionSessionListObjStr + ".AnnotationMissionId", annotationMissionSessionListObj.annotationMissionId);
    setParameter(annotationMissionSessionListObjStr + ".JobId", annotationMissionSessionListObj.jobId);
    setParameter(annotationMissionSessionListObjStr + ".CreateTime", std::to_string(annotationMissionSessionListObj.createTime));
    setParameter(annotationMissionSessionListObjStr + ".ScriptId", annotationMissionSessionListObj.scriptId);
    setParameter(annotationMissionSessionListObjStr + ".ModifiedTime", std::to_string(annotationMissionSessionListObj.modifiedTime));
    setParameter(annotationMissionSessionListObjStr + ".InstanceId", annotationMissionSessionListObj.instanceId);
    setParameter(annotationMissionSessionListObjStr + ".AnnotationMissionSessionId", annotationMissionSessionListObj.annotationMissionSessionId);
    for(int dep2 = 0; dep2 != annotationMissionSessionListObj.annotationMissionChatList.size(); dep2++) {
    auto annotationMissionChatListObj = annotationMissionSessionListObj.annotationMissionChatList.at(dep2);
    std::string annotationMissionChatListObjStr = annotationMissionSessionListObjStr + ".AnnotationMissionChatList" + "." + std::to_string(dep2 + 1);
      setParameter(annotationMissionChatListObjStr + ".CreateTime", std::to_string(annotationMissionChatListObj.createTime));
      setParameter(annotationMissionChatListObjStr + ".TagAnnotationStatus", std::to_string(annotationMissionChatListObj.tagAnnotationStatus));
      setParameter(annotationMissionChatListObjStr + ".AsrAnnotationStatus", std::to_string(annotationMissionChatListObj.asrAnnotationStatus));
      setParameter(annotationMissionChatListObjStr + ".AnnotationAsrResult", annotationMissionChatListObj.annotationAsrResult);
      setParameter(annotationMissionChatListObjStr + ".AnnotationMissionSessionId", annotationMissionChatListObj.annotationMissionSessionId);
      setParameter(annotationMissionChatListObjStr + ".SubStatus", std::to_string(annotationMissionChatListObj.subStatus));
      setParameter(annotationMissionChatListObjStr + ".AnnotationMissionChatId", annotationMissionChatListObj.annotationMissionChatId);
      setParameter(annotationMissionChatListObjStr + ".AnnotationStatus", std::to_string(annotationMissionChatListObj.annotationStatus));
      for(int dep3 = 0; dep3 != annotationMissionChatListObj.annotationMissionChatVocabularyInfoList.size(); dep3++) {
      auto annotationMissionChatVocabularyInfoListObj = annotationMissionChatListObj.annotationMissionChatVocabularyInfoList.at(dep3);
      std::string annotationMissionChatVocabularyInfoListObjStr = annotationMissionChatListObjStr + ".AnnotationMissionChatVocabularyInfoList" + "." + std::to_string(dep3 + 1);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".CreateTime", std::to_string(annotationMissionChatVocabularyInfoListObj.createTime));
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".AnnotationMissionSessionId", annotationMissionChatVocabularyInfoListObj.annotationMissionSessionId);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".VocabularyId", annotationMissionChatVocabularyInfoListObj.vocabularyId);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".AnnotationMissionChatId", annotationMissionChatVocabularyInfoListObj.annotationMissionChatId);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".Delete", annotationMissionChatVocabularyInfoListObj._delete ? "true" : "false");
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".AnnotationMissionId", annotationMissionChatVocabularyInfoListObj.annotationMissionId);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".ModifiedTime", std::to_string(annotationMissionChatVocabularyInfoListObj.modifiedTime));
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".InstanceId", annotationMissionChatVocabularyInfoListObj.instanceId);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".Vocabulary", annotationMissionChatVocabularyInfoListObj.vocabulary);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".VocabularyName", annotationMissionChatVocabularyInfoListObj.vocabularyName);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".Create", annotationMissionChatVocabularyInfoListObj.create ? "true" : "false");
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".VocabularyWeight", std::to_string(annotationMissionChatVocabularyInfoListObj.vocabularyWeight));
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".AnnotationMissionChatVocabularyInfoId", annotationMissionChatVocabularyInfoListObj.annotationMissionChatVocabularyInfoId);
        setParameter(annotationMissionChatVocabularyInfoListObjStr + ".VocabularyDescription", annotationMissionChatVocabularyInfoListObj.vocabularyDescription);
      }
      setParameter(annotationMissionChatListObjStr + ".SequenceId", annotationMissionChatListObj.sequenceId);
      for(int dep3 = 0; dep3 != annotationMissionChatListObj.annotationMissionChatIntentUserSayInfoList.size(); dep3++) {
      auto annotationMissionChatIntentUserSayInfoListObj = annotationMissionChatListObj.annotationMissionChatIntentUserSayInfoList.at(dep3);
      std::string annotationMissionChatIntentUserSayInfoListObjStr = annotationMissionChatListObjStr + ".AnnotationMissionChatIntentUserSayInfoList" + "." + std::to_string(dep3 + 1);
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".CreateTime", std::to_string(annotationMissionChatIntentUserSayInfoListObj.createTime));
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".AnnotationMissionSessionId", annotationMissionChatIntentUserSayInfoListObj.annotationMissionSessionId);
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".AnnotationMissionChatId", annotationMissionChatIntentUserSayInfoListObj.annotationMissionChatId);
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".IntentId", std::to_string(annotationMissionChatIntentUserSayInfoListObj.intentId));
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".DialogId", std::to_string(annotationMissionChatIntentUserSayInfoListObj.dialogId));
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".Delete", annotationMissionChatIntentUserSayInfoListObj._delete ? "true" : "false");
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".Content", annotationMissionChatIntentUserSayInfoListObj.content);
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".AnnotationMissionId", annotationMissionChatIntentUserSayInfoListObj.annotationMissionId);
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".ModifiedTime", std::to_string(annotationMissionChatIntentUserSayInfoListObj.modifiedTime));
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".InstanceId", annotationMissionChatIntentUserSayInfoListObj.instanceId);
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".AnnotationMissionChatIntentUserSayInfoId", annotationMissionChatIntentUserSayInfoListObj.annotationMissionChatIntentUserSayInfoId);
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".Create", annotationMissionChatIntentUserSayInfoListObj.create ? "true" : "false");
        setParameter(annotationMissionChatIntentUserSayInfoListObjStr + ".BotId", annotationMissionChatIntentUserSayInfoListObj.botId);
      }
      setParameter(annotationMissionChatListObjStr + ".AnnotationMissionId", annotationMissionChatListObj.annotationMissionId);
      setParameter(annotationMissionChatListObjStr + ".ModifiedTime", std::to_string(annotationMissionChatListObj.modifiedTime));
      setParameter(annotationMissionChatListObjStr + ".InstanceId", annotationMissionChatListObj.instanceId);
      setParameter(annotationMissionChatListObjStr + ".IntentAnnotationStatus", std::to_string(annotationMissionChatListObj.intentAnnotationStatus));
      setParameter(annotationMissionChatListObjStr + ".OccurTime", std::to_string(annotationMissionChatListObj.occurTime));
      setParameter(annotationMissionChatListObjStr + ".Answer", annotationMissionChatListObj.answer);
      for(int dep3 = 0; dep3 != annotationMissionChatListObj.annotationMissionChatCustomizationDataInfoList.size(); dep3++) {
      auto annotationMissionChatCustomizationDataInfoListObj = annotationMissionChatListObj.annotationMissionChatCustomizationDataInfoList.at(dep3);
      std::string annotationMissionChatCustomizationDataInfoListObjStr = annotationMissionChatListObjStr + ".AnnotationMissionChatCustomizationDataInfoList" + "." + std::to_string(dep3 + 1);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".CreateTime", std::to_string(annotationMissionChatCustomizationDataInfoListObj.createTime));
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".AnnotationMissionSessionId", annotationMissionChatCustomizationDataInfoListObj.annotationMissionSessionId);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".AnnotationMissionChatId", annotationMissionChatCustomizationDataInfoListObj.annotationMissionChatId);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".CustomizationDataId", annotationMissionChatCustomizationDataInfoListObj.customizationDataId);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".Delete", annotationMissionChatCustomizationDataInfoListObj._delete ? "true" : "false");
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".Content", annotationMissionChatCustomizationDataInfoListObj.content);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".AnnotationMissionId", annotationMissionChatCustomizationDataInfoListObj.annotationMissionId);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".CustomizationDataWeight", std::to_string(annotationMissionChatCustomizationDataInfoListObj.customizationDataWeight));
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".ModifiedTime", std::to_string(annotationMissionChatCustomizationDataInfoListObj.modifiedTime));
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".InstanceId", annotationMissionChatCustomizationDataInfoListObj.instanceId);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".Create", annotationMissionChatCustomizationDataInfoListObj.create ? "true" : "false");
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".AnnotationMissionChatCustomizationDataInfoId", annotationMissionChatCustomizationDataInfoListObj.annotationMissionChatCustomizationDataInfoId);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".CustomizationDataDescription", annotationMissionChatCustomizationDataInfoListObj.customizationDataDescription);
        setParameter(annotationMissionChatCustomizationDataInfoListObjStr + ".CustomizationDataName", annotationMissionChatCustomizationDataInfoListObj.customizationDataName);
      }
      for(int dep3 = 0; dep3 != annotationMissionChatListObj.annotationMissionChatTagInfoList.size(); dep3++) {
      auto annotationMissionChatTagInfoListObj = annotationMissionChatListObj.annotationMissionChatTagInfoList.at(dep3);
      std::string annotationMissionChatTagInfoListObjStr = annotationMissionChatListObjStr + ".AnnotationMissionChatTagInfoList" + "." + std::to_string(dep3 + 1);
        setParameter(annotationMissionChatTagInfoListObjStr + ".AnnotationMissionId", annotationMissionChatTagInfoListObj.annotationMissionId);
        setParameter(annotationMissionChatTagInfoListObjStr + ".AnnotationMissionTagInfoId", annotationMissionChatTagInfoListObj.annotationMissionTagInfoId);
        setParameter(annotationMissionChatTagInfoListObjStr + ".CreateTime", std::to_string(annotationMissionChatTagInfoListObj.createTime));
        setParameter(annotationMissionChatTagInfoListObjStr + ".AnnotationMissionTagInfoName", annotationMissionChatTagInfoListObj.annotationMissionTagInfoName);
        setParameter(annotationMissionChatTagInfoListObjStr + ".AnnotationMissionChatTagInfoId", annotationMissionChatTagInfoListObj.annotationMissionChatTagInfoId);
        setParameter(annotationMissionChatTagInfoListObjStr + ".ModifiedTime", std::to_string(annotationMissionChatTagInfoListObj.modifiedTime));
        setParameter(annotationMissionChatTagInfoListObjStr + ".InstanceId", annotationMissionChatTagInfoListObj.instanceId);
        setParameter(annotationMissionChatTagInfoListObjStr + ".AnnotationMissionSessionId", annotationMissionChatTagInfoListObj.annotationMissionSessionId);
        setParameter(annotationMissionChatTagInfoListObjStr + ".AnnotationMissionChatId", annotationMissionChatTagInfoListObj.annotationMissionChatId);
        setParameter(annotationMissionChatTagInfoListObjStr + ".Create", annotationMissionChatTagInfoListObj.create ? "true" : "false");
        setParameter(annotationMissionChatTagInfoListObjStr + ".Delete", annotationMissionChatTagInfoListObj._delete ? "true" : "false");
      }
      setParameter(annotationMissionChatListObjStr + ".OriginalAsrResult", annotationMissionChatListObj.originalAsrResult);
      setParameter(annotationMissionChatListObjStr + ".TranslationError", std::to_string(annotationMissionChatListObj.translationError));
    }
    setParameter(annotationMissionSessionListObjStr + ".AnnotationStatus", std::to_string(annotationMissionSessionListObj.annotationStatus));
    setParameter(annotationMissionSessionListObjStr + ".JobGroupId", annotationMissionSessionListObj.jobGroupId);
    setParameter(annotationMissionSessionListObjStr + ".SessionId", annotationMissionSessionListObj.sessionId);
  }
}

std::string SaveAnnotationMissionSessionListRequest::getAnnotationMissionSessionListJsonString() const {
  return annotationMissionSessionListJsonString_;
}

void SaveAnnotationMissionSessionListRequest::setAnnotationMissionSessionListJsonString(const std::string &annotationMissionSessionListJsonString) {
  annotationMissionSessionListJsonString_ = annotationMissionSessionListJsonString;
  setParameter(std::string("AnnotationMissionSessionListJsonString"), annotationMissionSessionListJsonString);
}

