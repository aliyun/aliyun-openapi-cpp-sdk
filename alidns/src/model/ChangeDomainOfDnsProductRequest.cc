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

#include <alibabacloud/alidns/model/ChangeDomainOfDnsProductRequest.h>

using AlibabaCloud::Alidns::Model::ChangeDomainOfDnsProductRequest;

ChangeDomainOfDnsProductRequest::ChangeDomainOfDnsProductRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "ChangeDomainOfDnsProduct") {
  setMethod(HttpRequest::Method::Post);
}

ChangeDomainOfDnsProductRequest::~ChangeDomainOfDnsProductRequest() {}

std::string ChangeDomainOfDnsProductRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ChangeDomainOfDnsProductRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ChangeDomainOfDnsProductRequest::getInstanceId() const {
  return instanceId_;
}

void ChangeDomainOfDnsProductRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ChangeDomainOfDnsProductRequest::getNewDomain() const {
  return newDomain_;
}

void ChangeDomainOfDnsProductRequest::setNewDomain(const std::string &newDomain) {
  newDomain_ = newDomain;
  setParameter(std::string("NewDomain"), newDomain);
}

std::string ChangeDomainOfDnsProductRequest::getUserClientIp() const {
  return userClientIp_;
}

void ChangeDomainOfDnsProductRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

bool ChangeDomainOfDnsProductRequest::getForce() const {
  return force_;
}

void ChangeDomainOfDnsProductRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

std::string ChangeDomainOfDnsProductRequest::getLang() const {
  return lang_;
}

void ChangeDomainOfDnsProductRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

