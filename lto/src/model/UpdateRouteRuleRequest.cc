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

#include <alibabacloud/lto/model/UpdateRouteRuleRequest.h>

using AlibabaCloud::Lto::Model::UpdateRouteRuleRequest;

UpdateRouteRuleRequest::UpdateRouteRuleRequest()
    : RpcServiceRequest("lto", "2021-07-07", "UpdateRouteRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRouteRuleRequest::~UpdateRouteRuleRequest() {}

std::string UpdateRouteRuleRequest::getContractTemplateId() const {
  return contractTemplateId_;
}

void UpdateRouteRuleRequest::setContractTemplateId(const std::string &contractTemplateId) {
  contractTemplateId_ = contractTemplateId;
  setParameter(std::string("ContractTemplateId"), contractTemplateId);
}

std::string UpdateRouteRuleRequest::getContractName() const {
  return contractName_;
}

void UpdateRouteRuleRequest::setContractName(const std::string &contractName) {
  contractName_ = contractName;
  setParameter(std::string("ContractName"), contractName);
}

std::string UpdateRouteRuleRequest::getPrivacyRuleId() const {
  return privacyRuleId_;
}

void UpdateRouteRuleRequest::setPrivacyRuleId(const std::string &privacyRuleId) {
  privacyRuleId_ = privacyRuleId;
  setParameter(std::string("PrivacyRuleId"), privacyRuleId);
}

std::string UpdateRouteRuleRequest::getRemark() const {
  return remark_;
}

void UpdateRouteRuleRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string UpdateRouteRuleRequest::getBizChainId() const {
  return bizChainId_;
}

void UpdateRouteRuleRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UpdateRouteRuleRequest::getInvokeType() const {
  return invokeType_;
}

void UpdateRouteRuleRequest::setInvokeType(const std::string &invokeType) {
  invokeType_ = invokeType;
  setParameter(std::string("InvokeType"), invokeType);
}

std::string UpdateRouteRuleRequest::getRegionId() const {
  return regionId_;
}

void UpdateRouteRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateRouteRuleRequest::getRouteRuleId() const {
  return routeRuleId_;
}

void UpdateRouteRuleRequest::setRouteRuleId(const std::string &routeRuleId) {
  routeRuleId_ = routeRuleId;
  setParameter(std::string("RouteRuleId"), routeRuleId);
}

