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

#include <alibabacloud/sas/model/DescribeVpcHoneyPotListRequest.h>

using AlibabaCloud::Sas::Model::DescribeVpcHoneyPotListRequest;

DescribeVpcHoneyPotListRequest::DescribeVpcHoneyPotListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeVpcHoneyPotList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpcHoneyPotListRequest::~DescribeVpcHoneyPotListRequest() {}

std::string DescribeVpcHoneyPotListRequest::getVpcName() const {
  return vpcName_;
}

void DescribeVpcHoneyPotListRequest::setVpcName(const std::string &vpcName) {
  vpcName_ = vpcName;
  setParameter(std::string("VpcName"), vpcName);
}

std::string DescribeVpcHoneyPotListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVpcHoneyPotListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeVpcHoneyPotListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpcHoneyPotListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribeVpcHoneyPotListRequest::getHoneyPotExistence() const {
  return honeyPotExistence_;
}

void DescribeVpcHoneyPotListRequest::setHoneyPotExistence(bool honeyPotExistence) {
  honeyPotExistence_ = honeyPotExistence;
  setParameter(std::string("HoneyPotExistence"), honeyPotExistence ? "true" : "false");
}

std::string DescribeVpcHoneyPotListRequest::getVpcRegionId() const {
  return vpcRegionId_;
}

void DescribeVpcHoneyPotListRequest::setVpcRegionId(const std::string &vpcRegionId) {
  vpcRegionId_ = vpcRegionId;
  setParameter(std::string("VpcRegionId"), vpcRegionId);
}

int DescribeVpcHoneyPotListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeVpcHoneyPotListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeVpcHoneyPotListRequest::getVpcId() const {
  return vpcId_;
}

void DescribeVpcHoneyPotListRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

