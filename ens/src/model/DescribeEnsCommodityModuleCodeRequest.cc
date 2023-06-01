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

#include <alibabacloud/ens/model/DescribeEnsCommodityModuleCodeRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsCommodityModuleCodeRequest;

DescribeEnsCommodityModuleCodeRequest::DescribeEnsCommodityModuleCodeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsCommodityModuleCode") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsCommodityModuleCodeRequest::~DescribeEnsCommodityModuleCodeRequest() {}

std::string DescribeEnsCommodityModuleCodeRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeEnsCommodityModuleCodeRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string DescribeEnsCommodityModuleCodeRequest::getModuleCode() const {
  return moduleCode_;
}

void DescribeEnsCommodityModuleCodeRequest::setModuleCode(const std::string &moduleCode) {
  moduleCode_ = moduleCode;
  setParameter(std::string("ModuleCode"), moduleCode);
}

