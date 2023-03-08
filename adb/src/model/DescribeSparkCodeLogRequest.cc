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

#include <alibabacloud/adb/model/DescribeSparkCodeLogRequest.h>

using AlibabaCloud::Adb::Model::DescribeSparkCodeLogRequest;

DescribeSparkCodeLogRequest::DescribeSparkCodeLogRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeSparkCodeLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSparkCodeLogRequest::~DescribeSparkCodeLogRequest() {}

long DescribeSparkCodeLogRequest::getJobId() const {
  return jobId_;
}

void DescribeSparkCodeLogRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string DescribeSparkCodeLogRequest::getRegionId() const {
  return regionId_;
}

void DescribeSparkCodeLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSparkCodeLogRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSparkCodeLogRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

