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

#include <alibabacloud/lto/model/QueryBlockchainMetadataRequest.h>

using AlibabaCloud::Lto::Model::QueryBlockchainMetadataRequest;

QueryBlockchainMetadataRequest::QueryBlockchainMetadataRequest()
    : RpcServiceRequest("lto", "2021-07-07", "QueryBlockchainMetadata") {
  setMethod(HttpRequest::Method::Post);
}

QueryBlockchainMetadataRequest::~QueryBlockchainMetadataRequest() {}

std::string QueryBlockchainMetadataRequest::getContractName() const {
  return contractName_;
}

void QueryBlockchainMetadataRequest::setContractName(const std::string &contractName) {
  contractName_ = contractName;
  setParameter(std::string("ContractName"), contractName);
}

std::string QueryBlockchainMetadataRequest::getBizChainId() const {
  return bizChainId_;
}

void QueryBlockchainMetadataRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string QueryBlockchainMetadataRequest::getTransactionId() const {
  return transactionId_;
}

void QueryBlockchainMetadataRequest::setTransactionId(const std::string &transactionId) {
  transactionId_ = transactionId;
  setParameter(std::string("TransactionId"), transactionId);
}

std::string QueryBlockchainMetadataRequest::getInvokeType() const {
  return invokeType_;
}

void QueryBlockchainMetadataRequest::setInvokeType(const std::string &invokeType) {
  invokeType_ = invokeType;
  setParameter(std::string("InvokeType"), invokeType);
}

std::string QueryBlockchainMetadataRequest::getRegionId() const {
  return regionId_;
}

void QueryBlockchainMetadataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryBlockchainMetadataRequest::getIotDataDID() const {
  return iotDataDID_;
}

void QueryBlockchainMetadataRequest::setIotDataDID(const std::string &iotDataDID) {
  iotDataDID_ = iotDataDID;
  setParameter(std::string("IotDataDID"), iotDataDID);
}

