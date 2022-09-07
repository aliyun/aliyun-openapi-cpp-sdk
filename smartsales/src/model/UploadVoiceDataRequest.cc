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

#include <alibabacloud/smartsales/model/UploadVoiceDataRequest.h>

using AlibabaCloud::SmartSales::Model::UploadVoiceDataRequest;

UploadVoiceDataRequest::UploadVoiceDataRequest()
    : RpcServiceRequest("smartsales", "2022-08-18", "UploadVoiceData") {
  setMethod(HttpRequest::Method::Post);
}

UploadVoiceDataRequest::~UploadVoiceDataRequest() {}

std::string UploadVoiceDataRequest::getAgentKey() const {
  return agentKey_;
}

void UploadVoiceDataRequest::setAgentKey(const std::string &agentKey) {
  agentKey_ = agentKey;
  setParameter(std::string("AgentKey"), agentKey);
}

std::string UploadVoiceDataRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UploadVoiceDataRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<UploadVoiceDataRequest::VoiceDataList> UploadVoiceDataRequest::getVoiceDataList() const {
  return voiceDataList_;
}

void UploadVoiceDataRequest::setVoiceDataList(const std::vector<UploadVoiceDataRequest::VoiceDataList> &voiceDataList) {
  voiceDataList_ = voiceDataList;
  for(int dep1 = 0; dep1 != voiceDataList.size(); dep1++) {
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CustomParamJson", voiceDataList[dep1].customParamJson);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".ClueStatusRemark", voiceDataList[dep1].clueStatusRemark);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".BeginTime", std::to_string(voiceDataList[dep1].beginTime));
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CallChannel", std::to_string(voiceDataList[dep1].callChannel));
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".BusinessResult", std::to_string(voiceDataList[dep1].businessResult));
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CustomCallId", voiceDataList[dep1].customCallId);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".SalesPersonId", std::to_string(voiceDataList[dep1].salesPersonId));
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".TeamId", std::to_string(voiceDataList[dep1].teamId));
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CustomerId", voiceDataList[dep1].customerId);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".FileUrl", voiceDataList[dep1].fileUrl);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".ClientTrackNumber", std::to_string(voiceDataList[dep1].clientTrackNumber));
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CustomerName", voiceDataList[dep1].customerName);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CallType", std::to_string(voiceDataList[dep1].callType));
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CalleeNumber", voiceDataList[dep1].calleeNumber);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".SalesPersonName", voiceDataList[dep1].salesPersonName);
    setParameter(std::string("VoiceDataList") + "." + std::to_string(dep1 + 1) + ".CallerNumber", voiceDataList[dep1].callerNumber);
  }
}

