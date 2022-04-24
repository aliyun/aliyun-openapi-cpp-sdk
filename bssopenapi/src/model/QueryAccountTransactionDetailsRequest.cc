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

#include <alibabacloud/bssopenapi/model/QueryAccountTransactionDetailsRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryAccountTransactionDetailsRequest;

QueryAccountTransactionDetailsRequest::QueryAccountTransactionDetailsRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryAccountTransactionDetails") {
  setMethod(HttpRequest::Method::Post);
}

QueryAccountTransactionDetailsRequest::~QueryAccountTransactionDetailsRequest() {}

std::string QueryAccountTransactionDetailsRequest::getTransactionType() const {
  return transactionType_;
}

void QueryAccountTransactionDetailsRequest::setTransactionType(const std::string &transactionType) {
  transactionType_ = transactionType;
  setParameter(std::string("TransactionType"), transactionType);
}

std::string QueryAccountTransactionDetailsRequest::getCreateTimeEnd() const {
  return createTimeEnd_;
}

void QueryAccountTransactionDetailsRequest::setCreateTimeEnd(const std::string &createTimeEnd) {
  createTimeEnd_ = createTimeEnd;
  setParameter(std::string("CreateTimeEnd"), createTimeEnd);
}

std::string QueryAccountTransactionDetailsRequest::getRecordID() const {
  return recordID_;
}

void QueryAccountTransactionDetailsRequest::setRecordID(const std::string &recordID) {
  recordID_ = recordID;
  setParameter(std::string("RecordID"), recordID);
}

std::string QueryAccountTransactionDetailsRequest::getNextToken() const {
  return nextToken_;
}

void QueryAccountTransactionDetailsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int QueryAccountTransactionDetailsRequest::getMaxResults() const {
  return maxResults_;
}

void QueryAccountTransactionDetailsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string QueryAccountTransactionDetailsRequest::getTransactionChannel() const {
  return transactionChannel_;
}

void QueryAccountTransactionDetailsRequest::setTransactionChannel(const std::string &transactionChannel) {
  transactionChannel_ = transactionChannel;
  setParameter(std::string("TransactionChannel"), transactionChannel);
}

std::string QueryAccountTransactionDetailsRequest::getTransactionChannelSN() const {
  return transactionChannelSN_;
}

void QueryAccountTransactionDetailsRequest::setTransactionChannelSN(const std::string &transactionChannelSN) {
  transactionChannelSN_ = transactionChannelSN;
  setParameter(std::string("TransactionChannelSN"), transactionChannelSN);
}

std::string QueryAccountTransactionDetailsRequest::getCreateTimeStart() const {
  return createTimeStart_;
}

void QueryAccountTransactionDetailsRequest::setCreateTimeStart(const std::string &createTimeStart) {
  createTimeStart_ = createTimeStart;
  setParameter(std::string("CreateTimeStart"), createTimeStart);
}

std::string QueryAccountTransactionDetailsRequest::getTransactionNumber() const {
  return transactionNumber_;
}

void QueryAccountTransactionDetailsRequest::setTransactionNumber(const std::string &transactionNumber) {
  transactionNumber_ = transactionNumber;
  setParameter(std::string("TransactionNumber"), transactionNumber);
}

