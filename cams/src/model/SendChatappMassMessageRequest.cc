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

#include <alibabacloud/cams/model/SendChatappMassMessageRequest.h>

using AlibabaCloud::Cams::Model::SendChatappMassMessageRequest;

SendChatappMassMessageRequest::SendChatappMassMessageRequest()
    : RpcServiceRequest("cams", "2020-06-06", "SendChatappMassMessage") {
  setMethod(HttpRequest::Method::Post);
}

SendChatappMassMessageRequest::~SendChatappMassMessageRequest() {}

std::string SendChatappMassMessageRequest::getLanguage() const {
  return language_;
}

void SendChatappMassMessageRequest::setLanguage(const std::string &language) {
  language_ = language;
  setBodyParameter(std::string("Language"), language);
}

std::string SendChatappMassMessageRequest::getCustWabaId() const {
  return custWabaId_;
}

void SendChatappMassMessageRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setBodyParameter(std::string("CustWabaId"), custWabaId);
}

std::string SendChatappMassMessageRequest::getFallBackContent() const {
  return fallBackContent_;
}

void SendChatappMassMessageRequest::setFallBackContent(const std::string &fallBackContent) {
  fallBackContent_ = fallBackContent;
  setBodyParameter(std::string("FallBackContent"), fallBackContent);
}

std::vector<SendChatappMassMessageRequest::SenderList> SendChatappMassMessageRequest::getSenderList() const {
  return senderList_;
}

void SendChatappMassMessageRequest::setSenderList(const std::vector<SendChatappMassMessageRequest::SenderList> &senderList) {
  senderList_ = senderList;
  for(int dep1 = 0; dep1 != senderList.size(); dep1++) {
    setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".To", senderList[dep1].to);
    for(auto const &iter2 : senderList[dep1].templateParams) {
      setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".TemplateParams." + iter2.first, iter2.second);
    }
    for(int dep2 = 0; dep2 != senderList[dep1].payload.size(); dep2++) {
      setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".Payload." + std::to_string(dep2 + 1), senderList[dep1].payload[dep2]);
    }
    setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".ProductAction.ThumbnailProductRetailerId", senderList[dep1].productAction.thumbnailProductRetailerId);
    for(int dep2 = 0; dep2 != senderList[dep1].productAction.sections.size(); dep2++) {
      setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".ProductAction.Sections." + std::to_string(dep2 + 1) + ".Title", senderList[dep1].productAction.sections[dep2].title);
      for(int dep3 = 0; dep3 != senderList[dep1].productAction.sections[dep2].productItems.size(); dep3++) {
        setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".ProductAction.Sections." + std::to_string(dep2 + 1) + ".ProductItems." + std::to_string(dep3 + 1) + ".ProductRetailerId", senderList[dep1].productAction.sections[dep2].productItems[dep3].productRetailerId);
      }
    }
    setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".FlowAction.FlowToken", senderList[dep1].flowAction.flowToken);
    for(auto const &iter2 : senderList[dep1].flowAction.flowActionData) {
      setBodyParameter(std::string("SenderList") + "." + std::to_string(dep1 + 1) + ".FlowAction.FlowActionData." + iter2.first, iter2.second);
    }
  }
}

std::string SendChatappMassMessageRequest::getApiCode() const {
  return apiCode_;
}

void SendChatappMassMessageRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string SendChatappMassMessageRequest::getChannelType() const {
  return channelType_;
}

void SendChatappMassMessageRequest::setChannelType(const std::string &channelType) {
  channelType_ = channelType;
  setBodyParameter(std::string("ChannelType"), channelType);
}

std::string SendChatappMassMessageRequest::getFrom() const {
  return from_;
}

void SendChatappMassMessageRequest::setFrom(const std::string &from) {
  from_ = from;
  setBodyParameter(std::string("From"), from);
}

std::string SendChatappMassMessageRequest::getTemplateName() const {
  return templateName_;
}

void SendChatappMassMessageRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setBodyParameter(std::string("TemplateName"), templateName);
}

std::string SendChatappMassMessageRequest::getTag() const {
  return tag_;
}

void SendChatappMassMessageRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setBodyParameter(std::string("Tag"), tag);
}

std::string SendChatappMassMessageRequest::getFallBackRule() const {
  return fallBackRule_;
}

void SendChatappMassMessageRequest::setFallBackRule(const std::string &fallBackRule) {
  fallBackRule_ = fallBackRule;
  setBodyParameter(std::string("FallBackRule"), fallBackRule);
}

std::string SendChatappMassMessageRequest::getTaskId() const {
  return taskId_;
}

void SendChatappMassMessageRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

std::string SendChatappMassMessageRequest::getIsvCode() const {
  return isvCode_;
}

void SendChatappMassMessageRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setBodyParameter(std::string("IsvCode"), isvCode);
}

std::string SendChatappMassMessageRequest::getProdCode() const {
  return prodCode_;
}

void SendChatappMassMessageRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string SendChatappMassMessageRequest::getLabel() const {
  return label_;
}

void SendChatappMassMessageRequest::setLabel(const std::string &label) {
  label_ = label;
  setBodyParameter(std::string("Label"), label);
}

std::string SendChatappMassMessageRequest::getFallBackId() const {
  return fallBackId_;
}

void SendChatappMassMessageRequest::setFallBackId(const std::string &fallBackId) {
  fallBackId_ = fallBackId;
  setBodyParameter(std::string("FallBackId"), fallBackId);
}

long SendChatappMassMessageRequest::getTtl() const {
  return ttl_;
}

void SendChatappMassMessageRequest::setTtl(long ttl) {
  ttl_ = ttl;
  setBodyParameter(std::string("Ttl"), std::to_string(ttl));
}

int SendChatappMassMessageRequest::getFallBackDuration() const {
  return fallBackDuration_;
}

void SendChatappMassMessageRequest::setFallBackDuration(int fallBackDuration) {
  fallBackDuration_ = fallBackDuration;
  setBodyParameter(std::string("FallBackDuration"), std::to_string(fallBackDuration));
}

std::string SendChatappMassMessageRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void SendChatappMassMessageRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string SendChatappMassMessageRequest::getTemplateCode() const {
  return templateCode_;
}

void SendChatappMassMessageRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setBodyParameter(std::string("TemplateCode"), templateCode);
}

