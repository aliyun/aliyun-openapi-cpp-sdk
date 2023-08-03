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

#include <alibabacloud/rds-data/model/BeginTransactionRequest.h>

using AlibabaCloud::Rds_data::Model::BeginTransactionRequest;

BeginTransactionRequest::BeginTransactionRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "BeginTransaction") {
  setMethod(HttpRequest::Method::Post);
}

BeginTransactionRequest::~BeginTransactionRequest() {}

std::string BeginTransactionRequest::getDatabase() const {
  return database_;
}

void BeginTransactionRequest::setDatabase(const std::string &database) {
  database_ = database;
  setBodyParameter(std::string("Database"), database);
}

std::string BeginTransactionRequest::getResourceArn() const {
  return resourceArn_;
}

void BeginTransactionRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::string BeginTransactionRequest::getSecretArn() const {
  return secretArn_;
}

void BeginTransactionRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

