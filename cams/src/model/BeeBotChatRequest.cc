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

#include <alibabacloud/cams/model/BeeBotChatRequest.h>

using AlibabaCloud::Cams::Model::BeeBotChatRequest;

BeeBotChatRequest::BeeBotChatRequest()
    : RpcServiceRequest("cams", "2020-06-06", "BeeBotChat") {
  setMethod(HttpRequest::Method::Post);
}

BeeBotChatRequest::~BeeBotChatRequest() {}

std::string BeeBotChatRequest::getSessionId() const {
  return sessionId_;
}

void BeeBotChatRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setBodyParameter(std::string("SessionId"), sessionId);
}

std::string BeeBotChatRequest::getApiCode() const {
  return apiCode_;
}

void BeeBotChatRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string BeeBotChatRequest::getIntentName() const {
  return intentName_;
}

void BeeBotChatRequest::setIntentName(const std::string &intentName) {
  intentName_ = intentName;
  setBodyParameter(std::string("IntentName"), intentName);
}

std::string BeeBotChatRequest::getSenderNick() const {
  return senderNick_;
}

void BeeBotChatRequest::setSenderNick(const std::string &senderNick) {
  senderNick_ = senderNick;
  setBodyParameter(std::string("SenderNick"), senderNick);
}

std::vector<BeeBotChatRequest::std::string> BeeBotChatRequest::getPerspective() const {
  return perspective_;
}

void BeeBotChatRequest::setPerspective(const std::vector<BeeBotChatRequest::std::string> &perspective) {
  perspective_ = perspective;
  for(int dep1 = 0; dep1 != perspective.size(); dep1++) {
    setBodyParameter(std::string("Perspective") + "." + std::to_string(dep1 + 1), perspective[dep1]);
  }
}

std::string BeeBotChatRequest::getUtterance() const {
  return utterance_;
}

void BeeBotChatRequest::setUtterance(const std::string &utterance) {
  utterance_ = utterance;
  setBodyParameter(std::string("Utterance"), utterance);
}

std::string BeeBotChatRequest::getIsvCode() const {
  return isvCode_;
}

void BeeBotChatRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setBodyParameter(std::string("IsvCode"), isvCode);
}

std::string BeeBotChatRequest::getProdCode() const {
  return prodCode_;
}

void BeeBotChatRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string BeeBotChatRequest::getKnowledgeId() const {
  return knowledgeId_;
}

void BeeBotChatRequest::setKnowledgeId(const std::string &knowledgeId) {
  knowledgeId_ = knowledgeId;
  setBodyParameter(std::string("KnowledgeId"), knowledgeId);
}

std::map<std::string, std::string> BeeBotChatRequest::getVendorParam() const {
  return vendorParam_;
}

void BeeBotChatRequest::setVendorParam(const std::map<std::string, std::string> &vendorParam) {
  vendorParam_ = vendorParam;
  for(auto const &iter1 : vendorParam) {
    setBodyParameter(std::string("VendorParam") + "." + iter1.first, iter1.second);
  }
}

std::string BeeBotChatRequest::getSenderId() const {
  return senderId_;
}

void BeeBotChatRequest::setSenderId(const std::string &senderId) {
  senderId_ = senderId;
  setBodyParameter(std::string("SenderId"), senderId);
}

std::string BeeBotChatRequest::getChatBotInstanceId() const {
  return chatBotInstanceId_;
}

void BeeBotChatRequest::setChatBotInstanceId(const std::string &chatBotInstanceId) {
  chatBotInstanceId_ = chatBotInstanceId;
  setBodyParameter(std::string("ChatBotInstanceId"), chatBotInstanceId);
}

std::string BeeBotChatRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void BeeBotChatRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

