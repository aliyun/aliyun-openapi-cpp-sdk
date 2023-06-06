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

#include <alibabacloud/sas/model/DisableCustomBlockRecordRequest.h>

using AlibabaCloud::Sas::Model::DisableCustomBlockRecordRequest;

DisableCustomBlockRecordRequest::DisableCustomBlockRecordRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DisableCustomBlockRecord") {
  setMethod(HttpRequest::Method::Post);
}

DisableCustomBlockRecordRequest::~DisableCustomBlockRecordRequest() {}

long DisableCustomBlockRecordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableCustomBlockRecordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableCustomBlockRecordRequest::getBlockIp() const {
  return blockIp_;
}

void DisableCustomBlockRecordRequest::setBlockIp(const std::string &blockIp) {
  blockIp_ = blockIp;
  setParameter(std::string("BlockIp"), blockIp);
}

std::string DisableCustomBlockRecordRequest::getSourceIp() const {
  return sourceIp_;
}

void DisableCustomBlockRecordRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DisableCustomBlockRecordRequest::getBound() const {
  return bound_;
}

void DisableCustomBlockRecordRequest::setBound(const std::string &bound) {
  bound_ = bound;
  setParameter(std::string("Bound"), bound);
}

