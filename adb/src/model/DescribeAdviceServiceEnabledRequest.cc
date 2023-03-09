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

#include <alibabacloud/adb/model/DescribeAdviceServiceEnabledRequest.h>

using AlibabaCloud::Adb::Model::DescribeAdviceServiceEnabledRequest;

DescribeAdviceServiceEnabledRequest::DescribeAdviceServiceEnabledRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeAdviceServiceEnabled") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAdviceServiceEnabledRequest::~DescribeAdviceServiceEnabledRequest() {}

std::string DescribeAdviceServiceEnabledRequest::getRegionId() const {
  return regionId_;
}

void DescribeAdviceServiceEnabledRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAdviceServiceEnabledRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAdviceServiceEnabledRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

