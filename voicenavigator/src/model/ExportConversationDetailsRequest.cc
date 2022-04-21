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

#include <alibabacloud/voicenavigator/model/ExportConversationDetailsRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ExportConversationDetailsRequest;

ExportConversationDetailsRequest::ExportConversationDetailsRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ExportConversationDetails") {
  setMethod(HttpRequest::Method::Post);
}

ExportConversationDetailsRequest::~ExportConversationDetailsRequest() {}

long ExportConversationDetailsRequest::getBeginTimeLeftRange() const {
  return beginTimeLeftRange_;
}

void ExportConversationDetailsRequest::setBeginTimeLeftRange(long beginTimeLeftRange) {
  beginTimeLeftRange_ = beginTimeLeftRange;
  setParameter(std::string("BeginTimeLeftRange"), std::to_string(beginTimeLeftRange));
}

std::string ExportConversationDetailsRequest::getCallingNumber() const {
  return callingNumber_;
}

void ExportConversationDetailsRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string ExportConversationDetailsRequest::getInstanceId() const {
  return instanceId_;
}

void ExportConversationDetailsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ExportConversationDetailsRequest::getBeginTimeRightRange() const {
  return beginTimeRightRange_;
}

void ExportConversationDetailsRequest::setBeginTimeRightRange(long beginTimeRightRange) {
  beginTimeRightRange_ = beginTimeRightRange;
  setParameter(std::string("BeginTimeRightRange"), std::to_string(beginTimeRightRange));
}

std::vector<std::string> ExportConversationDetailsRequest::getOptions() const {
  return options_;
}

void ExportConversationDetailsRequest::setOptions(const std::vector<std::string> &options) {
  options_ = options;
}

