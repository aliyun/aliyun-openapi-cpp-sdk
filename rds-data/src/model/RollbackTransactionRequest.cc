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

#include <alibabacloud/rds-data/model/RollbackTransactionRequest.h>

using AlibabaCloud::Rds_data::Model::RollbackTransactionRequest;

RollbackTransactionRequest::RollbackTransactionRequest()
    : RpcServiceRequest("rds-data", "2022-03-30", "RollbackTransaction") {
  setMethod(HttpRequest::Method::Post);
}

RollbackTransactionRequest::~RollbackTransactionRequest() {}

std::string RollbackTransactionRequest::getTransactionId() const {
  return transactionId_;
}

void RollbackTransactionRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setBodyParameter(std::string("TransactionId"), transactionId);
}

std::string RollbackTransactionRequest::getResourceArn() const {
  return resourceArn_;
}

void RollbackTransactionRequest::setResourceArn(const std::string &resourceArn) {
  resourceArn_ = resourceArn;
  setBodyParameter(std::string("ResourceArn"), resourceArn);
}

std::string RollbackTransactionRequest::getSecretArn() const {
  return secretArn_;
}

void RollbackTransactionRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setBodyParameter(std::string("SecretArn"), secretArn);
}

