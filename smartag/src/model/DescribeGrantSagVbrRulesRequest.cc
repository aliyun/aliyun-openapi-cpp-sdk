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

#include <alibabacloud/smartag/model/DescribeGrantSagVbrRulesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeGrantSagVbrRulesRequest;

DescribeGrantSagVbrRulesRequest::DescribeGrantSagVbrRulesRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeGrantSagVbrRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGrantSagVbrRulesRequest::~DescribeGrantSagVbrRulesRequest() {}

long DescribeGrantSagVbrRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGrantSagVbrRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeGrantSagVbrRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGrantSagVbrRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGrantSagVbrRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeGrantSagVbrRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeGrantSagVbrRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGrantSagVbrRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGrantSagVbrRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGrantSagVbrRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGrantSagVbrRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGrantSagVbrRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGrantSagVbrRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGrantSagVbrRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeGrantSagVbrRulesRequest::getVbrInstanceId() const {
  return vbrInstanceId_;
}

void DescribeGrantSagVbrRulesRequest::setVbrInstanceId(const std::string &vbrInstanceId) {
  vbrInstanceId_ = vbrInstanceId;
  setParameter(std::string("VbrInstanceId"), vbrInstanceId);
}

std::string DescribeGrantSagVbrRulesRequest::getSmartAGId() const {
  return smartAGId_;
}

void DescribeGrantSagVbrRulesRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

