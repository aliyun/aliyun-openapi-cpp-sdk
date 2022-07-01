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

#include <alibabacloud/ddoscoo/model/AddAutoCcBlacklistRequest.h>

using AlibabaCloud::Ddoscoo::Model::AddAutoCcBlacklistRequest;

AddAutoCcBlacklistRequest::AddAutoCcBlacklistRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "AddAutoCcBlacklist") {
  setMethod(HttpRequest::Method::Post);
}

AddAutoCcBlacklistRequest::~AddAutoCcBlacklistRequest() {}

int AddAutoCcBlacklistRequest::getExpireTime() const {
  return expireTime_;
}

void AddAutoCcBlacklistRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string AddAutoCcBlacklistRequest::getBlacklist() const {
  return blacklist_;
}

void AddAutoCcBlacklistRequest::setBlacklist(const std::string &blacklist) {
  blacklist_ = blacklist;
  setParameter(std::string("Blacklist"), blacklist);
}

std::string AddAutoCcBlacklistRequest::getInstanceId() const {
  return instanceId_;
}

void AddAutoCcBlacklistRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddAutoCcBlacklistRequest::getSourceIp() const {
  return sourceIp_;
}

void AddAutoCcBlacklistRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

