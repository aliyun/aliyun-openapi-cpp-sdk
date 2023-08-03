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

#include <alibabacloud/rds-data/model/InsertListRequest.h>

using AlibabaCloud::Rds_data::Model::InsertListRequest;

InsertListRequest::InsertListRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "InsertList") {
  setMethod(HttpRequest::Method::Post);
}

InsertListRequest::~InsertListRequest() {}

std::vector<InsertListRequest::std::map<std::string, ObjectOfAny>> InsertListRequest::getRecords() const {
  return records_;
}

void InsertListRequest::setRecords(const std::vector<InsertListRequest::std::map<std::string, ObjectOfAny>> &records) {
  records_ = records;
  for(int dep1 = 0; dep1 != records.size(); dep1++) {
    for(auto const &iter2 : records[dep1]) {
      setBodyParameter(std::string("Records") + "." + std::to_string(dep1 + 1) + "." + iter2.first, std::to_string(iter2.second));
    }
  }
}

std::string InsertListRequest::getTransactionId() const {
  return transactionId_;
}

void InsertListRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setBodyParameter(std::string("TransactionId"), transactionId);
}

std::string InsertListRequest::getDatabase() const {
  return database_;
}

void InsertListRequest::setDatabase(const std::string &database) {
  database_ = database;
  setBodyParameter(std::string("Database"), database);
}

std::string InsertListRequest::getResourceArn() const {
  return resourceArn_;
}

void InsertListRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::string InsertListRequest::getTable() const {
  return table_;
}

void InsertListRequest::setTable(const std::string &table) {
  table_ = table;
  setBodyParameter(std::string("Table"), table);
}

std::string InsertListRequest::getSecretArn() const {
  return secretArn_;
}

void InsertListRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

