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

#include <alibabacloud/cms/model/PutExporterRuleRequest.h>

using AlibabaCloud::Cms::Model::PutExporterRuleRequest;

PutExporterRuleRequest::PutExporterRuleRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutExporterRule") {
  setMethod(HttpRequest::Method::Post);
}

PutExporterRuleRequest::~PutExporterRuleRequest() {}

std::string PutExporterRuleRequest::getRuleName() const {
  return ruleName_;
}

void PutExporterRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::vector<std::string> PutExporterRuleRequest::getDstNames() const {
  return dstNames_;
}

void PutExporterRuleRequest::setDstNames(const std::vector<std::string> &dstNames) {
  dstNames_ = dstNames;
}

std::string PutExporterRuleRequest::get_Namespace() const {
  return _namespace_;
}

void PutExporterRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string PutExporterRuleRequest::getTargetWindows() const {
  return targetWindows_;
}

void PutExporterRuleRequest::setTargetWindows(const std::string &targetWindows) {
  targetWindows_ = targetWindows;
  setParameter(std::string("TargetWindows"), targetWindows);
}

std::string PutExporterRuleRequest::getDescribe() const {
  return describe_;
}

void PutExporterRuleRequest::setDescribe(const std::string &describe) {
  describe_ = describe;
  setParameter(std::string("Describe"), describe);
}

std::string PutExporterRuleRequest::getMetricName() const {
  return metricName_;
}

void PutExporterRuleRequest::setMetricName(const std::string &metricName) {
  metricName_ = metricName;
  setParameter(std::string("MetricName"), metricName);
}

