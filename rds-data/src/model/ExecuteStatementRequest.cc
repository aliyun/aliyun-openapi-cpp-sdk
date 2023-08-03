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

#include <alibabacloud/rds-data/model/ExecuteStatementRequest.h>

using AlibabaCloud::Rds_data::Model::ExecuteStatementRequest;

ExecuteStatementRequest::ExecuteStatementRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "ExecuteStatement") {
  setMethod(HttpRequest::Method::Post);
}

ExecuteStatementRequest::~ExecuteStatementRequest() {}

bool ExecuteStatementRequest::getIncludeResultMetadata() const {
  return includeResultMetadata_;
}

void ExecuteStatementRequest::setIncludeResultMetadata(bool includeResultMetadata) {
  includeResultMetadata_ = includeResultMetadata;
  setBodyParameter(std::string("IncludeResultMetadata"), includeResultMetadata ? "true" : "false");
}

std::string ExecuteStatementRequest::getFormatRecordsAs() const {
  return formatRecordsAs_;
}

void ExecuteStatementRequest::setFormatRecordsAs(const std::string &formatRecordsAs) {
  formatRecordsAs_ = formatRecordsAs;
  setBodyParameter(std::string("FormatRecordsAs"), formatRecordsAs);
}

std::string ExecuteStatementRequest::getTransactionId() const {
  return transactionId_;
}

void ExecuteStatementRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setBodyParameter(std::string("TransactionId"), transactionId);
}

std::string ExecuteStatementRequest::getSql() const {
  return sql_;
}

void ExecuteStatementRequest::setSql(const std::string &sql) {
  sql_ = sql;
  setBodyParameter(std::string("Sql"), sql);
}

ExecuteStatementRequest::ResultSetOptions ExecuteStatementRequest::getResultSetOptions() const {
  return resultSetOptions_;
}

void ExecuteStatementRequest::setResultSetOptions(const ExecuteStatementRequest::ResultSetOptions &resultSetOptions) {
  resultSetOptions_ = resultSetOptions;
  setBodyParameter(std::string("ResultSetOptions") + ".DecimalReturnType", resultSetOptions.decimalReturnType);
  setBodyParameter(std::string("ResultSetOptions") + ".LongReturnType", resultSetOptions.longReturnType);
}

std::string ExecuteStatementRequest::getDatabase() const {
  return database_;
}

void ExecuteStatementRequest::setDatabase(const std::string &database) {
  database_ = database;
  setBodyParameter(std::string("Database"), database);
}

std::string ExecuteStatementRequest::getResourceArn() const {
  return resourceArn_;
}

void ExecuteStatementRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::vector<ExecuteStatementRequest::Parameters> ExecuteStatementRequest::getParameters() const {
  return parameters_;
}

void ExecuteStatementRequest::setParameters(const std::vector<ExecuteStatementRequest::Parameters> &parameters) {
  parameters_ = parameters;
  for(int dep1 = 0; dep1 != parameters.size(); dep1++) {
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".Name", parameters[dep1].name);
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".TypeHint", parameters[dep1].typeHint);
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".Value.ArrayValue", parameters[dep1].value.arrayValue);
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".Value.BlobValue", parameters[dep1].value.blobValue);
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".Value.BooleanValue", parameters[dep1].value.booleanValue ? "true" : "false");
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".Value.IsNull", parameters[dep1].value.isNull ? "true" : "false");
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".Value.LongValue", std::to_string(parameters[dep1].value.longValue));
    setBodyParameter(std::string("Parameters") + "." + std::to_string(dep1 + 1) + ".Value.StringValue", parameters[dep1].value.stringValue);
  }
}

bool ExecuteStatementRequest::getContinueAfterTimeout() const {
  return continueAfterTimeout_;
}

void ExecuteStatementRequest::setContinueAfterTimeout(bool continueAfterTimeout) {
  continueAfterTimeout_ = continueAfterTimeout;
  setBodyParameter(std::string("ContinueAfterTimeout"), continueAfterTimeout ? "true" : "false");
}

std::string ExecuteStatementRequest::getSecretArn() const {
  return secretArn_;
}

void ExecuteStatementRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

