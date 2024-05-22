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

#include <alibabacloud/polardbx/model/DescribeParameterTemplatesRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeParameterTemplatesRequest;

DescribeParameterTemplatesRequest::DescribeParameterTemplatesRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeParameterTemplates") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParameterTemplatesRequest::~DescribeParameterTemplatesRequest() {}

std::string DescribeParameterTemplatesRequest::getRegionId() const {
  return regionId_;
}

void DescribeParameterTemplatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeParameterTemplatesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeParameterTemplatesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeParameterTemplatesRequest::getParamLevel() const {
  return paramLevel_;
}

void DescribeParameterTemplatesRequest::setParamLevel(const std::string &paramLevel) {
  paramLevel_ = paramLevel;
  setParameter(std::string("ParamLevel"), paramLevel);
}

