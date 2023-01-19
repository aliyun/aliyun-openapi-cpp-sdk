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

#include <alibabacloud/sas/model/GetAlarmMachineCountRequest.h>

using AlibabaCloud::Sas::Model::GetAlarmMachineCountRequest;

GetAlarmMachineCountRequest::GetAlarmMachineCountRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetAlarmMachineCount") {
  setMethod(HttpRequest::Method::Post);
}

GetAlarmMachineCountRequest::~GetAlarmMachineCountRequest() {}

std::string GetAlarmMachineCountRequest::getFrom() const {
  return from_;
}

void GetAlarmMachineCountRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

