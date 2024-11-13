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

#include <alibabacloud/push/model/QueryDeviceInfoRequest.h>

using AlibabaCloud::Push::Model::QueryDeviceInfoRequest;

QueryDeviceInfoRequest::QueryDeviceInfoRequest()
    : RpcServiceRequest("push", "2016-08-01", "QueryDeviceInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryDeviceInfoRequest::~QueryDeviceInfoRequest() {}

std::string QueryDeviceInfoRequest::getDeviceId() const {
  return deviceId_;
}

void QueryDeviceInfoRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

long QueryDeviceInfoRequest::getAppKey() const {
  return appKey_;
}

void QueryDeviceInfoRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

