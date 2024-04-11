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

#include <alibabacloud/cams/model/SendChatappMessageRequest.h>

using AlibabaCloud::Cams::Model::SendChatappMessageRequest;

SendChatappMessageRequest::SendChatappMessageRequest()
    : RpcServiceRequest("cams", "2020-06-06", "SendChatappMessage") {
  setMethod(HttpRequest::Method::Post);
}

SendChatappMessageRequest::~SendChatappMessageRequest() {}

std::string SendChatappMessageRequest::getLanguage() const {
  return language_;
}

void SendChatappMessageRequest::setLanguage(const std::string &language) {
  language_ = language;
  setBodyParameter(std::string("Language"), language);
}

std::string SendChatappMessageRequest::getType() const {
  return type_;
}

void SendChatappMessageRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string SendChatappMessageRequest::getFallBackContent() const {
  return fallBackContent_;
}

void SendChatappMessageRequest::setFallBackContent(const std::string &fallBackContent) {
  fallBackContent_ = fallBackContent;
  setBodyParameter(std::string("FallBackContent"), fallBackContent);
}

std::vector<SendChatappMessageRequest::std::string> SendChatappMessageRequest::getPayload() const {
  return payload_;
}

void SendChatappMessageRequest::setPayload(const std::vector<SendChatappMessageRequest::std::string> &payload) {
  payload_ = payload;
  for(int dep1 = 0; dep1 != payload.size(); dep1++) {
    setParameter(std::string("Payload") + "." + std::to_string(dep1 + 1), payload[dep1]);
  }
}

std::string SendChatappMessageRequest::getFrom() const {
  return from_;
}

void SendChatappMessageRequest::setFrom(const std::string &from) {
  from_ = from;
  setBodyParameter(std::string("From"), from);
}

std::string SendChatappMessageRequest::getTag() const {
  return tag_;
}

void SendChatappMessageRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setBodyParameter(std::string("Tag"), tag);
}

std::string SendChatappMessageRequest::getFallBackRule() const {
  return fallBackRule_;
}

void SendChatappMessageRequest::setFallBackRule(const std::string &fallBackRule) {
  fallBackRule_ = fallBackRule;
  setBodyParameter(std::string("FallBackRule"), fallBackRule);
}

SendChatappMessageRequest::FlowAction SendChatappMessageRequest::getFlowAction() const {
  return flowAction_;
}

void SendChatappMessageRequest::setFlowAction(const SendChatappMessageRequest::FlowAction &flowAction) {
  flowAction_ = flowAction;
  setBodyParameter(std::string("FlowAction") + ".FlowToken", flowAction.flowToken);
  for(auto const &iter1 : flowAction.flowActionData) {
    setBodyParameter(std::string("FlowAction") + ".FlowActionData." + iter1.first, iter1.second);
  }
}

std::string SendChatappMessageRequest::getTaskId() const {
  return taskId_;
}

void SendChatappMessageRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

std::string SendChatappMessageRequest::getIsvCode() const {
  return isvCode_;
}

void SendChatappMessageRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setBodyParameter(std::string("IsvCode"), isvCode);
}

std::string SendChatappMessageRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void SendChatappMessageRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string SendChatappMessageRequest::getTemplateCode() const {
  return templateCode_;
}

void SendChatappMessageRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setBodyParameter(std::string("TemplateCode"), templateCode);
}

SendChatappMessageRequest::ProductAction SendChatappMessageRequest::getProductAction() const {
  return productAction_;
}

void SendChatappMessageRequest::setProductAction(const SendChatappMessageRequest::ProductAction &productAction) {
  productAction_ = productAction;
  setBodyParameter(std::string("ProductAction") + ".ThumbnailProductRetailerId", productAction.thumbnailProductRetailerId);
  for(int dep1 = 0; dep1 != productAction.sections.size(); dep1++) {
    setBodyParameter(std::string("ProductAction") + ".Sections." + std::to_string(dep1 + 1) + ".Title", productAction.sections[dep1].title);
    for(int dep2 = 0; dep2 != productAction.sections[dep1].productItems.size(); dep2++) {
      setBodyParameter(std::string("ProductAction") + ".Sections." + std::to_string(dep1 + 1) + ".ProductItems." + std::to_string(dep2 + 1) + ".ProductRetailerId", productAction.sections[dep1].productItems[dep2].productRetailerId);
    }
  }
}

std::string SendChatappMessageRequest::getMessageType() const {
  return messageType_;
}

void SendChatappMessageRequest::setMessageType(const std::string &messageType) {
  messageType_ = messageType;
  setBodyParameter(std::string("MessageType"), messageType);
}

std::string SendChatappMessageRequest::getCustWabaId() const {
  return custWabaId_;
}

void SendChatappMessageRequest::setCustWabaId(const std::string &custWabaId) {
  custWabaId_ = custWabaId;
  setBodyParameter(std::string("CustWabaId"), custWabaId);
}

std::string SendChatappMessageRequest::getContent() const {
  return content_;
}

void SendChatappMessageRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::map<std::string, std::string> SendChatappMessageRequest::getTemplateParams() const {
  return templateParams_;
}

void SendChatappMessageRequest::setTemplateParams(const std::map<std::string, std::string> &templateParams) {
  templateParams_ = templateParams;
  for(auto const &iter1 : templateParams) {
    setBodyParameter(std::string("TemplateParams") + "." + iter1.first, iter1.second);
  }
}

std::string SendChatappMessageRequest::getApiCode() const {
  return apiCode_;
}

void SendChatappMessageRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string SendChatappMessageRequest::getChannelType() const {
  return channelType_;
}

void SendChatappMessageRequest::setChannelType(const std::string &channelType) {
  channelType_ = channelType;
  setBodyParameter(std::string("ChannelType"), channelType);
}

std::string SendChatappMessageRequest::getTemplateName() const {
  return templateName_;
}

void SendChatappMessageRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setBodyParameter(std::string("TemplateName"), templateName);
}

std::string SendChatappMessageRequest::getTrackingData() const {
  return trackingData_;
}

void SendChatappMessageRequest::setTrackingData(const std::string &trackingData) {
  trackingData_ = trackingData;
  setBodyParameter(std::string("TrackingData"), trackingData);
}

std::string SendChatappMessageRequest::getContextMessageId() const {
  return contextMessageId_;
}

void SendChatappMessageRequest::setContextMessageId(const std::string &contextMessageId) {
  contextMessageId_ = contextMessageId;
  setBodyParameter(std::string("ContextMessageId"), contextMessageId);
}

std::string SendChatappMessageRequest::getProdCode() const {
  return prodCode_;
}

void SendChatappMessageRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string SendChatappMessageRequest::getLabel() const {
  return label_;
}

void SendChatappMessageRequest::setLabel(const std::string &label) {
  label_ = label;
  setBodyParameter(std::string("Label"), label);
}

std::string SendChatappMessageRequest::getFallBackId() const {
  return fallBackId_;
}

void SendChatappMessageRequest::setFallBackId(const std::string &fallBackId) {
  fallBackId_ = fallBackId;
  setBodyParameter(std::string("FallBackId"), fallBackId);
}

int SendChatappMessageRequest::getTtl() const {
  return ttl_;
}

void SendChatappMessageRequest::setTtl(int ttl) {
  ttl_ = ttl;
  setBodyParameter(std::string("Ttl"), std::to_string(ttl));
}

int SendChatappMessageRequest::getFallBackDuration() const {
  return fallBackDuration_;
}

void SendChatappMessageRequest::setFallBackDuration(int fallBackDuration) {
  fallBackDuration_ = fallBackDuration;
  setBodyParameter(std::string("FallBackDuration"), std::to_string(fallBackDuration));
}

std::string SendChatappMessageRequest::getTo() const {
  return to_;
}

void SendChatappMessageRequest::setTo(const std::string &to) {
  to_ = to;
  setBodyParameter(std::string("To"), to);
}

