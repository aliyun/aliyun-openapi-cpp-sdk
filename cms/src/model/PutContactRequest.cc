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

#include <alibabacloud/cms/model/PutContactRequest.h>

using AlibabaCloud::Cms::Model::PutContactRequest;

PutContactRequest::PutContactRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutContact") {
  setMethod(HttpRequest::Method::Post);
}

PutContactRequest::~PutContactRequest() {}

std::string PutContactRequest::getChannelsDingWebHook() const {
  return channelsDingWebHook_;
}

void PutContactRequest::setChannelsDingWebHook(const std::string &channelsDingWebHook) {
  channelsDingWebHook_ = channelsDingWebHook;
  setParameter(std::string("Channels.DingWebHook"), channelsDingWebHook);
}

std::string PutContactRequest::getContactName() const {
  return contactName_;
}

void PutContactRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

std::string PutContactRequest::getChannelsMail() const {
  return channelsMail_;
}

void PutContactRequest::setChannelsMail(const std::string &channelsMail) {
  channelsMail_ = channelsMail;
  setParameter(std::string("Channels.Mail"), channelsMail);
}

std::string PutContactRequest::getChannelsAliIM() const {
  return channelsAliIM_;
}

void PutContactRequest::setChannelsAliIM(const std::string &channelsAliIM) {
  channelsAliIM_ = channelsAliIM;
  setParameter(std::string("Channels.AliIM"), channelsAliIM);
}

std::string PutContactRequest::getDescribe() const {
  return describe_;
}

void PutContactRequest::setDescribe(const std::string &describe) {
  describe_ = describe;
  setParameter(std::string("Describe"), describe);
}

std::string PutContactRequest::getLang() const {
  return lang_;
}

void PutContactRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string PutContactRequest::getChannelsSMS() const {
  return channelsSMS_;
}

void PutContactRequest::setChannelsSMS(const std::string &channelsSMS) {
  channelsSMS_ = channelsSMS;
  setParameter(std::string("Channels.SMS"), channelsSMS);
}

