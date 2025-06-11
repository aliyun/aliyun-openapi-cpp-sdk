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

#include <alibabacloud/live/model/SendLiveMessageUserRequest.h>

using AlibabaCloud::Live::Model::SendLiveMessageUserRequest;

SendLiveMessageUserRequest::SendLiveMessageUserRequest()
    : RpcServiceRequest("live", "2016-11-01", "SendLiveMessageUser") {
  setMethod(HttpRequest::Method::Post);
}

SendLiveMessageUserRequest::~SendLiveMessageUserRequest() {}

bool SendLiveMessageUserRequest::getStorage() const {
  return storage_;
}

void SendLiveMessageUserRequest::setStorage(bool storage) {
  storage_ = storage;
  setParameter(std::string("Storage"), storage ? "true" : "false");
}

std::string SendLiveMessageUserRequest::getBody() const {
  return body_;
}

void SendLiveMessageUserRequest::setBody(const std::string &body) {
  body_ = body;
  setParameter(std::string("Body"), body);
}

std::string SendLiveMessageUserRequest::getSenderInfo() const {
  return senderInfo_;
}

void SendLiveMessageUserRequest::setSenderInfo(const std::string &senderInfo) {
  senderInfo_ = senderInfo;
  setParameter(std::string("SenderInfo"), senderInfo);
}

long SendLiveMessageUserRequest::getMsgType() const {
  return msgType_;
}

void SendLiveMessageUserRequest::setMsgType(long msgType) {
  msgType_ = msgType;
  setParameter(std::string("MsgType"), std::to_string(msgType));
}

bool SendLiveMessageUserRequest::getHighReliability() const {
  return highReliability_;
}

void SendLiveMessageUserRequest::setHighReliability(bool highReliability) {
  highReliability_ = highReliability;
  setParameter(std::string("HighReliability"), highReliability ? "true" : "false");
}

std::string SendLiveMessageUserRequest::getDataCenter() const {
  return dataCenter_;
}

void SendLiveMessageUserRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string SendLiveMessageUserRequest::getMsgTid() const {
  return msgTid_;
}

void SendLiveMessageUserRequest::setMsgTid(const std::string &msgTid) {
  msgTid_ = msgTid;
  setParameter(std::string("MsgTid"), msgTid);
}

std::string SendLiveMessageUserRequest::getSenderId() const {
  return senderId_;
}

void SendLiveMessageUserRequest::setSenderId(const std::string &senderId) {
  senderId_ = senderId;
  setParameter(std::string("SenderId"), senderId);
}

std::string SendLiveMessageUserRequest::getReceiverId() const {
  return receiverId_;
}

void SendLiveMessageUserRequest::setReceiverId(const std::string &receiverId) {
  receiverId_ = receiverId;
  setParameter(std::string("ReceiverId"), receiverId);
}

std::string SendLiveMessageUserRequest::getAppId() const {
  return appId_;
}

void SendLiveMessageUserRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

