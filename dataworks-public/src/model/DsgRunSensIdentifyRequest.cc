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

#include <alibabacloud/dataworks-public/model/DsgRunSensIdentifyRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgRunSensIdentifyRequest;

DsgRunSensIdentifyRequest::DsgRunSensIdentifyRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgRunSensIdentify") {
  setMethod(HttpRequest::Method::Post);
}

DsgRunSensIdentifyRequest::~DsgRunSensIdentifyRequest() {}

std::string DsgRunSensIdentifyRequest::getTenantId() const {
  return tenantId_;
}

void DsgRunSensIdentifyRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::vector<DsgRunSensIdentifyRequest::EsMetaParams> DsgRunSensIdentifyRequest::getEsMetaParams() const {
  return esMetaParams_;
}

void DsgRunSensIdentifyRequest::setEsMetaParams(const std::vector<DsgRunSensIdentifyRequest::EsMetaParams> &esMetaParams) {
  esMetaParams_ = esMetaParams;
  for(int dep1 = 0; dep1 != esMetaParams.size(); dep1++) {
    for(int dep2 = 0; dep2 != esMetaParams[dep1].tableNameList.size(); dep2++) {
      setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".TableNameList." + std::to_string(dep2 + 1), esMetaParams[dep1].tableNameList[dep2]);
    }
    setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".ProjectName", esMetaParams[dep1].projectName);
    setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".SchemaName", esMetaParams[dep1].schemaName);
    setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".InstanceId", std::to_string(esMetaParams[dep1].instanceId));
    setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".DbType", esMetaParams[dep1].dbType);
    setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".ClusterId", esMetaParams[dep1].clusterId);
    setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".TableName", esMetaParams[dep1].tableName);
    setBodyParameter(std::string("EsMetaParams") + "." + std::to_string(dep1 + 1) + ".User", esMetaParams[dep1].user);
  }
}

