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

#include <alibabacloud/alidns/model/CopyGtmConfigRequest.h>

using AlibabaCloud::Alidns::Model::CopyGtmConfigRequest;

CopyGtmConfigRequest::CopyGtmConfigRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "CopyGtmConfig") {
  setMethod(HttpRequest::Method::Post);
}

CopyGtmConfigRequest::~CopyGtmConfigRequest() {}

std::string CopyGtmConfigRequest::getSourceId() const {
  return sourceId_;
}

void CopyGtmConfigRequest::setSourceId(const std::string &sourceId) {
  sourceId_ = sourceId;
  setParameter(std::string("SourceId"), sourceId);
}

std::string CopyGtmConfigRequest::getTargetId() const {
  return targetId_;
}

void CopyGtmConfigRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string CopyGtmConfigRequest::getCopyType() const {
  return copyType_;
}

void CopyGtmConfigRequest::setCopyType(const std::string &copyType) {
  copyType_ = copyType;
  setParameter(std::string("CopyType"), copyType);
}

std::string CopyGtmConfigRequest::getUserClientIp() const {
  return userClientIp_;
}

void CopyGtmConfigRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string CopyGtmConfigRequest::getLang() const {
  return lang_;
}

void CopyGtmConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

