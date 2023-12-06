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

#include <alibabacloud/dms-enterprise/model/RegisterInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::RegisterInstanceRequest;

RegisterInstanceRequest::RegisterInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "RegisterInstance") {
  setMethod(HttpRequest::Method::Post);
}

RegisterInstanceRequest::~RegisterInstanceRequest() {}

std::string RegisterInstanceRequest::getEcsRegion() const {
  return ecsRegion_;
}

void RegisterInstanceRequest::setEcsRegion(const std::string &ecsRegion) {
  ecsRegion_ = ecsRegion;
  setParameter(std::string("EcsRegion"), ecsRegion);
}

std::string RegisterInstanceRequest::getNetworkType() const {
  return networkType_;
}

void RegisterInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

long RegisterInstanceRequest::getTid() const {
  return tid_;
}

void RegisterInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string RegisterInstanceRequest::getEnableSellSitd() const {
  return enableSellSitd_;
}

void RegisterInstanceRequest::setEnableSellSitd(const std::string &enableSellSitd) {
  enableSellSitd_ = enableSellSitd;
  setParameter(std::string("EnableSellSitd"), enableSellSitd);
}

std::string RegisterInstanceRequest::getInstanceSource() const {
  return instanceSource_;
}

void RegisterInstanceRequest::setInstanceSource(const std::string &instanceSource) {
  instanceSource_ = instanceSource;
  setParameter(std::string("InstanceSource"), instanceSource);
}

std::string RegisterInstanceRequest::getEnvType() const {
  return envType_;
}

void RegisterInstanceRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string RegisterInstanceRequest::getHost() const {
  return host_;
}

void RegisterInstanceRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

int RegisterInstanceRequest::getQueryTimeout() const {
  return queryTimeout_;
}

void RegisterInstanceRequest::setQueryTimeout(int queryTimeout) {
  queryTimeout_ = queryTimeout;
  setParameter(std::string("QueryTimeout"), std::to_string(queryTimeout));
}

std::string RegisterInstanceRequest::getDbaUidByString() const {
  return dbaUidByString_;
}

void RegisterInstanceRequest::setDbaUidByString(const std::string &dbaUidByString) {
  dbaUidByString_ = dbaUidByString;
  setParameter(std::string("DbaUidByString"), dbaUidByString);
}

std::string RegisterInstanceRequest::getEcsInstanceId() const {
  return ecsInstanceId_;
}

void RegisterInstanceRequest::setEcsInstanceId(const std::string &ecsInstanceId) {
  ecsInstanceId_ = ecsInstanceId;
  setParameter(std::string("EcsInstanceId"), ecsInstanceId);
}

int RegisterInstanceRequest::getExportTimeout() const {
  return exportTimeout_;
}

void RegisterInstanceRequest::setExportTimeout(int exportTimeout) {
  exportTimeout_ = exportTimeout;
  setParameter(std::string("ExportTimeout"), std::to_string(exportTimeout));
}

long RegisterInstanceRequest::getTemplateId() const {
  return templateId_;
}

void RegisterInstanceRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

int RegisterInstanceRequest::getPort() const {
  return port_;
}

void RegisterInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string RegisterInstanceRequest::getSafeRule() const {
  return safeRule_;
}

void RegisterInstanceRequest::setSafeRule(const std::string &safeRule) {
  safeRule_ = safeRule;
  setParameter(std::string("SafeRule"), safeRule);
}

int RegisterInstanceRequest::getDdlOnline() const {
  return ddlOnline_;
}

void RegisterInstanceRequest::setDdlOnline(int ddlOnline) {
  ddlOnline_ = ddlOnline;
  setParameter(std::string("DdlOnline"), std::to_string(ddlOnline));
}

int RegisterInstanceRequest::getUseDsql() const {
  return useDsql_;
}

void RegisterInstanceRequest::setUseDsql(int useDsql) {
  useDsql_ = useDsql;
  setParameter(std::string("UseDsql"), std::to_string(useDsql));
}

std::string RegisterInstanceRequest::getSid() const {
  return sid_;
}

void RegisterInstanceRequest::setSid(const std::string &sid) {
  sid_ = sid;
  setParameter(std::string("Sid"), sid);
}

std::string RegisterInstanceRequest::getDataLinkName() const {
  return dataLinkName_;
}

void RegisterInstanceRequest::setDataLinkName(const std::string &dataLinkName) {
  dataLinkName_ = dataLinkName;
  setParameter(std::string("DataLinkName"), dataLinkName);
}

std::string RegisterInstanceRequest::getTemplateType() const {
  return templateType_;
}

void RegisterInstanceRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string RegisterInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void RegisterInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string RegisterInstanceRequest::getDatabasePassword() const {
  return databasePassword_;
}

void RegisterInstanceRequest::setDatabasePassword(const std::string &databasePassword) {
  databasePassword_ = databasePassword;
  setParameter(std::string("DatabasePassword"), databasePassword);
}

std::string RegisterInstanceRequest::getInstanceAlias() const {
  return instanceAlias_;
}

void RegisterInstanceRequest::setInstanceAlias(const std::string &instanceAlias) {
  instanceAlias_ = instanceAlias;
  setParameter(std::string("InstanceAlias"), instanceAlias);
}

std::string RegisterInstanceRequest::getDatabaseUser() const {
  return databaseUser_;
}

void RegisterInstanceRequest::setDatabaseUser(const std::string &databaseUser) {
  databaseUser_ = databaseUser;
  setParameter(std::string("DatabaseUser"), databaseUser);
}

std::string RegisterInstanceRequest::getVpcId() const {
  return vpcId_;
}

void RegisterInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

long RegisterInstanceRequest::getDbaUid() const {
  return dbaUid_;
}

void RegisterInstanceRequest::setDbaUid(long dbaUid) {
  dbaUid_ = dbaUid;
  setParameter(std::string("DbaUid"), std::to_string(dbaUid));
}

bool RegisterInstanceRequest::getSkipTest() const {
  return skipTest_;
}

void RegisterInstanceRequest::setSkipTest(bool skipTest) {
  skipTest_ = skipTest;
  setParameter(std::string("SkipTest"), skipTest ? "true" : "false");
}

