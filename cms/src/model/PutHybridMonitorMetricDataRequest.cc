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

#include <alibabacloud/cms/model/PutHybridMonitorMetricDataRequest.h>

using AlibabaCloud::Cms::Model::PutHybridMonitorMetricDataRequest;

PutHybridMonitorMetricDataRequest::PutHybridMonitorMetricDataRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutHybridMonitorMetricData") {
  setMethod(HttpRequest::Method::Post);
}

PutHybridMonitorMetricDataRequest::~PutHybridMonitorMetricDataRequest() {}

std::vector<PutHybridMonitorMetricDataRequest::MetricList> PutHybridMonitorMetricDataRequest::getMetricList() const {
  return metricList_;
}

void PutHybridMonitorMetricDataRequest::setMetricList(const std::vector<PutHybridMonitorMetricDataRequest::MetricList> &metricList) {
  metricList_ = metricList;
  for(int dep1 = 0; dep1 != metricList.size(); dep1++) {
  auto metricListObj = metricList.at(dep1);
  std::string metricListObjStr = std::string("MetricList") + "." + std::to_string(dep1 + 1);
    setParameter(metricListObjStr + ".Name", metricListObj.name);
    setParameter(metricListObjStr + ".Value", metricListObj.value);
    for(int dep2 = 0; dep2 != metricListObj.labels.size(); dep2++) {
    auto labelsObj = metricListObj.labels.at(dep2);
    std::string labelsObjStr = metricListObjStr + ".Labels" + "." + std::to_string(dep2 + 1);
      setParameter(labelsObjStr + ".Value", labelsObj.value);
      setParameter(labelsObjStr + ".Key", labelsObj.key);
    }
    setParameter(metricListObjStr + ".TS", std::to_string(metricListObj.tS));
  }
}

std::string PutHybridMonitorMetricDataRequest::get_Namespace() const {
  return _namespace_;
}

void PutHybridMonitorMetricDataRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

