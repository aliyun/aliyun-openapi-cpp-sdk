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

#include <alibabacloud/ens/model/DescribeInstancesRequest.h>

using AlibabaCloud::Ens::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest() {}

std::vector<DescribeInstancesRequest::std::string> DescribeInstancesRequest::getServiceStatus() const {
  return serviceStatus_;
}

void DescribeInstancesRequest::setServiceStatus(const std::vector<DescribeInstancesRequest::std::string> &serviceStatus) {
  serviceStatus_ = serviceStatus;
  for(int dep1 = 0; dep1 != serviceStatus.size(); dep1++) {
    setParameter(std::string("ServiceStatus") + "." + std::to_string(dep1 + 1), serviceStatus[dep1]);
  }
}

std::string DescribeInstancesRequest::getOrderByParams() const {
  return orderByParams_;
}

void DescribeInstancesRequest::setOrderByParams(const std::string &orderByParams) {
  orderByParams_ = orderByParams;
  setParameter(std::string("OrderByParams"), orderByParams);
}

std::string DescribeInstancesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeInstancesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeInstancesRequest::getInstanceResourceType() const {
  return instanceResourceType_;
}

void DescribeInstancesRequest::setInstanceResourceType(const std::string &instanceResourceType) {
  instanceResourceType_ = instanceResourceType;
  setParameter(std::string("InstanceResourceType"), instanceResourceType);
}

std::string DescribeInstancesRequest::getEnsServiceId() const {
  return ensServiceId_;
}

void DescribeInstancesRequest::setEnsServiceId(const std::string &ensServiceId) {
  ensServiceId_ = ensServiceId;
  setParameter(std::string("EnsServiceId"), ensServiceId);
}

std::vector<DescribeInstancesRequest::Tags> DescribeInstancesRequest::getTags() const {
  return tags_;
}

void DescribeInstancesRequest::setTags(const std::vector<DescribeInstancesRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string DescribeInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeInstancesRequest::getNetworkId() const {
  return networkId_;
}

void DescribeInstancesRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

std::string DescribeInstancesRequest::getStatus() const {
  return status_;
}

void DescribeInstancesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeInstancesRequest::getIntranetIp() const {
  return intranetIp_;
}

void DescribeInstancesRequest::setIntranetIp(const std::string &intranetIp) {
  intranetIp_ = intranetIp;
  setParameter(std::string("IntranetIp"), intranetIp);
}

std::string DescribeInstancesRequest::getImageId() const {
  return imageId_;
}

void DescribeInstancesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string DescribeInstancesRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DescribeInstancesRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string DescribeInstancesRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeInstancesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

int DescribeInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstancesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstancesRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeInstancesRequest::setEnsRegionIds(const std::string &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  setParameter(std::string("EnsRegionIds"), ensRegionIds);
}

