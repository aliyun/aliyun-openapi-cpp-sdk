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

#include <alibabacloud/idaas-doraemon/model/QuerySmsReportsRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::QuerySmsReportsRequest;

QuerySmsReportsRequest::QuerySmsReportsRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "QuerySmsReports") {
  setMethod(HttpRequest::Method::Get);
}

QuerySmsReportsRequest::~QuerySmsReportsRequest() {}

std::string QuerySmsReportsRequest::getEventId() const {
  return eventId_;
}

void QuerySmsReportsRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string QuerySmsReportsRequest::getAppId() const {
  return appId_;
}

void QuerySmsReportsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

