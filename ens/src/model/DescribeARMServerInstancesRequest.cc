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

#include <alibabacloud/ens/model/DescribeARMServerInstancesRequest.h>

using AlibabaCloud::Ens::Model::DescribeARMServerInstancesRequest;

DescribeARMServerInstancesRequest::DescribeARMServerInstancesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeARMServerInstances") {
  setMethod(HttpRequest::Method::Get);
}

DescribeARMServerInstancesRequest::~DescribeARMServerInstancesRequest() {}

std::vector<DescribeARMServerInstancesRequest::std::string> DescribeARMServerInstancesRequest::getAICSpecs() const {
  return aICSpecs_;
}

void DescribeARMServerInstancesRequest::setAICSpecs(const std::vector<DescribeARMServerInstancesRequest::std::string> &aICSpecs) {
  aICSpecs_ = aICSpecs;
  for(int dep1 = 0; dep1 != aICSpecs.size(); dep1++) {
    setParameter(std::string("AICSpecs") + "." + std::to_string(dep1 + 1), aICSpecs[dep1]);
  }
}

std::string DescribeARMServerInstancesRequest::getOrderByParams() const {
  return orderByParams_;
}

void DescribeARMServerInstancesRequest::setOrderByParams(const std::string &orderByParams) {
  orderByParams_ = orderByParams;
  setParameter(std::string("OrderByParams"), orderByParams);
}

bool DescribeARMServerInstancesRequest::getDescribeAICInstances() const {
  return describeAICInstances_;
}

void DescribeARMServerInstancesRequest::setDescribeAICInstances(bool describeAICInstances) {
  describeAICInstances_ = describeAICInstances;
  setParameter(std::string("DescribeAICInstances"), describeAICInstances ? "true" : "false");
}

std::vector<DescribeARMServerInstancesRequest::std::string> DescribeARMServerInstancesRequest::getServerIds() const {
  return serverIds_;
}

void DescribeARMServerInstancesRequest::setServerIds(const std::vector<DescribeARMServerInstancesRequest::std::string> &serverIds) {
  serverIds_ = serverIds;
  for(int dep1 = 0; dep1 != serverIds.size(); dep1++) {
    setParameter(std::string("ServerIds") + "." + std::to_string(dep1 + 1), serverIds[dep1]);
  }
}

std::string DescribeARMServerInstancesRequest::getName() const {
  return name_;
}

void DescribeARMServerInstancesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeARMServerInstancesRequest::getMaxDate() const {
  return maxDate_;
}

void DescribeARMServerInstancesRequest::setMaxDate(const std::string &maxDate) {
  maxDate_ = maxDate;
  setParameter(std::string("MaxDate"), maxDate);
}

int DescribeARMServerInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeARMServerInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::vector<DescribeARMServerInstancesRequest::std::string> DescribeARMServerInstancesRequest::getStates() const {
  return states_;
}

void DescribeARMServerInstancesRequest::setStates(const std::vector<DescribeARMServerInstancesRequest::std::string> &states) {
  states_ = states;
  for(int dep1 = 0; dep1 != states.size(); dep1++) {
    setParameter(std::string("States") + "." + std::to_string(dep1 + 1), states[dep1]);
  }
}

std::vector<DescribeARMServerInstancesRequest::std::string> DescribeARMServerInstancesRequest::getServerSpecs() const {
  return serverSpecs_;
}

void DescribeARMServerInstancesRequest::setServerSpecs(const std::vector<DescribeARMServerInstancesRequest::std::string> &serverSpecs) {
  serverSpecs_ = serverSpecs;
  for(int dep1 = 0; dep1 != serverSpecs.size(); dep1++) {
    setParameter(std::string("ServerSpecs") + "." + std::to_string(dep1 + 1), serverSpecs[dep1]);
  }
}

int DescribeARMServerInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeARMServerInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeARMServerInstancesRequest::std::string> DescribeARMServerInstancesRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeARMServerInstancesRequest::setEnsRegionIds(const std::vector<DescribeARMServerInstancesRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

std::string DescribeARMServerInstancesRequest::getMinDate() const {
  return minDate_;
}

void DescribeARMServerInstancesRequest::setMinDate(const std::string &minDate) {
  minDate_ = minDate;
  setParameter(std::string("MinDate"), minDate);
}

std::string DescribeARMServerInstancesRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeARMServerInstancesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

