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

#include <alibabacloud/oceanbasepro/model/CreateOceanBaseDataSourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateOceanBaseDataSourceRequest;

CreateOceanBaseDataSourceRequest::CreateOceanBaseDataSourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateOceanBaseDataSource") {
  setMethod(HttpRequest::Method::Post);
}

CreateOceanBaseDataSourceRequest::~CreateOceanBaseDataSourceRequest() {}

std::string CreateOceanBaseDataSourceRequest::getCluster() const {
  return cluster_;
}

void CreateOceanBaseDataSourceRequest::setCluster(const std::string &cluster) {
  cluster_ = cluster;
  setBodyParameter(std::string("Cluster"), cluster);
}

std::string CreateOceanBaseDataSourceRequest::getDrcUserName() const {
  return drcUserName_;
}

void CreateOceanBaseDataSourceRequest::setDrcUserName(const std::string &drcUserName) {
  drcUserName_ = drcUserName;
  setBodyParameter(std::string("DrcUserName"), drcUserName);
}

std::string CreateOceanBaseDataSourceRequest::getLogProxyIp() const {
  return logProxyIp_;
}

void CreateOceanBaseDataSourceRequest::setLogProxyIp(const std::string &logProxyIp) {
  logProxyIp_ = logProxyIp;
  setBodyParameter(std::string("LogProxyIp"), logProxyIp);
}

std::string CreateOceanBaseDataSourceRequest::getDescription() const {
  return description_;
}

void CreateOceanBaseDataSourceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateOceanBaseDataSourceRequest::getType() const {
  return type_;
}

void CreateOceanBaseDataSourceRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string CreateOceanBaseDataSourceRequest::getPassword() const {
  return password_;
}

void CreateOceanBaseDataSourceRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string CreateOceanBaseDataSourceRequest::getInnerDrcPassword() const {
  return innerDrcPassword_;
}

void CreateOceanBaseDataSourceRequest::setInnerDrcPassword(const std::string &innerDrcPassword) {
  innerDrcPassword_ = innerDrcPassword;
  setBodyParameter(std::string("InnerDrcPassword"), innerDrcPassword);
}

std::string CreateOceanBaseDataSourceRequest::getTenant() const {
  return tenant_;
}

void CreateOceanBaseDataSourceRequest::setTenant(const std::string &tenant) {
  tenant_ = tenant;
  setBodyParameter(std::string("Tenant"), tenant);
}

std::string CreateOceanBaseDataSourceRequest::getConfigUrl() const {
  return configUrl_;
}

void CreateOceanBaseDataSourceRequest::setConfigUrl(const std::string &configUrl) {
  configUrl_ = configUrl;
  setBodyParameter(std::string("ConfigUrl"), configUrl);
}

std::string CreateOceanBaseDataSourceRequest::getIp() const {
  return ip_;
}

void CreateOceanBaseDataSourceRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setBodyParameter(std::string("Ip"), ip);
}

int CreateOceanBaseDataSourceRequest::getPort() const {
  return port_;
}

void CreateOceanBaseDataSourceRequest::setPort(int port) {
  port_ = port;
  setBodyParameter(std::string("Port"), std::to_string(port));
}

std::string CreateOceanBaseDataSourceRequest::getVpcId() const {
  return vpcId_;
}

void CreateOceanBaseDataSourceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::string CreateOceanBaseDataSourceRequest::getName() const {
  return name_;
}

void CreateOceanBaseDataSourceRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateOceanBaseDataSourceRequest::getDrcPassword() const {
  return drcPassword_;
}

void CreateOceanBaseDataSourceRequest::setDrcPassword(const std::string &drcPassword) {
  drcPassword_ = drcPassword;
  setBodyParameter(std::string("DrcPassword"), drcPassword);
}

std::string CreateOceanBaseDataSourceRequest::getLogProxyPort() const {
  return logProxyPort_;
}

void CreateOceanBaseDataSourceRequest::setLogProxyPort(const std::string &logProxyPort) {
  logProxyPort_ = logProxyPort;
  setBodyParameter(std::string("LogProxyPort"), logProxyPort);
}

std::string CreateOceanBaseDataSourceRequest::getUserName() const {
  return userName_;
}

void CreateOceanBaseDataSourceRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

