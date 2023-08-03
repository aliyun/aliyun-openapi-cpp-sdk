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

#include <alibabacloud/rds-data/model/UpdateRequest.h>

using AlibabaCloud::Rds_data::Model::UpdateRequest;

UpdateRequest::UpdateRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "Update") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRequest::~UpdateRequest() {}

std::string UpdateRequest::getTransactionId() const {
  return transactionId_;
}

void UpdateRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setBodyParameter(std::string("TransactionId"), transactionId);
}

std::string UpdateRequest::getFilter() const {
  return filter_;
}

void UpdateRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setBodyParameter(std::string("Filter"), filter);
}

std::string UpdateRequest::getDatabase() const {
  return database_;
}

void UpdateRequest::setDatabase(const std::string &database) {
  database_ = database;
  setBodyParameter(std::string("Database"), database);
}

std::map<std::string, ObjectOfAny> UpdateRequest::getRecord() const {
  return record_;
}

void UpdateRequest::setRecord(const std::map<std::string, ObjectOfAny> &record) {
  record_ = record;
  for(auto const &iter1 : record) {
    setBodyParameter(std::string("Record") + "." + iter1.first, std::to_string(iter1.second));
  }
}

std::string UpdateRequest::getResourceArn() const {
  return resourceArn_;
}

void UpdateRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::string UpdateRequest::getTable() const {
  return table_;
}

void UpdateRequest::setTable(const std::string &table) {
  table_ = table;
  setBodyParameter(std::string("Table"), table);
}

std::string UpdateRequest::getSecretArn() const {
  return secretArn_;
}

void UpdateRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

