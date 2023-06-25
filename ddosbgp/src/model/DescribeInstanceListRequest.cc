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

#include <alibabacloud/ddosbgp/model/DescribeInstanceListRequest.h>

using AlibabaCloud::Ddosbgp::Model::DescribeInstanceListRequest;

DescribeInstanceListRequest::DescribeInstanceListRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DescribeInstanceList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceListRequest::~DescribeInstanceListRequest() {}

std::string DescribeInstanceListRequest::getRemark() const {
  return remark_;
}

void DescribeInstanceListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeInstanceListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstanceListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeInstanceListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstanceListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeInstanceListRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeInstanceListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceListRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstanceListRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstanceListRequest::getIpVersion() const {
  return ipVersion_;
}

void DescribeInstanceListRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::vector<DescribeInstanceListRequest::Tag> DescribeInstanceListRequest::getTag() const {
  return tag_;
}

void DescribeInstanceListRequest::setTag(const std::vector<DescribeInstanceListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeInstanceListRequest::getIp() const {
  return ip_;
}

void DescribeInstanceListRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DescribeInstanceListRequest::getOrderby() const {
  return orderby_;
}

void DescribeInstanceListRequest::setOrderby(const std::string &orderby) {
  orderby_ = orderby;
  setParameter(std::string("Orderby"), orderby);
}

std::string DescribeInstanceListRequest::getInstanceIdList() const {
  return instanceIdList_;
}

void DescribeInstanceListRequest::setInstanceIdList(const std::string &instanceIdList) {
  instanceIdList_ = instanceIdList;
  setParameter(std::string("InstanceIdList"), instanceIdList);
}

int DescribeInstanceListRequest::getPageNo() const {
  return pageNo_;
}

void DescribeInstanceListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string DescribeInstanceListRequest::getOrderdire() const {
  return orderdire_;
}

void DescribeInstanceListRequest::setOrderdire(const std::string &orderdire) {
  orderdire_ = orderdire;
  setParameter(std::string("Orderdire"), orderdire);
}

std::vector<DescribeInstanceListRequest::std::string> DescribeInstanceListRequest::getInstanceTypeList() const {
  return instanceTypeList_;
}

void DescribeInstanceListRequest::setInstanceTypeList(const std::vector<DescribeInstanceListRequest::std::string> &instanceTypeList) {
  instanceTypeList_ = instanceTypeList;
  for(int dep1 = 0; dep1 != instanceTypeList.size(); dep1++) {
    setParameter(std::string("InstanceTypeList") + "." + std::to_string(dep1 + 1), instanceTypeList[dep1]);
  }
}

