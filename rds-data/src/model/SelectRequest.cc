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

#include <alibabacloud/rds-data/model/SelectRequest.h>

using AlibabaCloud::Rds_data::Model::SelectRequest;

SelectRequest::SelectRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "Select") {
  setMethod(HttpRequest::Method::Post);
}

SelectRequest::~SelectRequest() {}

std::string SelectRequest::getTransactionId() const {
  return transactionId_;
}

void SelectRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setBodyParameter(std::string("TransactionId"), transactionId);
}

long SelectRequest::getPageNumber() const {
  return pageNumber_;
}

void SelectRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string SelectRequest::getFilter() const {
  return filter_;
}

void SelectRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setBodyParameter(std::string("Filter"), filter);
}

std::string SelectRequest::getDatabase() const {
  return database_;
}

void SelectRequest::setDatabase(const std::string &database) {
  database_ = database;
  setBodyParameter(std::string("Database"), database);
}

long SelectRequest::getPageSize() const {
  return pageSize_;
}

void SelectRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SelectRequest::getResourceArn() const {
  return resourceArn_;
}

void SelectRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::string SelectRequest::getTable() const {
  return table_;
}

void SelectRequest::setTable(const std::string &table) {
  table_ = table;
  setBodyParameter(std::string("Table"), table);
}

std::string SelectRequest::getSecretArn() const {
  return secretArn_;
}

void SelectRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

