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

#include <alibabacloud/cams/model/BeeBotAssociateRequest.h>

using AlibabaCloud::Cams::Model::BeeBotAssociateRequest;

BeeBotAssociateRequest::BeeBotAssociateRequest()
    : RpcServiceRequest("cams", "2020-06-06", "BeeBotAssociate") {
  setMethod(HttpRequest::Method::Post);
}

BeeBotAssociateRequest::~BeeBotAssociateRequest() {}

std::string BeeBotAssociateRequest::getSessionId() const {
  return sessionId_;
}

void BeeBotAssociateRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setBodyParameter(std::string("SessionId"), sessionId);
}

std::string BeeBotAssociateRequest::getApiCode() const {
  return apiCode_;
}

void BeeBotAssociateRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string BeeBotAssociateRequest::getPerspective() const {
  return perspective_;
}

void BeeBotAssociateRequest::setPerspective(const std::string &perspective) {
  perspective_ = perspective;
  setBodyParameter(std::string("Perspective"), perspective);
}

std::string BeeBotAssociateRequest::getUtterance() const {
  return utterance_;
}

void BeeBotAssociateRequest::setUtterance(const std::string &utterance) {
  utterance_ = utterance;
  setBodyParameter(std::string("Utterance"), utterance);
}

std::string BeeBotAssociateRequest::getIsvCode() const {
  return isvCode_;
}

void BeeBotAssociateRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setBodyParameter(std::string("IsvCode"), isvCode);
}

std::string BeeBotAssociateRequest::getProdCode() const {
  return prodCode_;
}

void BeeBotAssociateRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

int BeeBotAssociateRequest::getRecommendNum() const {
  return recommendNum_;
}

void BeeBotAssociateRequest::setRecommendNum(int recommendNum) {
  recommendNum_ = recommendNum;
  setBodyParameter(std::string("RecommendNum"), std::to_string(recommendNum));
}

std::string BeeBotAssociateRequest::getChatBotInstanceId() const {
  return chatBotInstanceId_;
}

void BeeBotAssociateRequest::setChatBotInstanceId(const std::string &chatBotInstanceId) {
  chatBotInstanceId_ = chatBotInstanceId;
  setBodyParameter(std::string("ChatBotInstanceId"), chatBotInstanceId);
}

std::string BeeBotAssociateRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void BeeBotAssociateRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

