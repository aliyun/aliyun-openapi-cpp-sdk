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

#include <alibabacloud/alidns/model/UpdateDnsCacheDomainRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDnsCacheDomainRequest;

UpdateDnsCacheDomainRequest::UpdateDnsCacheDomainRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateDnsCacheDomain") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDnsCacheDomainRequest::~UpdateDnsCacheDomainRequest() {}

std::string UpdateDnsCacheDomainRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateDnsCacheDomainRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateDnsCacheDomainRequest::getSourceProtocol() const {
  return sourceProtocol_;
}

void UpdateDnsCacheDomainRequest::setSourceProtocol(const std::string &sourceProtocol) {
  sourceProtocol_ = sourceProtocol;
  setParameter(std::string("SourceProtocol"), sourceProtocol);
}

std::string UpdateDnsCacheDomainRequest::getLang() const {
  return lang_;
}

void UpdateDnsCacheDomainRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string UpdateDnsCacheDomainRequest::getDomainName() const {
  return domainName_;
}

void UpdateDnsCacheDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int UpdateDnsCacheDomainRequest::getCacheTtlMax() const {
  return cacheTtlMax_;
}

void UpdateDnsCacheDomainRequest::setCacheTtlMax(int cacheTtlMax) {
  cacheTtlMax_ = cacheTtlMax;
  setParameter(std::string("CacheTtlMax"), std::to_string(cacheTtlMax));
}

std::string UpdateDnsCacheDomainRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateDnsCacheDomainRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateDnsCacheDomainRequest::getSourceEdns() const {
  return sourceEdns_;
}

void UpdateDnsCacheDomainRequest::setSourceEdns(const std::string &sourceEdns) {
  sourceEdns_ = sourceEdns;
  setParameter(std::string("SourceEdns"), sourceEdns);
}

std::string UpdateDnsCacheDomainRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDnsCacheDomainRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int UpdateDnsCacheDomainRequest::getCacheTtlMin() const {
  return cacheTtlMin_;
}

void UpdateDnsCacheDomainRequest::setCacheTtlMin(int cacheTtlMin) {
  cacheTtlMin_ = cacheTtlMin;
  setParameter(std::string("CacheTtlMin"), std::to_string(cacheTtlMin));
}

std::vector<UpdateDnsCacheDomainRequest::SourceDnsServer> UpdateDnsCacheDomainRequest::getSourceDnsServer() const {
  return sourceDnsServer_;
}

void UpdateDnsCacheDomainRequest::setSourceDnsServer(const std::vector<UpdateDnsCacheDomainRequest::SourceDnsServer> &sourceDnsServer) {
  sourceDnsServer_ = sourceDnsServer;
  for(int dep1 = 0; dep1 != sourceDnsServer.size(); dep1++) {
  auto sourceDnsServerObj = sourceDnsServer.at(dep1);
  std::string sourceDnsServerObjStr = std::string("SourceDnsServer") + "." + std::to_string(dep1 + 1);
    setParameter(sourceDnsServerObjStr + ".Port", sourceDnsServerObj.port);
    setParameter(sourceDnsServerObjStr + ".Host", sourceDnsServerObj.host);
  }
}

