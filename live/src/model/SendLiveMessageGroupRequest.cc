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

#include <alibabacloud/live/model/SendLiveMessageGroupRequest.h>

using AlibabaCloud::Live::Model::SendLiveMessageGroupRequest;

SendLiveMessageGroupRequest::SendLiveMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "SendLiveMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

SendLiveMessageGroupRequest::~SendLiveMessageGroupRequest() {}

std::string SendLiveMessageGroupRequest::getSenderMetaInfo() const {
  return senderMetaInfo_;
}

void SendLiveMessageGroupRequest::setSenderMetaInfo(const std::string &senderMetaInfo) {
  senderMetaInfo_ = senderMetaInfo;
  setParameter(std::string("SenderMetaInfo"), senderMetaInfo);
}

std::string SendLiveMessageGroupRequest::getBody() const {
  return body_;
}

void SendLiveMessageGroupRequest::setBody(const std::string &body) {
  body_ = body;
  setParameter(std::string("Body"), body);
}

long SendLiveMessageGroupRequest::getStaticsIncrease() const {
  return staticsIncrease_;
}

void SendLiveMessageGroupRequest::setStaticsIncrease(long staticsIncrease) {
  staticsIncrease_ = staticsIncrease;
  setParameter(std::string("StaticsIncrease"), std::to_string(staticsIncrease));
}

bool SendLiveMessageGroupRequest::getNoCache() const {
  return noCache_;
}

void SendLiveMessageGroupRequest::setNoCache(bool noCache) {
  noCache_ = noCache;
  setParameter(std::string("NoCache"), noCache ? "true" : "false");
}

long SendLiveMessageGroupRequest::getMsgType() const {
  return msgType_;
}

void SendLiveMessageGroupRequest::setMsgType(long msgType) {
  msgType_ = msgType;
  setParameter(std::string("MsgType"), std::to_string(msgType));
}

bool SendLiveMessageGroupRequest::getNoStorage() const {
  return noStorage_;
}

void SendLiveMessageGroupRequest::setNoStorage(bool noStorage) {
  noStorage_ = noStorage;
  setParameter(std::string("NoStorage"), noStorage ? "true" : "false");
}

std::string SendLiveMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void SendLiveMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long SendLiveMessageGroupRequest::getWeight() const {
  return weight_;
}

void SendLiveMessageGroupRequest::setWeight(long weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

std::string SendLiveMessageGroupRequest::getDataCenter() const {
  return dataCenter_;
}

void SendLiveMessageGroupRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string SendLiveMessageGroupRequest::getMsgTid() const {
  return msgTid_;
}

void SendLiveMessageGroupRequest::setMsgTid(const std::string &msgTid) {
  msgTid_ = msgTid;
  setParameter(std::string("MsgTid"), msgTid);
}

std::string SendLiveMessageGroupRequest::getSenderId() const {
  return senderId_;
}

void SendLiveMessageGroupRequest::setSenderId(const std::string &senderId) {
  senderId_ = senderId;
  setParameter(std::string("SenderId"), senderId);
}

std::string SendLiveMessageGroupRequest::getAppId() const {
  return appId_;
}

void SendLiveMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

