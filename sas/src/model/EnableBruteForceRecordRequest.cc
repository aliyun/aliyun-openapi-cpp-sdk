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

#include <alibabacloud/sas/model/EnableBruteForceRecordRequest.h>

using AlibabaCloud::Sas::Model::EnableBruteForceRecordRequest;

EnableBruteForceRecordRequest::EnableBruteForceRecordRequest()
    : RpcServiceRequest("sas", "2018-12-03", "EnableBruteForceRecord") {
  setMethod(HttpRequest::Method::Post);
}

EnableBruteForceRecordRequest::~EnableBruteForceRecordRequest() {}

long EnableBruteForceRecordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableBruteForceRecordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableBruteForceRecordRequest::getBlockIp() const {
  return blockIp_;
}

void EnableBruteForceRecordRequest::setBlockIp(const std::string &blockIp) {
  blockIp_ = blockIp;
  setParameter(std::string("BlockIp"), blockIp);
}

std::string EnableBruteForceRecordRequest::getUuid() const {
  return uuid_;
}

void EnableBruteForceRecordRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string EnableBruteForceRecordRequest::getSourceIp() const {
  return sourceIp_;
}

void EnableBruteForceRecordRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long EnableBruteForceRecordRequest::getId() const {
  return id_;
}

void EnableBruteForceRecordRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string EnableBruteForceRecordRequest::getBound() const {
  return bound_;
}

void EnableBruteForceRecordRequest::setBound(const std::string &bound) {
  bound_ = bound;
  setParameter(std::string("Bound"), bound);
}

std::string EnableBruteForceRecordRequest::getPort() const {
  return port_;
}

void EnableBruteForceRecordRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

