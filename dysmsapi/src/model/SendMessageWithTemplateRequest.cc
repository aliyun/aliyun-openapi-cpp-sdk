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

#include <alibabacloud/dysmsapi/model/SendMessageWithTemplateRequest.h>

using AlibabaCloud::Dysmsapi::Model::SendMessageWithTemplateRequest;

SendMessageWithTemplateRequest::SendMessageWithTemplateRequest()
    : RpcServiceRequest("dysmsapi", "2018-05-01", "SendMessageWithTemplate") {
  setMethod(HttpRequest::Method::Post);
}

SendMessageWithTemplateRequest::~SendMessageWithTemplateRequest() {}

long SendMessageWithTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SendMessageWithTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SendMessageWithTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SendMessageWithTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SendMessageWithTemplateRequest::getSmsUpExtendCode() const {
  return smsUpExtendCode_;
}

void SendMessageWithTemplateRequest::setSmsUpExtendCode(const std::string &smsUpExtendCode) {
  smsUpExtendCode_ = smsUpExtendCode;
  setParameter(std::string("SmsUpExtendCode"), smsUpExtendCode);
}

std::string SendMessageWithTemplateRequest::getFrom() const {
  return from_;
}

void SendMessageWithTemplateRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string SendMessageWithTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SendMessageWithTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SendMessageWithTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void SendMessageWithTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long SendMessageWithTemplateRequest::getValidityPeriod() const {
  return validityPeriod_;
}

void SendMessageWithTemplateRequest::setValidityPeriod(long validityPeriod) {
  validityPeriod_ = validityPeriod;
  setParameter(std::string("ValidityPeriod"), std::to_string(validityPeriod));
}

std::string SendMessageWithTemplateRequest::getTo() const {
  return to_;
}

void SendMessageWithTemplateRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

std::string SendMessageWithTemplateRequest::getTemplateCode() const {
  return templateCode_;
}

void SendMessageWithTemplateRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setParameter(std::string("TemplateCode"), templateCode);
}

std::string SendMessageWithTemplateRequest::getChannelId() const {
  return channelId_;
}

void SendMessageWithTemplateRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

std::string SendMessageWithTemplateRequest::getTemplateParam() const {
  return templateParam_;
}

void SendMessageWithTemplateRequest::setTemplateParam(const std::string &templateParam) {
  templateParam_ = templateParam;
  setParameter(std::string("TemplateParam"), templateParam);
}

