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

#include <alibabacloud/dms-enterprise/model/ModifyInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ModifyInstanceRequest;

ModifyInstanceRequest::ModifyInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ModifyInstance") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceRequest::~ModifyInstanceRequest() {}

std::string ModifyInstanceRequest::getEcsRegion() const {
  return ecsRegion_;
}

void ModifyInstanceRequest::setEcsRegion(const std::string &ecsRegion) {
  ecsRegion_ = ecsRegion;
  setParameter(std::string("EcsRegion"), ecsRegion);
}

std::string ModifyInstanceRequest::getNetworkType() const {
  return networkType_;
}

void ModifyInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

long ModifyInstanceRequest::getTid() const {
  return tid_;
}

void ModifyInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ModifyInstanceRequest::getUseSsl() const {
  return useSsl_;
}

void ModifyInstanceRequest::setUseSsl(int useSsl) {
  useSsl_ = useSsl;
  setParameter(std::string("UseSsl"), std::to_string(useSsl));
}

std::string ModifyInstanceRequest::getEnableSellCommon() const {
  return enableSellCommon_;
}

void ModifyInstanceRequest::setEnableSellCommon(const std::string &enableSellCommon) {
  enableSellCommon_ = enableSellCommon;
  setParameter(std::string("EnableSellCommon"), enableSellCommon);
}

std::string ModifyInstanceRequest::getEnableSellSitd() const {
  return enableSellSitd_;
}

void ModifyInstanceRequest::setEnableSellSitd(const std::string &enableSellSitd) {
  enableSellSitd_ = enableSellSitd;
  setParameter(std::string("EnableSellSitd"), enableSellSitd);
}

std::string ModifyInstanceRequest::getInstanceSource() const {
  return instanceSource_;
}

void ModifyInstanceRequest::setInstanceSource(const std::string &instanceSource) {
  instanceSource_ = instanceSource;
  setParameter(std::string("InstanceSource"), instanceSource);
}

std::string ModifyInstanceRequest::getEnvType() const {
  return envType_;
}

void ModifyInstanceRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string ModifyInstanceRequest::getHost() const {
  return host_;
}

void ModifyInstanceRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

int ModifyInstanceRequest::getQueryTimeout() const {
  return queryTimeout_;
}

void ModifyInstanceRequest::setQueryTimeout(int queryTimeout) {
  queryTimeout_ = queryTimeout;
  setParameter(std::string("QueryTimeout"), std::to_string(queryTimeout));
}

std::string ModifyInstanceRequest::getEcsInstanceId() const {
  return ecsInstanceId_;
}

void ModifyInstanceRequest::setEcsInstanceId(const std::string &ecsInstanceId) {
  ecsInstanceId_ = ecsInstanceId;
  setParameter(std::string("EcsInstanceId"), ecsInstanceId);
}

int ModifyInstanceRequest::getExportTimeout() const {
  return exportTimeout_;
}

void ModifyInstanceRequest::setExportTimeout(int exportTimeout) {
  exportTimeout_ = exportTimeout;
  setParameter(std::string("ExportTimeout"), std::to_string(exportTimeout));
}

long ModifyInstanceRequest::getTemplateId() const {
  return templateId_;
}

void ModifyInstanceRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string ModifyInstanceRequest::getEnableSellTrust() const {
  return enableSellTrust_;
}

void ModifyInstanceRequest::setEnableSellTrust(const std::string &enableSellTrust) {
  enableSellTrust_ = enableSellTrust;
  setParameter(std::string("EnableSellTrust"), enableSellTrust);
}

std::string ModifyInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ModifyInstanceRequest::getPort() const {
  return port_;
}

void ModifyInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string ModifyInstanceRequest::getSafeRule() const {
  return safeRule_;
}

void ModifyInstanceRequest::setSafeRule(const std::string &safeRule) {
  safeRule_ = safeRule;
  setParameter(std::string("SafeRule"), safeRule);
}

int ModifyInstanceRequest::getDdlOnline() const {
  return ddlOnline_;
}

void ModifyInstanceRequest::setDdlOnline(int ddlOnline) {
  ddlOnline_ = ddlOnline;
  setParameter(std::string("DdlOnline"), std::to_string(ddlOnline));
}

int ModifyInstanceRequest::getUseDsql() const {
  return useDsql_;
}

void ModifyInstanceRequest::setUseDsql(int useDsql) {
  useDsql_ = useDsql;
  setParameter(std::string("UseDsql"), std::to_string(useDsql));
}

std::string ModifyInstanceRequest::getEnableSellStable() const {
  return enableSellStable_;
}

void ModifyInstanceRequest::setEnableSellStable(const std::string &enableSellStable) {
  enableSellStable_ = enableSellStable;
  setParameter(std::string("EnableSellStable"), enableSellStable);
}

std::string ModifyInstanceRequest::getSid() const {
  return sid_;
}

void ModifyInstanceRequest::setSid(const std::string &sid) {
  sid_ = sid;
  setParameter(std::string("Sid"), sid);
}

long ModifyInstanceRequest::getDbaId() const {
  return dbaId_;
}

void ModifyInstanceRequest::setDbaId(long dbaId) {
  dbaId_ = dbaId;
  setParameter(std::string("DbaId"), std::to_string(dbaId));
}

std::string ModifyInstanceRequest::getDataLinkName() const {
  return dataLinkName_;
}

void ModifyInstanceRequest::setDataLinkName(const std::string &dataLinkName) {
  dataLinkName_ = dataLinkName;
  setParameter(std::string("DataLinkName"), dataLinkName);
}

std::string ModifyInstanceRequest::getTemplateType() const {
  return templateType_;
}

void ModifyInstanceRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string ModifyInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void ModifyInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string ModifyInstanceRequest::getDatabasePassword() const {
  return databasePassword_;
}

void ModifyInstanceRequest::setDatabasePassword(const std::string &databasePassword) {
  databasePassword_ = databasePassword;
  setParameter(std::string("DatabasePassword"), databasePassword);
}

std::string ModifyInstanceRequest::getInstanceAlias() const {
  return instanceAlias_;
}

void ModifyInstanceRequest::setInstanceAlias(const std::string &instanceAlias) {
  instanceAlias_ = instanceAlias;
  setParameter(std::string("InstanceAlias"), instanceAlias);
}

std::string ModifyInstanceRequest::getDatabaseUser() const {
  return databaseUser_;
}

void ModifyInstanceRequest::setDatabaseUser(const std::string &databaseUser) {
  databaseUser_ = databaseUser;
  setParameter(std::string("DatabaseUser"), databaseUser);
}

std::string ModifyInstanceRequest::getVpcId() const {
  return vpcId_;
}

void ModifyInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

bool ModifyInstanceRequest::getSkipTest() const {
  return skipTest_;
}

void ModifyInstanceRequest::setSkipTest(bool skipTest) {
  skipTest_ = skipTest;
  setParameter(std::string("SkipTest"), skipTest ? "true" : "false");
}

