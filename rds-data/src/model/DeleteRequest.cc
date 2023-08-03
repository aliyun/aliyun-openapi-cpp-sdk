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

#include <alibabacloud/rds-data/model/DeleteRequest.h>

using AlibabaCloud::Rds_data::Model::DeleteRequest;

DeleteRequest::DeleteRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "Delete") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRequest::~DeleteRequest() {}

std::string DeleteRequest::getTransactionId() const {
  return transactionId_;
}

void DeleteRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setBodyParameter(std::string("TransactionId"), transactionId);
}

std::string DeleteRequest::getFilter() const {
  return filter_;
}

void DeleteRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setBodyParameter(std::string("Filter"), filter);
}

std::string DeleteRequest::getDatabase() const {
  return database_;
}

void DeleteRequest::setDatabase(const std::string &database) {
  database_ = database;
  setBodyParameter(std::string("Database"), database);
}

std::string DeleteRequest::getResourceArn() const {
  return resourceArn_;
}

void DeleteRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::string DeleteRequest::getTable() const {
  return table_;
}

void DeleteRequest::setTable(const std::string &table) {
  table_ = table;
  setBodyParameter(std::string("Table"), table);
}

std::string DeleteRequest::getSecretArn() const {
  return secretArn_;
}

void DeleteRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

