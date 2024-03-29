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

#include <alibabacloud/cloudapi/model/DescribeVpcAccessesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeVpcAccessesRequest;

DescribeVpcAccessesRequest::DescribeVpcAccessesRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeVpcAccesses") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpcAccessesRequest::~DescribeVpcAccessesRequest() {}

int DescribeVpcAccessesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpcAccessesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVpcAccessesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeVpcAccessesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeVpcAccessesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeVpcAccessesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeVpcAccessesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeVpcAccessesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool DescribeVpcAccessesRequest::getAccurateQuery() const {
  return accurateQuery_;
}

void DescribeVpcAccessesRequest::setAccurateQuery(bool accurateQuery) {
  accurateQuery_ = accurateQuery;
  setParameter(std::string("AccurateQuery"), accurateQuery ? "true" : "false");
}

std::string DescribeVpcAccessesRequest::getPort() const {
  return port_;
}

void DescribeVpcAccessesRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string DescribeVpcAccessesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeVpcAccessesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

int DescribeVpcAccessesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpcAccessesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVpcAccessesRequest::getName() const {
  return name_;
}

void DescribeVpcAccessesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeVpcAccessesRequest::getVpcAccessId() const {
  return vpcAccessId_;
}

void DescribeVpcAccessesRequest::setVpcAccessId(const std::string &vpcAccessId) {
  vpcAccessId_ = vpcAccessId;
  setParameter(std::string("VpcAccessId"), vpcAccessId);
}

