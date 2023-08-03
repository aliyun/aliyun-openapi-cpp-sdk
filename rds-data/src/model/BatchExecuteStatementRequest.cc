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

#include <alibabacloud/rds-data/model/BatchExecuteStatementRequest.h>

using AlibabaCloud::Rds_data::Model::BatchExecuteStatementRequest;

BatchExecuteStatementRequest::BatchExecuteStatementRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "BatchExecuteStatement") {
  setMethod(HttpRequest::Method::Post);
}

BatchExecuteStatementRequest::~BatchExecuteStatementRequest() {}

std::vector<BatchExecuteStatementRequest::std::vector<ParameterSetsItem>> BatchExecuteStatementRequest::getParameterSets() const {
  return parameterSets_;
}

void BatchExecuteStatementRequest::setParameterSets(const std::vector<BatchExecuteStatementRequest::std::vector<ParameterSetsItem>> &parameterSets) {
  parameterSets_ = parameterSets;
  for(int dep1 = 0; dep1 != parameterSets.size(); dep1++) {
    for(int dep2 = 0; dep2 != parameterSets[dep1].size(); dep2++) {
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".Name", parameterSets[dep1][dep2].name);
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".TypeHint", parameterSets[dep1][dep2].typeHint);
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".Value.ArrayValue", parameterSets[dep1][dep2].value.arrayValue);
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".Value.BlobValue", parameterSets[dep1][dep2].value.blobValue);
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".Value.BooleanValue", parameterSets[dep1][dep2].value.booleanValue ? "true" : "false");
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".Value.IsNull", parameterSets[dep1][dep2].value.isNull ? "true" : "false");
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".Value.LongValue", std::to_string(parameterSets[dep1][dep2].value.longValue));
      setBodyParameter(std::string("ParameterSets") + "." + std::to_string(dep1 + 1) + "." + std::to_string(dep2 + 1) + ".Value.StringValue", parameterSets[dep1][dep2].value.stringValue);
    }
  }
}

std::string BatchExecuteStatementRequest::getTransactionId() const {
  return transactionId_;
}

void BatchExecuteStatementRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setBodyParameter(std::string("TransactionId"), transactionId);
}

std::string BatchExecuteStatementRequest::getSql() const {
  return sql_;
}

void BatchExecuteStatementRequest::setSql(const std::string &sql) {
  sql_ = sql;
  setBodyParameter(std::string("Sql"), sql);
}

std::string BatchExecuteStatementRequest::getDatabase() const {
  return database_;
}

void BatchExecuteStatementRequest::setDatabase(const std::string &database) {
  database_ = database;
  setBodyParameter(std::string("Database"), database);
}

std::string BatchExecuteStatementRequest::getResourceArn() const {
  return resourceArn_;
}

void BatchExecuteStatementRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::string BatchExecuteStatementRequest::getSecretArn() const {
  return secretArn_;
}

void BatchExecuteStatementRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

