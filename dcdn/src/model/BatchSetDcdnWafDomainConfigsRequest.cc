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

#include <alibabacloud/dcdn/model/BatchSetDcdnWafDomainConfigsRequest.h>

using AlibabaCloud::Dcdn::Model::BatchSetDcdnWafDomainConfigsRequest;

BatchSetDcdnWafDomainConfigsRequest::BatchSetDcdnWafDomainConfigsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchSetDcdnWafDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

BatchSetDcdnWafDomainConfigsRequest::~BatchSetDcdnWafDomainConfigsRequest() {}

std::string BatchSetDcdnWafDomainConfigsRequest::getDomainNames() const {
  return domainNames_;
}

void BatchSetDcdnWafDomainConfigsRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setBodyParameter(std::string("DomainNames"), domainNames);
}

std::string BatchSetDcdnWafDomainConfigsRequest::getClientIpTag() const {
  return clientIpTag_;
}

void BatchSetDcdnWafDomainConfigsRequest::setClientIpTag(const std::string &clientIpTag) {
  clientIpTag_ = clientIpTag;
  setBodyParameter(std::string("ClientIpTag"), clientIpTag);
}

std::string BatchSetDcdnWafDomainConfigsRequest::getDefenseStatus() const {
  return defenseStatus_;
}

void BatchSetDcdnWafDomainConfigsRequest::setDefenseStatus(const std::string &defenseStatus) {
  defenseStatus_ = defenseStatus;
  setBodyParameter(std::string("DefenseStatus"), defenseStatus);
}

