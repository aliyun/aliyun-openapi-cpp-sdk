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

#include <alibabacloud/domain/model/SaveSingleTaskForAddingDSRecordRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForAddingDSRecordRequest;

SaveSingleTaskForAddingDSRecordRequest::SaveSingleTaskForAddingDSRecordRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForAddingDSRecord") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForAddingDSRecordRequest::~SaveSingleTaskForAddingDSRecordRequest() {}

int SaveSingleTaskForAddingDSRecordRequest::getKeyTag() const {
  return keyTag_;
}

void SaveSingleTaskForAddingDSRecordRequest::setKeyTag(int keyTag) {
  keyTag_ = keyTag;
  setParameter(std::string("KeyTag"), std::to_string(keyTag));
}

std::string SaveSingleTaskForAddingDSRecordRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForAddingDSRecordRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SaveSingleTaskForAddingDSRecordRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForAddingDSRecordRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int SaveSingleTaskForAddingDSRecordRequest::getDigestType() const {
  return digestType_;
}

void SaveSingleTaskForAddingDSRecordRequest::setDigestType(int digestType) {
  digestType_ = digestType;
  setParameter(std::string("DigestType"), std::to_string(digestType));
}

std::string SaveSingleTaskForAddingDSRecordRequest::getDigest() const {
  return digest_;
}

void SaveSingleTaskForAddingDSRecordRequest::setDigest(const std::string &digest) {
  digest_ = digest;
  setParameter(std::string("Digest"), digest);
}

std::string SaveSingleTaskForAddingDSRecordRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForAddingDSRecordRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int SaveSingleTaskForAddingDSRecordRequest::getAlgorithm() const {
  return algorithm_;
}

void SaveSingleTaskForAddingDSRecordRequest::setAlgorithm(int algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), std::to_string(algorithm));
}

