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

#include <alibabacloud/mts/model/PlayInfoRequest.h>

using AlibabaCloud::Mts::Model::PlayInfoRequest;

PlayInfoRequest::PlayInfoRequest()
    : RpcServiceRequest("mts", "2014-06-18", "PlayInfo") {
  setMethod(HttpRequest::Method::Post);
}

PlayInfoRequest::~PlayInfoRequest() {}

std::string PlayInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PlayInfoRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string PlayInfoRequest::getFormats() const {
  return formats_;
}

void PlayInfoRequest::setFormats(const std::string &formats) {
  formats_ = formats;
  setParameter(std::string("Formats"), formats);
}

std::string PlayInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PlayInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PlayInfoRequest::getRand() const {
  return rand_;
}

void PlayInfoRequest::setRand(const std::string &rand) {
  rand_ = rand;
  setParameter(std::string("Rand"), rand);
}

long PlayInfoRequest::getAuthTimeout() const {
  return authTimeout_;
}

void PlayInfoRequest::setAuthTimeout(long authTimeout) {
  authTimeout_ = authTimeout;
  setParameter(std::string("AuthTimeout"), std::to_string(authTimeout));
}

std::string PlayInfoRequest::getPlayDomain() const {
  return playDomain_;
}

void PlayInfoRequest::setPlayDomain(const std::string &playDomain) {
  playDomain_ = playDomain;
  setParameter(std::string("PlayDomain"), playDomain);
}

std::string PlayInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PlayInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string PlayInfoRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void PlayInfoRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string PlayInfoRequest::getHlsUriToken() const {
  return hlsUriToken_;
}

void PlayInfoRequest::setHlsUriToken(const std::string &hlsUriToken) {
  hlsUriToken_ = hlsUriToken;
  setParameter(std::string("HlsUriToken"), hlsUriToken);
}

std::string PlayInfoRequest::getTerminal() const {
  return terminal_;
}

void PlayInfoRequest::setTerminal(const std::string &terminal) {
  terminal_ = terminal;
  setParameter(std::string("Terminal"), terminal);
}

std::string PlayInfoRequest::getOwnerId() const {
  return ownerId_;
}

void PlayInfoRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string PlayInfoRequest::getMediaId() const {
  return mediaId_;
}

void PlayInfoRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string PlayInfoRequest::getAuthInfo() const {
  return authInfo_;
}

void PlayInfoRequest::setAuthInfo(const std::string &authInfo) {
  authInfo_ = authInfo;
  setParameter(std::string("AuthInfo"), authInfo);
}

