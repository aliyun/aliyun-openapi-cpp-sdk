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

#include <alibabacloud/dataworks-public/model/DsgQuerySensResultRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgQuerySensResultRequest;

DsgQuerySensResultRequest::DsgQuerySensResultRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgQuerySensResult") {
  setMethod(HttpRequest::Method::Post);
}

DsgQuerySensResultRequest::~DsgQuerySensResultRequest() {}

std::string DsgQuerySensResultRequest::getCol() const {
  return col_;
}

void DsgQuerySensResultRequest::setCol(const std::string &col) {
  col_ = col;
  setBodyParameter(std::string("Col"), col);
}

std::string DsgQuerySensResultRequest::getProjectName() const {
  return projectName_;
}

void DsgQuerySensResultRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string DsgQuerySensResultRequest::getSchemaName() const {
  return schemaName_;
}

void DsgQuerySensResultRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setBodyParameter(std::string("SchemaName"), schemaName);
}

std::string DsgQuerySensResultRequest::getLevel() const {
  return level_;
}

void DsgQuerySensResultRequest::setLevel(const std::string &level) {
  level_ = level;
  setBodyParameter(std::string("Level"), level);
}

std::string DsgQuerySensResultRequest::getSensStatus() const {
  return sensStatus_;
}

void DsgQuerySensResultRequest::setSensStatus(const std::string &sensStatus) {
  sensStatus_ = sensStatus;
  setBodyParameter(std::string("SensStatus"), sensStatus);
}

std::string DsgQuerySensResultRequest::getNodeName() const {
  return nodeName_;
}

void DsgQuerySensResultRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setBodyParameter(std::string("NodeName"), nodeName);
}

std::string DsgQuerySensResultRequest::getSensitiveId() const {
  return sensitiveId_;
}

void DsgQuerySensResultRequest::setSensitiveId(const std::string &sensitiveId) {
  sensitiveId_ = sensitiveId;
  setBodyParameter(std::string("SensitiveId"), sensitiveId);
}

int DsgQuerySensResultRequest::getPageNo() const {
  return pageNo_;
}

void DsgQuerySensResultRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setBodyParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string DsgQuerySensResultRequest::getTenantId() const {
  return tenantId_;
}

void DsgQuerySensResultRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DsgQuerySensResultRequest::getDbType() const {
  return dbType_;
}

void DsgQuerySensResultRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setBodyParameter(std::string("DbType"), dbType);
}

int DsgQuerySensResultRequest::getPageSize() const {
  return pageSize_;
}

void DsgQuerySensResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DsgQuerySensResultRequest::getSensitiveName() const {
  return sensitiveName_;
}

void DsgQuerySensResultRequest::setSensitiveName(const std::string &sensitiveName) {
  sensitiveName_ = sensitiveName;
  setBodyParameter(std::string("SensitiveName"), sensitiveName);
}

std::string DsgQuerySensResultRequest::getTable() const {
  return table_;
}

void DsgQuerySensResultRequest::setTable(const std::string &table) {
  table_ = table;
  setBodyParameter(std::string("Table"), table);
}

std::string DsgQuerySensResultRequest::getOrder() const {
  return order_;
}

void DsgQuerySensResultRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

std::string DsgQuerySensResultRequest::getOrderField() const {
  return orderField_;
}

void DsgQuerySensResultRequest::setOrderField(const std::string &orderField) {
  orderField_ = orderField;
  setBodyParameter(std::string("OrderField"), orderField);
}

