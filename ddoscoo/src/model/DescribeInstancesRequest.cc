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

#include <alibabacloud/ddoscoo/model/DescribeInstancesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest() {}

int DescribeInstancesRequest::getEdition() const {
  return edition_;
}

void DescribeInstancesRequest::setEdition(int edition) {
  edition_ = edition;
  setParameter(std::string("Edition"), std::to_string(edition));
}

std::string DescribeInstancesRequest::getRemark() const {
  return remark_;
}

void DescribeInstancesRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

int DescribeInstancesRequest::getEnabled() const {
  return enabled_;
}

void DescribeInstancesRequest::setEnabled(int enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), std::to_string(enabled));
}

std::string DescribeInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeInstancesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstancesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstancesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::vector<DescribeInstancesRequest::Tag> DescribeInstancesRequest::getTag() const {
  return tag_;
}

void DescribeInstancesRequest::setTag(const std::vector<DescribeInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

long DescribeInstancesRequest::getExpireStartTime() const {
  return expireStartTime_;
}

void DescribeInstancesRequest::setExpireStartTime(long expireStartTime) {
  expireStartTime_ = expireStartTime;
  setParameter(std::string("ExpireStartTime"), std::to_string(expireStartTime));
}

long DescribeInstancesRequest::getExpireEndTime() const {
  return expireEndTime_;
}

void DescribeInstancesRequest::setExpireEndTime(long expireEndTime) {
  expireEndTime_ = expireEndTime;
  setParameter(std::string("ExpireEndTime"), std::to_string(expireEndTime));
}

std::string DescribeInstancesRequest::getIp() const {
  return ip_;
}

void DescribeInstancesRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::vector<std::string> DescribeInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeInstancesRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

std::vector<int> DescribeInstancesRequest::getStatus() const {
  return status_;
}

void DescribeInstancesRequest::setStatus(const std::vector<int> &status) {
  status_ = status;
}

