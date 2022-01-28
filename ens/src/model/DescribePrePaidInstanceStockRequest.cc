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

#include <alibabacloud/ens/model/DescribePrePaidInstanceStockRequest.h>

using AlibabaCloud::Ens::Model::DescribePrePaidInstanceStockRequest;

DescribePrePaidInstanceStockRequest::DescribePrePaidInstanceStockRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribePrePaidInstanceStock") {
  setMethod(HttpRequest::Method::Post);
}

DescribePrePaidInstanceStockRequest::~DescribePrePaidInstanceStockRequest() {}

std::string DescribePrePaidInstanceStockRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void DescribePrePaidInstanceStockRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

std::string DescribePrePaidInstanceStockRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribePrePaidInstanceStockRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

int DescribePrePaidInstanceStockRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void DescribePrePaidInstanceStockRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDiskSize"), std::to_string(systemDiskSize));
}

int DescribePrePaidInstanceStockRequest::getDataDiskSize() const {
  return dataDiskSize_;
}

void DescribePrePaidInstanceStockRequest::setDataDiskSize(int dataDiskSize) {
  dataDiskSize_ = dataDiskSize;
  setParameter(std::string("DataDiskSize"), std::to_string(dataDiskSize));
}

