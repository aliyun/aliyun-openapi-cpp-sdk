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

#include <alibabacloud/rds/model/ListClassesRequest.h>

using AlibabaCloud::Rds::Model::ListClassesRequest;

ListClassesRequest::ListClassesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ListClasses") {
  setMethod(HttpRequest::Method::Post);
}

ListClassesRequest::~ListClassesRequest() {}

long ListClassesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListClassesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListClassesRequest::getClientToken() const {
  return clientToken_;
}

void ListClassesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListClassesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListClassesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListClassesRequest::getRegionId() const {
  return regionId_;
}

void ListClassesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListClassesRequest::getEngine() const {
  return engine_;
}

void ListClassesRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string ListClassesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ListClassesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ListClassesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListClassesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListClassesRequest::getCommodityCode() const {
  return commodityCode_;
}

void ListClassesRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

long ListClassesRequest::getOwnerId() const {
  return ownerId_;
}

void ListClassesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListClassesRequest::getOrderType() const {
  return orderType_;
}

void ListClassesRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

