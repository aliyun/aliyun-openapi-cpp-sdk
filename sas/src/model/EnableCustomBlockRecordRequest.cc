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

#include <alibabacloud/sas/model/EnableCustomBlockRecordRequest.h>

using AlibabaCloud::Sas::Model::EnableCustomBlockRecordRequest;

EnableCustomBlockRecordRequest::EnableCustomBlockRecordRequest()
    : RpcServiceRequest("sas", "2018-12-03", "EnableCustomBlockRecord") {
  setMethod(HttpRequest::Method::Post);
}

EnableCustomBlockRecordRequest::~EnableCustomBlockRecordRequest() {}

long EnableCustomBlockRecordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableCustomBlockRecordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableCustomBlockRecordRequest::getBlockIp() const {
  return blockIp_;
}

void EnableCustomBlockRecordRequest::setBlockIp(const std::string &blockIp) {
  blockIp_ = blockIp;
  setParameter(std::string("BlockIp"), blockIp);
}

std::string EnableCustomBlockRecordRequest::getSourceIp() const {
  return sourceIp_;
}

void EnableCustomBlockRecordRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string EnableCustomBlockRecordRequest::getBound() const {
  return bound_;
}

void EnableCustomBlockRecordRequest::setBound(const std::string &bound) {
  bound_ = bound;
  setParameter(std::string("Bound"), bound);
}

