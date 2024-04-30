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

#include <alibabacloud/rds/model/DescribeSecretsRequest.h>

using AlibabaCloud::Rds::Model::DescribeSecretsRequest;

DescribeSecretsRequest::DescribeSecretsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeSecrets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecretsRequest::~DescribeSecretsRequest() {}

long DescribeSecretsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSecretsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSecretsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSecretsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long DescribeSecretsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSecretsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSecretsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSecretsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSecretsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSecretsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSecretsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSecretsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSecretsRequest::getEngine() const {
  return engine_;
}

void DescribeSecretsRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

long DescribeSecretsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSecretsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSecretsRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void DescribeSecretsRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

std::string DescribeSecretsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSecretsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSecretsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSecretsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSecretsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSecretsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSecretsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeSecretsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

