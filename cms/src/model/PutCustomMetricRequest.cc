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

#include <alibabacloud/cms/model/PutCustomMetricRequest.h>

using AlibabaCloud::Cms::Model::PutCustomMetricRequest;

PutCustomMetricRequest::PutCustomMetricRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutCustomMetric") {
  setMethod(HttpRequest::Method::Post);
}

PutCustomMetricRequest::~PutCustomMetricRequest() {}

std::vector<PutCustomMetricRequest::MetricList> PutCustomMetricRequest::getMetricList() const {
  return metricList_;
}

void PutCustomMetricRequest::setMetricList(const std::vector<PutCustomMetricRequest::MetricList> &metricList) {
  metricList_ = metricList;
  for(int dep1 = 0; dep1 != metricList.size(); dep1++) {
  auto metricListObj = metricList.at(dep1);
  std::string metricListObjStr = std::string("MetricList") + "." + std::to_string(dep1 + 1);
    setParameter(metricListObjStr + ".Period", metricListObj.period);
    setParameter(metricListObjStr + ".GroupId", metricListObj.groupId);
    setParameter(metricListObjStr + ".Values", metricListObj.values);
    setParameter(metricListObjStr + ".Time", metricListObj.time);
    setParameter(metricListObjStr + ".Type", metricListObj.type);
    setParameter(metricListObjStr + ".MetricName", metricListObj.metricName);
    setParameter(metricListObjStr + ".Dimensions", metricListObj.dimensions);
  }
}

