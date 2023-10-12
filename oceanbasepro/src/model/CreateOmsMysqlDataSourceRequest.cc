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

#include <alibabacloud/oceanbasepro/model/CreateOmsMysqlDataSourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateOmsMysqlDataSourceRequest;

CreateOmsMysqlDataSourceRequest::CreateOmsMysqlDataSourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateOmsMysqlDataSource") {
  setMethod(HttpRequest::Method::Post);
}

CreateOmsMysqlDataSourceRequest::~CreateOmsMysqlDataSourceRequest() {}

std::string CreateOmsMysqlDataSourceRequest::getSchema() const {
  return schema_;
}

void CreateOmsMysqlDataSourceRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setBodyParameter(std::string("Schema"), schema);
}

std::string CreateOmsMysqlDataSourceRequest::getDescription() const {
  return description_;
}

void CreateOmsMysqlDataSourceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateOmsMysqlDataSourceRequest::getDgDatabaseId() const {
  return dgDatabaseId_;
}

void CreateOmsMysqlDataSourceRequest::setDgDatabaseId(const std::string &dgDatabaseId) {
  dgDatabaseId_ = dgDatabaseId;
  setBodyParameter(std::string("DgDatabaseId"), dgDatabaseId);
}

std::string CreateOmsMysqlDataSourceRequest::getType() const {
  return type_;
}

void CreateOmsMysqlDataSourceRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string CreateOmsMysqlDataSourceRequest::getPassword() const {
  return password_;
}

void CreateOmsMysqlDataSourceRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string CreateOmsMysqlDataSourceRequest::getIp() const {
  return ip_;
}

void CreateOmsMysqlDataSourceRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setBodyParameter(std::string("Ip"), ip);
}

std::string CreateOmsMysqlDataSourceRequest::getInstanceId() const {
  return instanceId_;
}

void CreateOmsMysqlDataSourceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateOmsMysqlDataSourceRequest::getPort() const {
  return port_;
}

void CreateOmsMysqlDataSourceRequest::setPort(const std::string &port) {
  port_ = port;
  setBodyParameter(std::string("Port"), port);
}

std::string CreateOmsMysqlDataSourceRequest::getVpcId() const {
  return vpcId_;
}

void CreateOmsMysqlDataSourceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::string CreateOmsMysqlDataSourceRequest::getName() const {
  return name_;
}

void CreateOmsMysqlDataSourceRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateOmsMysqlDataSourceRequest::getBid() const {
  return bid_;
}

void CreateOmsMysqlDataSourceRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

std::string CreateOmsMysqlDataSourceRequest::getUsername() const {
  return username_;
}

void CreateOmsMysqlDataSourceRequest::setUsername(const std::string &username) {
  username_ = username;
  setBodyParameter(std::string("Username"), username);
}

