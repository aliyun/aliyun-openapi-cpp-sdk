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

#include <alibabacloud/ddosbgp/model/DeleteBlackholeRequest.h>

using AlibabaCloud::Ddosbgp::Model::DeleteBlackholeRequest;

DeleteBlackholeRequest::DeleteBlackholeRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DeleteBlackhole") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBlackholeRequest::~DeleteBlackholeRequest() {}

std::string DeleteBlackholeRequest::getIp() const {
  return ip_;
}

void DeleteBlackholeRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DeleteBlackholeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteBlackholeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteBlackholeRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteBlackholeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteBlackholeRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteBlackholeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteBlackholeRequest::getRegionId() const {
  return regionId_;
}

void DeleteBlackholeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

