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

#include <alibabacloud/domain/model/SetupDomainAutoRenewRequest.h>

using AlibabaCloud::Domain::Model::SetupDomainAutoRenewRequest;

SetupDomainAutoRenewRequest::SetupDomainAutoRenewRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SetupDomainAutoRenew") {
  setMethod(HttpRequest::Method::Post);
}

SetupDomainAutoRenewRequest::~SetupDomainAutoRenewRequest() {}

std::string SetupDomainAutoRenewRequest::getInstanceId() const {
  return instanceId_;
}

void SetupDomainAutoRenewRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SetupDomainAutoRenewRequest::getOperation() const {
  return operation_;
}

void SetupDomainAutoRenewRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("Operation"), operation);
}

