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

#include <alibabacloud/cams/model/ListFlowRequest.h>

using AlibabaCloud::Cams::Model::ListFlowRequest;

ListFlowRequest::ListFlowRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ListFlow") {
  setMethod(HttpRequest::Method::Post);
}

ListFlowRequest::~ListFlowRequest() {}

long ListFlowRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListFlowRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListFlowRequest::getExtendFunction() const {
  return extendFunction_;
}

void ListFlowRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ListFlowRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListFlowRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long ListFlowRequest::getPageSize() const {
  return pageSize_;
}

void ListFlowRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFlowRequest::getRouteName() const {
  return routeName_;
}

void ListFlowRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ListFlowRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListFlowRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ListFlowRequest::getOwnerId() const {
  return ownerId_;
}

void ListFlowRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long ListFlowRequest::getPageNo() const {
  return pageNo_;
}

void ListFlowRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListFlowRequest::getStatus() const {
  return status_;
}

void ListFlowRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

