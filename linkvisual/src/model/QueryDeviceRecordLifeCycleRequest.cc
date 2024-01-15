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

#include <alibabacloud/linkvisual/model/QueryDeviceRecordLifeCycleRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryDeviceRecordLifeCycleRequest;

QueryDeviceRecordLifeCycleRequest::QueryDeviceRecordLifeCycleRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryDeviceRecordLifeCycle") {
  setMethod(HttpRequest::Method::Post);
}

QueryDeviceRecordLifeCycleRequest::~QueryDeviceRecordLifeCycleRequest() {}

std::vector<std::string> QueryDeviceRecordLifeCycleRequest::getDeviceList() const {
  return deviceList_;
}

void QueryDeviceRecordLifeCycleRequest::setDeviceList(const std::vector<std::string> &deviceList) {
  deviceList_ = deviceList;
}

std::string QueryDeviceRecordLifeCycleRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryDeviceRecordLifeCycleRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryDeviceRecordLifeCycleRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryDeviceRecordLifeCycleRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

