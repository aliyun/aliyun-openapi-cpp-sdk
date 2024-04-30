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

#include <alibabacloud/dcdn/model/SetDcdnFullDomainsBlockIPRequest.h>

using AlibabaCloud::Dcdn::Model::SetDcdnFullDomainsBlockIPRequest;

SetDcdnFullDomainsBlockIPRequest::SetDcdnFullDomainsBlockIPRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "SetDcdnFullDomainsBlockIP") {
  setMethod(HttpRequest::Method::Post);
}

SetDcdnFullDomainsBlockIPRequest::~SetDcdnFullDomainsBlockIPRequest() {}

int SetDcdnFullDomainsBlockIPRequest::getBlockInterval() const {
  return blockInterval_;
}

void SetDcdnFullDomainsBlockIPRequest::setBlockInterval(int blockInterval) {
  blockInterval_ = blockInterval;
  setBodyParameter(std::string("BlockInterval"), std::to_string(blockInterval));
}

std::string SetDcdnFullDomainsBlockIPRequest::getUpdateType() const {
  return updateType_;
}

void SetDcdnFullDomainsBlockIPRequest::setUpdateType(const std::string &updateType) {
  updateType_ = updateType;
  setBodyParameter(std::string("UpdateType"), updateType);
}

std::string SetDcdnFullDomainsBlockIPRequest::getOperationType() const {
  return operationType_;
}

void SetDcdnFullDomainsBlockIPRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setBodyParameter(std::string("OperationType"), operationType);
}

std::string SetDcdnFullDomainsBlockIPRequest::getIPList() const {
  return iPList_;
}

void SetDcdnFullDomainsBlockIPRequest::setIPList(const std::string &iPList) {
  iPList_ = iPList;
  setBodyParameter(std::string("IPList"), iPList);
}

