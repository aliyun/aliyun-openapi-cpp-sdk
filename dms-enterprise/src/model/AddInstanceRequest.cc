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

#include <alibabacloud/dms-enterprise/model/AddInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::AddInstanceRequest;

AddInstanceRequest::AddInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "AddInstance") {
  setMethod(HttpRequest::Method::Post);
}

AddInstanceRequest::~AddInstanceRequest() {}

std::string AddInstanceRequest::getEcsRegion() const {
  return ecsRegion_;
}

void AddInstanceRequest::setEcsRegion(const std::string &ecsRegion) {
  ecsRegion_ = ecsRegion;
  setParameter(std::string("EcsRegion"), ecsRegion);
}

std::string AddInstanceRequest::getNetworkType() const {
  return networkType_;
}

void AddInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

long AddInstanceRequest::getTid() const {
  return tid_;
}

void AddInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int AddInstanceRequest::getUseSsl() const {
  return useSsl_;
}

void AddInstanceRequest::setUseSsl(int useSsl) {
  useSsl_ = useSsl;
  setParameter(std::string("UseSsl"), std::to_string(useSsl));
}

std::string AddInstanceRequest::getEnableSellCommon() const {
  return enableSellCommon_;
}

void AddInstanceRequest::setEnableSellCommon(const std::string &enableSellCommon) {
  enableSellCommon_ = enableSellCommon;
  setParameter(std::string("EnableSellCommon"), enableSellCommon);
}

std::string AddInstanceRequest::getEnableSellSitd() const {
  return enableSellSitd_;
}

void AddInstanceRequest::setEnableSellSitd(const std::string &enableSellSitd) {
  enableSellSitd_ = enableSellSitd;
  setParameter(std::string("EnableSellSitd"), enableSellSitd);
}

std::string AddInstanceRequest::getInstanceSource() const {
  return instanceSource_;
}

void AddInstanceRequest::setInstanceSource(const std::string &instanceSource) {
  instanceSource_ = instanceSource;
  setParameter(std::string("InstanceSource"), instanceSource);
}

std::string AddInstanceRequest::getEnvType() const {
  return envType_;
}

void AddInstanceRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string AddInstanceRequest::getHost() const {
  return host_;
}

void AddInstanceRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

int AddInstanceRequest::getQueryTimeout() const {
  return queryTimeout_;
}

void AddInstanceRequest::setQueryTimeout(int queryTimeout) {
  queryTimeout_ = queryTimeout;
  setParameter(std::string("QueryTimeout"), std::to_string(queryTimeout));
}

std::string AddInstanceRequest::getEcsInstanceId() const {
  return ecsInstanceId_;
}

void AddInstanceRequest::setEcsInstanceId(const std::string &ecsInstanceId) {
  ecsInstanceId_ = ecsInstanceId;
  setParameter(std::string("EcsInstanceId"), ecsInstanceId);
}

int AddInstanceRequest::getExportTimeout() const {
  return exportTimeout_;
}

void AddInstanceRequest::setExportTimeout(int exportTimeout) {
  exportTimeout_ = exportTimeout;
  setParameter(std::string("ExportTimeout"), std::to_string(exportTimeout));
}

long AddInstanceRequest::getTemplateId() const {
  return templateId_;
}

void AddInstanceRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string AddInstanceRequest::getEnableSellTrust() const {
  return enableSellTrust_;
}

void AddInstanceRequest::setEnableSellTrust(const std::string &enableSellTrust) {
  enableSellTrust_ = enableSellTrust;
  setParameter(std::string("EnableSellTrust"), enableSellTrust);
}

int AddInstanceRequest::getPort() const {
  return port_;
}

void AddInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string AddInstanceRequest::getSafeRule() const {
  return safeRule_;
}

void AddInstanceRequest::setSafeRule(const std::string &safeRule) {
  safeRule_ = safeRule;
  setParameter(std::string("SafeRule"), safeRule);
}

int AddInstanceRequest::getDdlOnline() const {
  return ddlOnline_;
}

void AddInstanceRequest::setDdlOnline(int ddlOnline) {
  ddlOnline_ = ddlOnline;
  setParameter(std::string("DdlOnline"), std::to_string(ddlOnline));
}

int AddInstanceRequest::getUseDsql() const {
  return useDsql_;
}

void AddInstanceRequest::setUseDsql(int useDsql) {
  useDsql_ = useDsql;
  setParameter(std::string("UseDsql"), std::to_string(useDsql));
}

std::string AddInstanceRequest::getEnableSellStable() const {
  return enableSellStable_;
}

void AddInstanceRequest::setEnableSellStable(const std::string &enableSellStable) {
  enableSellStable_ = enableSellStable;
  setParameter(std::string("EnableSellStable"), enableSellStable);
}

std::string AddInstanceRequest::getSid() const {
  return sid_;
}

void AddInstanceRequest::setSid(const std::string &sid) {
  sid_ = sid;
  setParameter(std::string("Sid"), sid);
}

long AddInstanceRequest::getDbaId() const {
  return dbaId_;
}

void AddInstanceRequest::setDbaId(long dbaId) {
  dbaId_ = dbaId;
  setParameter(std::string("DbaId"), std::to_string(dbaId));
}

std::string AddInstanceRequest::getDataLinkName() const {
  return dataLinkName_;
}

void AddInstanceRequest::setDataLinkName(const std::string &dataLinkName) {
  dataLinkName_ = dataLinkName;
  setParameter(std::string("DataLinkName"), dataLinkName);
}

std::string AddInstanceRequest::getTemplateType() const {
  return templateType_;
}

void AddInstanceRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string AddInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void AddInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string AddInstanceRequest::getDatabasePassword() const {
  return databasePassword_;
}

void AddInstanceRequest::setDatabasePassword(const std::string &databasePassword) {
  databasePassword_ = databasePassword;
  setParameter(std::string("DatabasePassword"), databasePassword);
}

std::string AddInstanceRequest::getInstanceAlias() const {
  return instanceAlias_;
}

void AddInstanceRequest::setInstanceAlias(const std::string &instanceAlias) {
  instanceAlias_ = instanceAlias;
  setParameter(std::string("InstanceAlias"), instanceAlias);
}

std::string AddInstanceRequest::getDatabaseUser() const {
  return databaseUser_;
}

void AddInstanceRequest::setDatabaseUser(const std::string &databaseUser) {
  databaseUser_ = databaseUser;
  setParameter(std::string("DatabaseUser"), databaseUser);
}

std::string AddInstanceRequest::getVpcId() const {
  return vpcId_;
}

void AddInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

bool AddInstanceRequest::getSkipTest() const {
  return skipTest_;
}

void AddInstanceRequest::setSkipTest(bool skipTest) {
  skipTest_ = skipTest;
  setParameter(std::string("SkipTest"), skipTest ? "true" : "false");
}

