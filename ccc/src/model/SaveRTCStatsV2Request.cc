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

#include <alibabacloud/ccc/model/SaveRTCStatsV2Request.h>

using AlibabaCloud::CCC::Model::SaveRTCStatsV2Request;

SaveRTCStatsV2Request::SaveRTCStatsV2Request()
    : RpcServiceRequest("ccc", "2020-07-01", "SaveRTCStatsV2") {
  setMethod(HttpRequest::Method::Post);
}

SaveRTCStatsV2Request::~SaveRTCStatsV2Request() {}

std::string SaveRTCStatsV2Request::getCallId() const {
  return callId_;
}

void SaveRTCStatsV2Request::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

std::string SaveRTCStatsV2Request::getSenderReport() const {
  return senderReport_;
}

void SaveRTCStatsV2Request::setSenderReport(const std::string &senderReport) {
  senderReport_ = senderReport;
  setParameter(std::string("SenderReport"), senderReport);
}

std::string SaveRTCStatsV2Request::getInstanceId() const {
  return instanceId_;
}

void SaveRTCStatsV2Request::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveRTCStatsV2Request::getReceiverReport() const {
  return receiverReport_;
}

void SaveRTCStatsV2Request::setReceiverReport(const std::string &receiverReport) {
  receiverReport_ = receiverReport;
  setParameter(std::string("ReceiverReport"), receiverReport);
}

std::string SaveRTCStatsV2Request::getGoogAddress() const {
  return googAddress_;
}

void SaveRTCStatsV2Request::setGoogAddress(const std::string &googAddress) {
  googAddress_ = googAddress;
  setParameter(std::string("GoogAddress"), googAddress);
}

std::string SaveRTCStatsV2Request::getGeneralInfo() const {
  return generalInfo_;
}

void SaveRTCStatsV2Request::setGeneralInfo(const std::string &generalInfo) {
  generalInfo_ = generalInfo;
  setParameter(std::string("GeneralInfo"), generalInfo);
}

