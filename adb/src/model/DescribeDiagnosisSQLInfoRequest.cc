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

#include <alibabacloud/adb/model/DescribeDiagnosisSQLInfoRequest.h>

using AlibabaCloud::Adb::Model::DescribeDiagnosisSQLInfoRequest;

DescribeDiagnosisSQLInfoRequest::DescribeDiagnosisSQLInfoRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDiagnosisSQLInfo") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDiagnosisSQLInfoRequest::~DescribeDiagnosisSQLInfoRequest() {}

std::string DescribeDiagnosisSQLInfoRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDiagnosisSQLInfoRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDiagnosisSQLInfoRequest::getProcessState() const {
  return processState_;
}

void DescribeDiagnosisSQLInfoRequest::setProcessState(const std::string &processState) {
  processState_ = processState;
  setParameter(std::string("ProcessState"), processState);
}

long DescribeDiagnosisSQLInfoRequest::getProcessStartTime() const {
  return processStartTime_;
}

void DescribeDiagnosisSQLInfoRequest::setProcessStartTime(long processStartTime) {
  processStartTime_ = processStartTime;
  setParameter(std::string("ProcessStartTime"), std::to_string(processStartTime));
}

std::string DescribeDiagnosisSQLInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosisSQLInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosisSQLInfoRequest::getProcessId() const {
  return processId_;
}

void DescribeDiagnosisSQLInfoRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setParameter(std::string("ProcessId"), processId);
}

std::string DescribeDiagnosisSQLInfoRequest::getProcessRcHost() const {
  return processRcHost_;
}

void DescribeDiagnosisSQLInfoRequest::setProcessRcHost(const std::string &processRcHost) {
  processRcHost_ = processRcHost;
  setParameter(std::string("ProcessRcHost"), processRcHost);
}

std::string DescribeDiagnosisSQLInfoRequest::getLang() const {
  return lang_;
}

void DescribeDiagnosisSQLInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

