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

#include <alibabacloud/dms-enterprise/model/UpdateInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateInstanceRequest;

UpdateInstanceRequest::UpdateInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateInstance") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceRequest::~UpdateInstanceRequest() {}

std::string UpdateInstanceRequest::getSafeRuleId() const {
  return safeRuleId_;
}

void UpdateInstanceRequest::setSafeRuleId(const std::string &safeRuleId) {
  safeRuleId_ = safeRuleId;
  setParameter(std::string("SafeRuleId"), safeRuleId);
}

std::string UpdateInstanceRequest::getEcsRegion() const {
  return ecsRegion_;
}

void UpdateInstanceRequest::setEcsRegion(const std::string &ecsRegion) {
  ecsRegion_ = ecsRegion;
  setParameter(std::string("EcsRegion"), ecsRegion);
}

int UpdateInstanceRequest::getDdlOnline() const {
  return ddlOnline_;
}

void UpdateInstanceRequest::setDdlOnline(int ddlOnline) {
  ddlOnline_ = ddlOnline;
  setParameter(std::string("DdlOnline"), std::to_string(ddlOnline));
}

int UpdateInstanceRequest::getUseDsql() const {
  return useDsql_;
}

void UpdateInstanceRequest::setUseDsql(int useDsql) {
  useDsql_ = useDsql;
  setParameter(std::string("UseDsql"), std::to_string(useDsql));
}

long UpdateInstanceRequest::getTid() const {
  return tid_;
}

void UpdateInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string UpdateInstanceRequest::getSid() const {
  return sid_;
}

void UpdateInstanceRequest::setSid(const std::string &sid) {
  sid_ = sid;
  setParameter(std::string("Sid"), sid);
}

std::string UpdateInstanceRequest::getEnableSellSitd() const {
  return enableSellSitd_;
}

void UpdateInstanceRequest::setEnableSellSitd(const std::string &enableSellSitd) {
  enableSellSitd_ = enableSellSitd;
  setParameter(std::string("EnableSellSitd"), enableSellSitd);
}

std::string UpdateInstanceRequest::getDbaId() const {
  return dbaId_;
}

void UpdateInstanceRequest::setDbaId(const std::string &dbaId) {
  dbaId_ = dbaId;
  setParameter(std::string("DbaId"), dbaId);
}

std::string UpdateInstanceRequest::getDataLinkName() const {
  return dataLinkName_;
}

void UpdateInstanceRequest::setDataLinkName(const std::string &dataLinkName) {
  dataLinkName_ = dataLinkName;
  setParameter(std::string("DataLinkName"), dataLinkName);
}

std::string UpdateInstanceRequest::getTemplateType() const {
  return templateType_;
}

void UpdateInstanceRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string UpdateInstanceRequest::getInstanceSource() const {
  return instanceSource_;
}

void UpdateInstanceRequest::setInstanceSource(const std::string &instanceSource) {
  instanceSource_ = instanceSource;
  setParameter(std::string("InstanceSource"), instanceSource);
}

std::string UpdateInstanceRequest::getEnvType() const {
  return envType_;
}

void UpdateInstanceRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string UpdateInstanceRequest::getHost() const {
  return host_;
}

void UpdateInstanceRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string UpdateInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void UpdateInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

int UpdateInstanceRequest::getQueryTimeout() const {
  return queryTimeout_;
}

void UpdateInstanceRequest::setQueryTimeout(int queryTimeout) {
  queryTimeout_ = queryTimeout;
  setParameter(std::string("QueryTimeout"), std::to_string(queryTimeout));
}

std::string UpdateInstanceRequest::getEcsInstanceId() const {
  return ecsInstanceId_;
}

void UpdateInstanceRequest::setEcsInstanceId(const std::string &ecsInstanceId) {
  ecsInstanceId_ = ecsInstanceId;
  setParameter(std::string("EcsInstanceId"), ecsInstanceId);
}

int UpdateInstanceRequest::getExportTimeout() const {
  return exportTimeout_;
}

void UpdateInstanceRequest::setExportTimeout(int exportTimeout) {
  exportTimeout_ = exportTimeout;
  setParameter(std::string("ExportTimeout"), std::to_string(exportTimeout));
}

std::string UpdateInstanceRequest::getDatabasePassword() const {
  return databasePassword_;
}

void UpdateInstanceRequest::setDatabasePassword(const std::string &databasePassword) {
  databasePassword_ = databasePassword;
  setParameter(std::string("DatabasePassword"), databasePassword);
}

std::string UpdateInstanceRequest::getInstanceAlias() const {
  return instanceAlias_;
}

void UpdateInstanceRequest::setInstanceAlias(const std::string &instanceAlias) {
  instanceAlias_ = instanceAlias;
  setParameter(std::string("InstanceAlias"), instanceAlias);
}

long UpdateInstanceRequest::getTemplateId() const {
  return templateId_;
}

void UpdateInstanceRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string UpdateInstanceRequest::getDatabaseUser() const {
  return databaseUser_;
}

void UpdateInstanceRequest::setDatabaseUser(const std::string &databaseUser) {
  databaseUser_ = databaseUser;
  setParameter(std::string("DatabaseUser"), databaseUser);
}

std::string UpdateInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int UpdateInstanceRequest::getPort() const {
  return port_;
}

void UpdateInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string UpdateInstanceRequest::getVpcId() const {
  return vpcId_;
}

void UpdateInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

bool UpdateInstanceRequest::getSkipTest() const {
  return skipTest_;
}

void UpdateInstanceRequest::setSkipTest(bool skipTest) {
  skipTest_ = skipTest;
  setParameter(std::string("SkipTest"), skipTest ? "true" : "false");
}

