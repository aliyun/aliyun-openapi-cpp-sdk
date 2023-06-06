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

#include <alibabacloud/sas/model/CreateCustomBlockRecordRequest.h>

using AlibabaCloud::Sas::Model::CreateCustomBlockRecordRequest;

CreateCustomBlockRecordRequest::CreateCustomBlockRecordRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateCustomBlockRecord") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomBlockRecordRequest::~CreateCustomBlockRecordRequest() {}

long CreateCustomBlockRecordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCustomBlockRecordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCustomBlockRecordRequest::getBlockIp() const {
  return blockIp_;
}

void CreateCustomBlockRecordRequest::setBlockIp(const std::string &blockIp) {
  blockIp_ = blockIp;
  setParameter(std::string("BlockIp"), blockIp);
}

std::string CreateCustomBlockRecordRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateCustomBlockRecordRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long CreateCustomBlockRecordRequest::getExpireTime() const {
  return expireTime_;
}

void CreateCustomBlockRecordRequest::setExpireTime(long expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string CreateCustomBlockRecordRequest::getBound() const {
  return bound_;
}

void CreateCustomBlockRecordRequest::setBound(const std::string &bound) {
  bound_ = bound;
  setParameter(std::string("Bound"), bound);
}

std::string CreateCustomBlockRecordRequest::getUuids() const {
  return uuids_;
}

void CreateCustomBlockRecordRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

