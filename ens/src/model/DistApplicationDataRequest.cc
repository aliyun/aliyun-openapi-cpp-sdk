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

#include <alibabacloud/ens/model/DistApplicationDataRequest.h>

using AlibabaCloud::Ens::Model::DistApplicationDataRequest;

DistApplicationDataRequest::DistApplicationDataRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DistApplicationData") {
  setMethod(HttpRequest::Method::Post);
}

DistApplicationDataRequest::~DistApplicationDataRequest() {}

std::string DistApplicationDataRequest::getData() const {
  return data_;
}

void DistApplicationDataRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string DistApplicationDataRequest::getDistStrategy() const {
  return distStrategy_;
}

void DistApplicationDataRequest::setDistStrategy(const std::string &distStrategy) {
  distStrategy_ = distStrategy;
  setParameter(std::string("DistStrategy"), distStrategy);
}

std::string DistApplicationDataRequest::getAppId() const {
  return appId_;
}

void DistApplicationDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

