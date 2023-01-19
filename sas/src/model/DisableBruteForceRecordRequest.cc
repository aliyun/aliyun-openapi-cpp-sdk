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

#include <alibabacloud/sas/model/DisableBruteForceRecordRequest.h>

using AlibabaCloud::Sas::Model::DisableBruteForceRecordRequest;

DisableBruteForceRecordRequest::DisableBruteForceRecordRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DisableBruteForceRecord") {
  setMethod(HttpRequest::Method::Post);
}

DisableBruteForceRecordRequest::~DisableBruteForceRecordRequest() {}

long DisableBruteForceRecordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableBruteForceRecordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableBruteForceRecordRequest::getBlockIp() const {
  return blockIp_;
}

void DisableBruteForceRecordRequest::setBlockIp(const std::string &blockIp) {
  blockIp_ = blockIp;
  setParameter(std::string("BlockIp"), blockIp);
}

std::string DisableBruteForceRecordRequest::getUuid() const {
  return uuid_;
}

void DisableBruteForceRecordRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DisableBruteForceRecordRequest::getSourceIp() const {
  return sourceIp_;
}

void DisableBruteForceRecordRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DisableBruteForceRecordRequest::getId() const {
  return id_;
}

void DisableBruteForceRecordRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string DisableBruteForceRecordRequest::getBound() const {
  return bound_;
}

void DisableBruteForceRecordRequest::setBound(const std::string &bound) {
  bound_ = bound;
  setParameter(std::string("Bound"), bound);
}

std::string DisableBruteForceRecordRequest::getPort() const {
  return port_;
}

void DisableBruteForceRecordRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

