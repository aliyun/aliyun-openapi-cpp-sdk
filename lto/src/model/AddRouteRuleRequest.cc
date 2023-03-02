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

#include <alibabacloud/lto/model/AddRouteRuleRequest.h>

using AlibabaCloud::Lto::Model::AddRouteRuleRequest;

AddRouteRuleRequest::AddRouteRuleRequest()
    : RpcServiceRequest("lto", "2021-07-07", "AddRouteRule") {
  setMethod(HttpRequest::Method::Post);
}

AddRouteRuleRequest::~AddRouteRuleRequest() {}

std::string AddRouteRuleRequest::getContractTemplateId() const {
  return contractTemplateId_;
}

void AddRouteRuleRequest::setContractTemplateId(const std::string &contractTemplateId) {
  contractTemplateId_ = contractTemplateId;
  setParameter(std::string("ContractTemplateId"), contractTemplateId);
}

std::string AddRouteRuleRequest::getContractName() const {
  return contractName_;
}

void AddRouteRuleRequest::setContractName(const std::string &contractName) {
  contractName_ = contractName;
  setParameter(std::string("ContractName"), contractName);
}

std::string AddRouteRuleRequest::getPrivacyRuleId() const {
  return privacyRuleId_;
}

void AddRouteRuleRequest::setPrivacyRuleId(const std::string &privacyRuleId) {
  privacyRuleId_ = privacyRuleId;
  setParameter(std::string("PrivacyRuleId"), privacyRuleId);
}

std::string AddRouteRuleRequest::getRemark() const {
  return remark_;
}

void AddRouteRuleRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddRouteRuleRequest::getBizChainId() const {
  return bizChainId_;
}

void AddRouteRuleRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string AddRouteRuleRequest::getInvokeType() const {
  return invokeType_;
}

void AddRouteRuleRequest::setInvokeType(const std::string &invokeType) {
  invokeType_ = invokeType;
  setParameter(std::string("InvokeType"), invokeType);
}

std::string AddRouteRuleRequest::getRegionId() const {
  return regionId_;
}

void AddRouteRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddRouteRuleRequest::getDeviceGroupId() const {
  return deviceGroupId_;
}

void AddRouteRuleRequest::setDeviceGroupId(const std::string &deviceGroupId) {
  deviceGroupId_ = deviceGroupId;
  setParameter(std::string("DeviceGroupId"), deviceGroupId);
}

std::string AddRouteRuleRequest::getChainUpMode() const {
  return chainUpMode_;
}

void AddRouteRuleRequest::setChainUpMode(const std::string &chainUpMode) {
  chainUpMode_ = chainUpMode;
  setParameter(std::string("ChainUpMode"), chainUpMode);
}

