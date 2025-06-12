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

#include <alibabacloud/clickhouse/model/DescribeDBClusterConfigInXMLRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeDBClusterConfigInXMLRequest;

DescribeDBClusterConfigInXMLRequest::DescribeDBClusterConfigInXMLRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeDBClusterConfigInXML") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterConfigInXMLRequest::~DescribeDBClusterConfigInXMLRequest() {}

std::string DescribeDBClusterConfigInXMLRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterConfigInXMLRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterConfigInXMLRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterConfigInXMLRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

