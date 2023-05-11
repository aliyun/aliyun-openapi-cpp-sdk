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

#include <alibabacloud/alidns/model/AddDnsCacheDomainRequest.h>

using AlibabaCloud::Alidns::Model::AddDnsCacheDomainRequest;

AddDnsCacheDomainRequest::AddDnsCacheDomainRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddDnsCacheDomain") {
  setMethod(HttpRequest::Method::Post);
}

AddDnsCacheDomainRequest::~AddDnsCacheDomainRequest() {}

std::string AddDnsCacheDomainRequest::getRemark() const {
  return remark_;
}

void AddDnsCacheDomainRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddDnsCacheDomainRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddDnsCacheDomainRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddDnsCacheDomainRequest::getSourceProtocol() const {
  return sourceProtocol_;
}

void AddDnsCacheDomainRequest::setSourceProtocol(const std::string &sourceProtocol) {
  sourceProtocol_ = sourceProtocol;
  setParameter(std::string("SourceProtocol"), sourceProtocol);
}

std::string AddDnsCacheDomainRequest::getLang() const {
  return lang_;
}

void AddDnsCacheDomainRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string AddDnsCacheDomainRequest::getDomainName() const {
  return domainName_;
}

void AddDnsCacheDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int AddDnsCacheDomainRequest::getCacheTtlMax() const {
  return cacheTtlMax_;
}

void AddDnsCacheDomainRequest::setCacheTtlMax(int cacheTtlMax) {
  cacheTtlMax_ = cacheTtlMax;
  setParameter(std::string("CacheTtlMax"), std::to_string(cacheTtlMax));
}

std::string AddDnsCacheDomainRequest::getInstanceId() const {
  return instanceId_;
}

void AddDnsCacheDomainRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddDnsCacheDomainRequest::getSourceEdns() const {
  return sourceEdns_;
}

void AddDnsCacheDomainRequest::setSourceEdns(const std::string &sourceEdns) {
  sourceEdns_ = sourceEdns;
  setParameter(std::string("SourceEdns"), sourceEdns);
}

std::string AddDnsCacheDomainRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddDnsCacheDomainRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int AddDnsCacheDomainRequest::getCacheTtlMin() const {
  return cacheTtlMin_;
}

void AddDnsCacheDomainRequest::setCacheTtlMin(int cacheTtlMin) {
  cacheTtlMin_ = cacheTtlMin;
  setParameter(std::string("CacheTtlMin"), std::to_string(cacheTtlMin));
}

std::vector<AddDnsCacheDomainRequest::SourceDnsServer> AddDnsCacheDomainRequest::getSourceDnsServer() const {
  return sourceDnsServer_;
}

void AddDnsCacheDomainRequest::setSourceDnsServer(const std::vector<AddDnsCacheDomainRequest::SourceDnsServer> &sourceDnsServer) {
  sourceDnsServer_ = sourceDnsServer;
  for(int dep1 = 0; dep1 != sourceDnsServer.size(); dep1++) {
  auto sourceDnsServerObj = sourceDnsServer.at(dep1);
  std::string sourceDnsServerObjStr = std::string("SourceDnsServer") + "." + std::to_string(dep1 + 1);
    setParameter(sourceDnsServerObjStr + ".Port", sourceDnsServerObj.port);
    setParameter(sourceDnsServerObjStr + ".Host", sourceDnsServerObj.host);
  }
}

