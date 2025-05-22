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

#include <alibabacloud/rds/model/DescribeRCInstancesRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCInstancesRequest;

DescribeRCInstancesRequest::DescribeRCInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCInstancesRequest::~DescribeRCInstancesRequest() {}

std::string DescribeRCInstancesRequest::getHostIp() const {
  return hostIp_;
}

void DescribeRCInstancesRequest::setHostIp(const std::string &hostIp) {
  hostIp_ = hostIp;
  setParameter(std::string("HostIp"), hostIp);
}

std::string DescribeRCInstancesRequest::getPublicIp() const {
  return publicIp_;
}

void DescribeRCInstancesRequest::setPublicIp(const std::string &publicIp) {
  publicIp_ = publicIp;
  setParameter(std::string("PublicIp"), publicIp);
}

int DescribeRCInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRCInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRCInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRCInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRCInstancesRequest::getTag() const {
  return tag_;
}

void DescribeRCInstancesRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string DescribeRCInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRCInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeRCInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeRCInstancesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeRCInstancesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeRCInstancesRequest::getStatus() const {
  return status_;
}

void DescribeRCInstancesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

