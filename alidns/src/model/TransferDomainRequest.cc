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

#include <alibabacloud/alidns/model/TransferDomainRequest.h>

using AlibabaCloud::Alidns::Model::TransferDomainRequest;

TransferDomainRequest::TransferDomainRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "TransferDomain") {
  setMethod(HttpRequest::Method::Post);
}

TransferDomainRequest::~TransferDomainRequest() {}

std::string TransferDomainRequest::getDomainNames() const {
  return domainNames_;
}

void TransferDomainRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string TransferDomainRequest::getRemark() const {
  return remark_;
}

void TransferDomainRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string TransferDomainRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TransferDomainRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long TransferDomainRequest::getTargetUserId() const {
  return targetUserId_;
}

void TransferDomainRequest::setTargetUserId(long targetUserId) {
  targetUserId_ = targetUserId;
  setParameter(std::string("TargetUserId"), std::to_string(targetUserId));
}

std::string TransferDomainRequest::getUserClientIp() const {
  return userClientIp_;
}

void TransferDomainRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string TransferDomainRequest::getLang() const {
  return lang_;
}

void TransferDomainRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

