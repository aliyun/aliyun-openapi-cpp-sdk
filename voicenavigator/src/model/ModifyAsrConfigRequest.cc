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

#include <alibabacloud/voicenavigator/model/ModifyAsrConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyAsrConfigRequest;

ModifyAsrConfigRequest::ModifyAsrConfigRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyAsrConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAsrConfigRequest::~ModifyAsrConfigRequest() {}

std::string ModifyAsrConfigRequest::getAsrVocabularyId() const {
  return asrVocabularyId_;
}

void ModifyAsrConfigRequest::setAsrVocabularyId(const std::string &asrVocabularyId) {
  asrVocabularyId_ = asrVocabularyId;
  setParameter(std::string("AsrVocabularyId"), asrVocabularyId);
}

std::string ModifyAsrConfigRequest::getAsrClassVocabularyId() const {
  return asrClassVocabularyId_;
}

void ModifyAsrConfigRequest::setAsrClassVocabularyId(const std::string &asrClassVocabularyId) {
  asrClassVocabularyId_ = asrClassVocabularyId;
  setParameter(std::string("AsrClassVocabularyId"), asrClassVocabularyId);
}

std::string ModifyAsrConfigRequest::getEntryId() const {
  return entryId_;
}

void ModifyAsrConfigRequest::setEntryId(const std::string &entryId) {
  entryId_ = entryId;
  setParameter(std::string("EntryId"), entryId);
}

std::string ModifyAsrConfigRequest::getAsrCustomizationId() const {
  return asrCustomizationId_;
}

void ModifyAsrConfigRequest::setAsrCustomizationId(const std::string &asrCustomizationId) {
  asrCustomizationId_ = asrCustomizationId;
  setParameter(std::string("AsrCustomizationId"), asrCustomizationId);
}

int ModifyAsrConfigRequest::getConfigLevel() const {
  return configLevel_;
}

void ModifyAsrConfigRequest::setConfigLevel(int configLevel) {
  configLevel_ = configLevel;
  setParameter(std::string("ConfigLevel"), std::to_string(configLevel));
}

std::string ModifyAsrConfigRequest::getAsrAcousticModelId() const {
  return asrAcousticModelId_;
}

void ModifyAsrConfigRequest::setAsrAcousticModelId(const std::string &asrAcousticModelId) {
  asrAcousticModelId_ = asrAcousticModelId;
  setParameter(std::string("AsrAcousticModelId"), asrAcousticModelId);
}

