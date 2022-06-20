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

#include <alibabacloud/sas/model/DescribeGroupedTagsRequest.h>

using AlibabaCloud::Sas::Model::DescribeGroupedTagsRequest;

DescribeGroupedTagsRequest::DescribeGroupedTagsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeGroupedTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupedTagsRequest::~DescribeGroupedTagsRequest() {}

std::string DescribeGroupedTagsRequest::getMachineTypes() const {
  return machineTypes_;
}

void DescribeGroupedTagsRequest::setMachineTypes(const std::string &machineTypes) {
  machineTypes_ = machineTypes;
  setParameter(std::string("MachineTypes"), machineTypes);
}

std::string DescribeGroupedTagsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeGroupedTagsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

