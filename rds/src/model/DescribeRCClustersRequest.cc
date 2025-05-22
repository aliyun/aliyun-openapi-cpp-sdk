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

#include <alibabacloud/rds/model/DescribeRCClustersRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCClustersRequest;

DescribeRCClustersRequest::DescribeRCClustersRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCClusters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCClustersRequest::~DescribeRCClustersRequest() {}

std::string DescribeRCClustersRequest::getProfile() const {
  return profile_;
}

void DescribeRCClustersRequest::setProfile(const std::string &profile) {
  profile_ = profile;
  setParameter(std::string("Profile"), profile);
}

std::string DescribeRCClustersRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCClustersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCClustersRequest::getVpcId() const {
  return vpcId_;
}

void DescribeRCClustersRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

