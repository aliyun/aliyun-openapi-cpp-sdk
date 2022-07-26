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

#include <alibabacloud/ens/model/DescribePriceRequest.h>

using AlibabaCloud::Ens::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribePrice") {
  setMethod(HttpRequest::Method::Post);
}

DescribePriceRequest::~DescribePriceRequest() {}

std::vector<DescribePriceRequest::DataDisks> DescribePriceRequest::getDataDisks() const {
  return dataDisks_;
}

void DescribePriceRequest::setDataDisks(const std::vector<DescribePriceRequest::DataDisks> &dataDisks) {
  dataDisks_ = dataDisks;
  for(int dep1 = 0; dep1 != dataDisks.size(); dep1++) {
    setParameter(std::string("DataDisks") + "." + std::to_string(dep1 + 1) + ".Size", std::to_string(dataDisks[dep1].size));
    setParameter(std::string("DataDisks") + "." + std::to_string(dep1 + 1) + ".Category", dataDisks[dep1].category);
  }
}

std::string DescribePriceRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribePriceRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

int DescribePriceRequest::getPeriod() const {
  return period_;
}

void DescribePriceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string DescribePriceRequest::getPeriodUnit() const {
  return periodUnit_;
}

void DescribePriceRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string DescribePriceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void DescribePriceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string DescribePriceRequest::getInstanceType() const {
  return instanceType_;
}

void DescribePriceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

int DescribePriceRequest::getDataDisk1Size() const {
  return dataDisk1Size_;
}

void DescribePriceRequest::setDataDisk1Size(int dataDisk1Size) {
  dataDisk1Size_ = dataDisk1Size;
  setParameter(std::string("DataDisk.1.Size"), std::to_string(dataDisk1Size));
}

int DescribePriceRequest::getQuantity() const {
  return quantity_;
}

void DescribePriceRequest::setQuantity(int quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), std::to_string(quantity));
}

int DescribePriceRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void DescribePriceRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), std::to_string(systemDiskSize));
}

