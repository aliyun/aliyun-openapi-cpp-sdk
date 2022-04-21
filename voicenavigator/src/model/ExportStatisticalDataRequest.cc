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

#include <alibabacloud/voicenavigator/model/ExportStatisticalDataRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ExportStatisticalDataRequest;

ExportStatisticalDataRequest::ExportStatisticalDataRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ExportStatisticalData") {
  setMethod(HttpRequest::Method::Post);
}

ExportStatisticalDataRequest::~ExportStatisticalDataRequest() {}

long ExportStatisticalDataRequest::getBeginTimeLeftRange() const {
  return beginTimeLeftRange_;
}

void ExportStatisticalDataRequest::setBeginTimeLeftRange(long beginTimeLeftRange) {
  beginTimeLeftRange_ = beginTimeLeftRange;
  setParameter(std::string("BeginTimeLeftRange"), std::to_string(beginTimeLeftRange));
}

std::string ExportStatisticalDataRequest::getExportType() const {
  return exportType_;
}

void ExportStatisticalDataRequest::setExportType(const std::string &exportType) {
  exportType_ = exportType;
  setParameter(std::string("ExportType"), exportType);
}

std::string ExportStatisticalDataRequest::getTimeUnit() const {
  return timeUnit_;
}

void ExportStatisticalDataRequest::setTimeUnit(const std::string &timeUnit) {
  timeUnit_ = timeUnit;
  setParameter(std::string("TimeUnit"), timeUnit);
}

std::string ExportStatisticalDataRequest::getInstanceId() const {
  return instanceId_;
}

void ExportStatisticalDataRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ExportStatisticalDataRequest::getBeginTimeRightRange() const {
  return beginTimeRightRange_;
}

void ExportStatisticalDataRequest::setBeginTimeRightRange(long beginTimeRightRange) {
  beginTimeRightRange_ = beginTimeRightRange;
  setParameter(std::string("BeginTimeRightRange"), std::to_string(beginTimeRightRange));
}

