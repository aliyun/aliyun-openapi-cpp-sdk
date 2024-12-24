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

#include <alibabacloud/eflo/model/ListVccFlowInfosRequest.h>

using AlibabaCloud::Eflo::Model::ListVccFlowInfosRequest;

ListVccFlowInfosRequest::ListVccFlowInfosRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListVccFlowInfos") {
  setMethod(HttpRequest::Method::Post);
}

ListVccFlowInfosRequest::~ListVccFlowInfosRequest() {}

std::string ListVccFlowInfosRequest::getRegionId() const {
  return regionId_;
}

void ListVccFlowInfosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

long ListVccFlowInfosRequest::getFrom() const {
  return from_;
}

void ListVccFlowInfosRequest::setFrom(long from) {
  from_ = from;
  setBodyParameter(std::string("From"), std::to_string(from));
}

long ListVccFlowInfosRequest::getTo() const {
  return to_;
}

void ListVccFlowInfosRequest::setTo(long to) {
  to_ = to;
  setBodyParameter(std::string("To"), std::to_string(to));
}

std::string ListVccFlowInfosRequest::getVccId() const {
  return vccId_;
}

void ListVccFlowInfosRequest::setVccId(const std::string &vccId) {
  vccId_ = vccId;
  setBodyParameter(std::string("VccId"), vccId);
}

std::string ListVccFlowInfosRequest::getMetricName() const {
  return metricName_;
}

void ListVccFlowInfosRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setBodyParameter(std::string("MetricName"), metricName);
}

std::string ListVccFlowInfosRequest::getDirection() const {
  return direction_;
}

void ListVccFlowInfosRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setBodyParameter(std::string("Direction"), direction);
}

