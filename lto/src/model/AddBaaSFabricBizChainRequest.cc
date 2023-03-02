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

#include <alibabacloud/lto/model/AddBaaSFabricBizChainRequest.h>

using AlibabaCloud::Lto::Model::AddBaaSFabricBizChainRequest;

AddBaaSFabricBizChainRequest::AddBaaSFabricBizChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "AddBaaSFabricBizChain") {
  setMethod(HttpRequest::Method::Post);
}

AddBaaSFabricBizChainRequest::~AddBaaSFabricBizChainRequest() {}

std::string AddBaaSFabricBizChainRequest::getBaaSFabricConsortiumId() const {
  return baaSFabricConsortiumId_;
}

void AddBaaSFabricBizChainRequest::setBaaSFabricConsortiumId(const std::string &baaSFabricConsortiumId) {
  baaSFabricConsortiumId_ = baaSFabricConsortiumId;
  setParameter(std::string("BaaSFabricConsortiumId"), baaSFabricConsortiumId);
}

std::string AddBaaSFabricBizChainRequest::getRemark() const {
  return remark_;
}

void AddBaaSFabricBizChainRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddBaaSFabricBizChainRequest::getRegionId() const {
  return regionId_;
}

void AddBaaSFabricBizChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddBaaSFabricBizChainRequest::getName() const {
  return name_;
}

void AddBaaSFabricBizChainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddBaaSFabricBizChainRequest::getBaaSFabricChannelId() const {
  return baaSFabricChannelId_;
}

void AddBaaSFabricBizChainRequest::setBaaSFabricChannelId(const std::string &baaSFabricChannelId) {
  baaSFabricChannelId_ = baaSFabricChannelId;
  setParameter(std::string("BaaSFabricChannelId"), baaSFabricChannelId);
}

std::string AddBaaSFabricBizChainRequest::getBaaSFabricOrganizationId() const {
  return baaSFabricOrganizationId_;
}

void AddBaaSFabricBizChainRequest::setBaaSFabricOrganizationId(const std::string &baaSFabricOrganizationId) {
  baaSFabricOrganizationId_ = baaSFabricOrganizationId;
  setParameter(std::string("BaaSFabricOrganizationId"), baaSFabricOrganizationId);
}

std::string AddBaaSFabricBizChainRequest::getContractTemplateIdList() const {
  return contractTemplateIdList_;
}

void AddBaaSFabricBizChainRequest::setContractTemplateIdList(const std::string &contractTemplateIdList) {
  contractTemplateIdList_ = contractTemplateIdList;
  setParameter(std::string("ContractTemplateIdList"), contractTemplateIdList);
}

