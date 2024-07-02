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

#include <alibabacloud/oceanbasepro/model/CreateMySqlDataSourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateMySqlDataSourceRequest;

CreateMySqlDataSourceRequest::CreateMySqlDataSourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateMySqlDataSource") {
  setMethod(HttpRequest::Method::Post);
}

CreateMySqlDataSourceRequest::~CreateMySqlDataSourceRequest() {}

std::string CreateMySqlDataSourceRequest::getSchema() const {
  return schema_;
}

void CreateMySqlDataSourceRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setBodyParameter(std::string("Schema"), schema);
}

std::string CreateMySqlDataSourceRequest::getDescription() const {
  return description_;
}

void CreateMySqlDataSourceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateMySqlDataSourceRequest::getType() const {
  return type_;
}

void CreateMySqlDataSourceRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

bool CreateMySqlDataSourceRequest::getUseSsl() const {
  return useSsl_;
}

void CreateMySqlDataSourceRequest::setUseSsl(bool useSsl) {
  useSsl_ = useSsl;
  setBodyParameter(std::string("UseSsl"), useSsl ? "true" : "false");
}

std::string CreateMySqlDataSourceRequest::getPassword() const {
  return password_;
}

void CreateMySqlDataSourceRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string CreateMySqlDataSourceRequest::getDgInstanceId() const {
  return dgInstanceId_;
}

void CreateMySqlDataSourceRequest::setDgInstanceId(const std::string &dgInstanceId) {
  dgInstanceId_ = dgInstanceId;
  setBodyParameter(std::string("DgInstanceId"), dgInstanceId);
}

std::string CreateMySqlDataSourceRequest::getIp() const {
  return ip_;
}

void CreateMySqlDataSourceRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setBodyParameter(std::string("Ip"), ip);
}

std::string CreateMySqlDataSourceRequest::getInstanceId() const {
  return instanceId_;
}

void CreateMySqlDataSourceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

int CreateMySqlDataSourceRequest::getPort() const {
  return port_;
}

void CreateMySqlDataSourceRequest::setPort(int port) {
  port_ = port;
  setBodyParameter(std::string("Port"), std::to_string(port));
}

std::string CreateMySqlDataSourceRequest::getVpcId() const {
  return vpcId_;
}

void CreateMySqlDataSourceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::string CreateMySqlDataSourceRequest::getName() const {
  return name_;
}

void CreateMySqlDataSourceRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateMySqlDataSourceRequest::getUserName() const {
  return userName_;
}

void CreateMySqlDataSourceRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

