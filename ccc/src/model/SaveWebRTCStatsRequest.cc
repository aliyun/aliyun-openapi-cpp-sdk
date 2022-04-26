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

#include <alibabacloud/ccc/model/SaveWebRTCStatsRequest.h>

using AlibabaCloud::CCC::Model::SaveWebRTCStatsRequest;

SaveWebRTCStatsRequest::SaveWebRTCStatsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "SaveWebRTCStats") {
  setMethod(HttpRequest::Method::Post);
}

SaveWebRTCStatsRequest::~SaveWebRTCStatsRequest() {}

std::string SaveWebRTCStatsRequest::getCallId() const {
  return callId_;
}

void SaveWebRTCStatsRequest::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

std::string SaveWebRTCStatsRequest::getSenderReport() const {
  return senderReport_;
}

void SaveWebRTCStatsRequest::setSenderReport(const std::string &senderReport) {
  senderReport_ = senderReport;
  setParameter(std::string("SenderReport"), senderReport);
}

std::string SaveWebRTCStatsRequest::getInstanceId() const {
  return instanceId_;
}

void SaveWebRTCStatsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveWebRTCStatsRequest::getReceiverReport() const {
  return receiverReport_;
}

void SaveWebRTCStatsRequest::setReceiverReport(const std::string &receiverReport) {
  receiverReport_ = receiverReport;
  setParameter(std::string("ReceiverReport"), receiverReport);
}

std::string SaveWebRTCStatsRequest::getGoogAddress() const {
  return googAddress_;
}

void SaveWebRTCStatsRequest::setGoogAddress(const std::string &googAddress) {
  googAddress_ = googAddress;
  setParameter(std::string("GoogAddress"), googAddress);
}

std::string SaveWebRTCStatsRequest::getGeneralInfo() const {
  return generalInfo_;
}

void SaveWebRTCStatsRequest::setGeneralInfo(const std::string &generalInfo) {
  generalInfo_ = generalInfo;
  setParameter(std::string("GeneralInfo"), generalInfo);
}

