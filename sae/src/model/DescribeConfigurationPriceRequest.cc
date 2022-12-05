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

#include <alibabacloud/sae/model/DescribeConfigurationPriceRequest.h>

using AlibabaCloud::Sae::Model::DescribeConfigurationPriceRequest;

DescribeConfigurationPriceRequest::DescribeConfigurationPriceRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/paas/configurationPrice"};
  setMethod(HttpRequest::Method::Get);
}

DescribeConfigurationPriceRequest::~DescribeConfigurationPriceRequest() {}

int DescribeConfigurationPriceRequest::getMemory() const {
  return memory_;
}

void DescribeConfigurationPriceRequest::setMemory(int memory) {
  memory_ = memory;
  setParameter(std::string("Memory"), std::to_string(memory));
}

int DescribeConfigurationPriceRequest::getCpu() const {
  return cpu_;
}

void DescribeConfigurationPriceRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setParameter(std::string("Cpu"), std::to_string(cpu));
}

std::string DescribeConfigurationPriceRequest::getWorkload() const {
  return workload_;
}

void DescribeConfigurationPriceRequest::setWorkload(const std::string &workload) {
  workload_ = workload;
  setParameter(std::string("Workload"), workload);
}

