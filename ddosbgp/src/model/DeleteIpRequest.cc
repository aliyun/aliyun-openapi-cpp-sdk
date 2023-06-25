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

#include <alibabacloud/ddosbgp/model/DeleteIpRequest.h>

using AlibabaCloud::Ddosbgp::Model::DeleteIpRequest;

DeleteIpRequest::DeleteIpRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DeleteIp") {
  setMethod(HttpRequest::Method::Post);
}

DeleteIpRequest::~DeleteIpRequest() {}

std::string DeleteIpRequest::getIpList() const {
  return ipList_;
}

void DeleteIpRequest::setIpList(const std::string &ipList) {
  ipList_ = ipList;
  setParameter(std::string("IpList"), ipList);
}

std::string DeleteIpRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteIpRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteIpRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteIpRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteIpRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteIpRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteIpRequest::getRegionId() const {
  return regionId_;
}

void DeleteIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

