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

#include <alibabacloud/mseap/model/SendNotificationForPartnerRequest.h>

using AlibabaCloud::Mseap::Model::SendNotificationForPartnerRequest;

SendNotificationForPartnerRequest::SendNotificationForPartnerRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "SendNotificationForPartner") {
  setMethod(HttpRequest::Method::Post);
}

SendNotificationForPartnerRequest::~SendNotificationForPartnerRequest() {}

std::string SendNotificationForPartnerRequest::getTrackId() const {
  return trackId_;
}

void SendNotificationForPartnerRequest::setTrackId(const std::string &trackId) {
  trackId_ = trackId;
  setParameter(std::string("TrackId"), trackId);
}

std::vector<SendNotificationForPartnerRequest::std::string> SendNotificationForPartnerRequest::getSmartSubChannels() const {
  return smartSubChannels_;
}

void SendNotificationForPartnerRequest::setSmartSubChannels(const std::vector<SendNotificationForPartnerRequest::std::string> &smartSubChannels) {
  smartSubChannels_ = smartSubChannels;
  for(int dep1 = 0; dep1 != smartSubChannels.size(); dep1++) {
    setParameter(std::string("SmartSubChannels") + "." + std::to_string(dep1 + 1), smartSubChannels[dep1]);
  }
}

std::string SendNotificationForPartnerRequest::getChannelType() const {
  return channelType_;
}

void SendNotificationForPartnerRequest::setChannelType(const std::string &channelType) {
  channelType_ = channelType;
  setParameter(std::string("ChannelType"), channelType);
}

std::string SendNotificationForPartnerRequest::getNotifyType() const {
  return notifyType_;
}

void SendNotificationForPartnerRequest::setNotifyType(const std::string &notifyType) {
  notifyType_ = notifyType;
  setParameter(std::string("NotifyType"), notifyType);
}

std::string SendNotificationForPartnerRequest::getNotifycationEventType() const {
  return notifycationEventType_;
}

void SendNotificationForPartnerRequest::setNotifycationEventType(const std::string &notifycationEventType) {
  notifycationEventType_ = notifycationEventType;
  setParameter(std::string("NotifycationEventType"), notifycationEventType);
}

std::string SendNotificationForPartnerRequest::getSendTarget() const {
  return sendTarget_;
}

void SendNotificationForPartnerRequest::setSendTarget(const std::string &sendTarget) {
  sendTarget_ = sendTarget;
  setParameter(std::string("SendTarget"), sendTarget);
}

std::string SendNotificationForPartnerRequest::getBizId() const {
  return bizId_;
}

void SendNotificationForPartnerRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::map<std::string, std::string> SendNotificationForPartnerRequest::getParamMap() const {
  return paramMap_;
}

void SendNotificationForPartnerRequest::setParamMap(const std::map<std::string, std::string> &paramMap) {
  paramMap_ = paramMap;
  for(auto const &iter1 : paramMap) {
    setParameter(std::string("ParamMap") + "." + iter1.first, iter1.second);
  }
}

