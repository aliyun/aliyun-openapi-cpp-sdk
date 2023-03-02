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

#include <alibabacloud/lto/model/AddBaaSAntChainBizChainRequest.h>

using AlibabaCloud::Lto::Model::AddBaaSAntChainBizChainRequest;

AddBaaSAntChainBizChainRequest::AddBaaSAntChainBizChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "AddBaaSAntChainBizChain") {
  setMethod(HttpRequest::Method::Post);
}

AddBaaSAntChainBizChainRequest::~AddBaaSAntChainBizChainRequest() {}

std::string AddBaaSAntChainBizChainRequest::getCaCertPassword() const {
  return caCertPassword_;
}

void AddBaaSAntChainBizChainRequest::setCaCertPassword(const std::string &caCertPassword) {
  caCertPassword_ = caCertPassword;
  setParameter(std::string("CaCertPassword"), caCertPassword);
}

std::string AddBaaSAntChainBizChainRequest::getNodeNameList() const {
  return nodeNameList_;
}

void AddBaaSAntChainBizChainRequest::setNodeNameList(const std::string &nodeNameList) {
  nodeNameList_ = nodeNameList;
  setParameter(std::string("NodeNameList"), nodeNameList);
}

std::string AddBaaSAntChainBizChainRequest::getRemark() const {
  return remark_;
}

void AddBaaSAntChainBizChainRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddBaaSAntChainBizChainRequest::getUserKey() const {
  return userKey_;
}

void AddBaaSAntChainBizChainRequest::setUserKey(const std::string &userKey) {
  userKey_ = userKey;
  setParameter(std::string("UserKey"), userKey);
}

std::string AddBaaSAntChainBizChainRequest::getClientCert() const {
  return clientCert_;
}

void AddBaaSAntChainBizChainRequest::setClientCert(const std::string &clientCert) {
  clientCert_ = clientCert;
  setParameter(std::string("ClientCert"), clientCert);
}

std::string AddBaaSAntChainBizChainRequest::getRegionId() const {
  return regionId_;
}

void AddBaaSAntChainBizChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddBaaSAntChainBizChainRequest::getBaaSAntChainConsortiumId() const {
  return baaSAntChainConsortiumId_;
}

void AddBaaSAntChainBizChainRequest::setBaaSAntChainConsortiumId(const std::string &baaSAntChainConsortiumId) {
  baaSAntChainConsortiumId_ = baaSAntChainConsortiumId;
  setParameter(std::string("BaaSAntChainConsortiumId"), baaSAntChainConsortiumId);
}

std::string AddBaaSAntChainBizChainRequest::getUserKeyPassword() const {
  return userKeyPassword_;
}

void AddBaaSAntChainBizChainRequest::setUserKeyPassword(const std::string &userKeyPassword) {
  userKeyPassword_ = userKeyPassword;
  setParameter(std::string("UserKeyPassword"), userKeyPassword);
}

std::string AddBaaSAntChainBizChainRequest::getBaaSAntChainChainId() const {
  return baaSAntChainChainId_;
}

void AddBaaSAntChainBizChainRequest::setBaaSAntChainChainId(const std::string &baaSAntChainChainId) {
  baaSAntChainChainId_ = baaSAntChainChainId;
  setParameter(std::string("BaaSAntChainChainId"), baaSAntChainChainId);
}

std::string AddBaaSAntChainBizChainRequest::getClientKey() const {
  return clientKey_;
}

void AddBaaSAntChainBizChainRequest::setClientKey(const std::string &clientKey) {
  clientKey_ = clientKey;
  setParameter(std::string("ClientKey"), clientKey);
}

std::string AddBaaSAntChainBizChainRequest::getCaCert() const {
  return caCert_;
}

void AddBaaSAntChainBizChainRequest::setCaCert(const std::string &caCert) {
  caCert_ = caCert;
  setParameter(std::string("CaCert"), caCert);
}

std::string AddBaaSAntChainBizChainRequest::getName() const {
  return name_;
}

void AddBaaSAntChainBizChainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddBaaSAntChainBizChainRequest::getClientKeyPassword() const {
  return clientKeyPassword_;
}

void AddBaaSAntChainBizChainRequest::setClientKeyPassword(const std::string &clientKeyPassword) {
  clientKeyPassword_ = clientKeyPassword;
  setParameter(std::string("ClientKeyPassword"), clientKeyPassword);
}

std::string AddBaaSAntChainBizChainRequest::getContractTemplateIdList() const {
  return contractTemplateIdList_;
}

void AddBaaSAntChainBizChainRequest::setContractTemplateIdList(const std::string &contractTemplateIdList) {
  contractTemplateIdList_ = contractTemplateIdList;
  setParameter(std::string("ContractTemplateIdList"), contractTemplateIdList);
}

std::string AddBaaSAntChainBizChainRequest::getUserName() const {
  return userName_;
}

void AddBaaSAntChainBizChainRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

