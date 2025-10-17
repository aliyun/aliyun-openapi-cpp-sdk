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

#include <alibabacloud/polardb/model/DescribeApplicationParametersRequest.h>

using AlibabaCloud::Polardb::Model::DescribeApplicationParametersRequest;

DescribeApplicationParametersRequest::DescribeApplicationParametersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeApplicationParameters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApplicationParametersRequest::~DescribeApplicationParametersRequest() {}

std::vector<DescribeApplicationParametersRequest::std::string> DescribeApplicationParametersRequest::getComponentIdList() const {
  return componentIdList_;
}

void DescribeApplicationParametersRequest::setComponentIdList(const std::vector<DescribeApplicationParametersRequest::std::string> &componentIdList) {
  componentIdList_ = componentIdList;
  for(int dep1 = 0; dep1 != componentIdList.size(); dep1++) {
    setParameter(std::string("ComponentIdList") + "." + std::to_string(dep1 + 1), componentIdList[dep1]);
  }
}

std::string DescribeApplicationParametersRequest::getApplicationId() const {
  return applicationId_;
}

void DescribeApplicationParametersRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

