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

#include <alibabacloud/resourcecenter/model/GetMultiAccountResourceConfigurationRequest.h>

using AlibabaCloud::ResourceCenter::Model::GetMultiAccountResourceConfigurationRequest;

GetMultiAccountResourceConfigurationRequest::GetMultiAccountResourceConfigurationRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "GetMultiAccountResourceConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

GetMultiAccountResourceConfigurationRequest::~GetMultiAccountResourceConfigurationRequest() {}

std::string GetMultiAccountResourceConfigurationRequest::getAccountId() const {
  return accountId_;
}

void GetMultiAccountResourceConfigurationRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string GetMultiAccountResourceConfigurationRequest::getResourceRegionId() const {
  return resourceRegionId_;
}

void GetMultiAccountResourceConfigurationRequest::setResourceRegionId(const std::string &resourceRegionId) {
  resourceRegionId_ = resourceRegionId;
  setParameter(std::string("ResourceRegionId"), resourceRegionId);
}

std::string GetMultiAccountResourceConfigurationRequest::getResourceId() const {
  return resourceId_;
}

void GetMultiAccountResourceConfigurationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string GetMultiAccountResourceConfigurationRequest::getResourceType() const {
  return resourceType_;
}

void GetMultiAccountResourceConfigurationRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

