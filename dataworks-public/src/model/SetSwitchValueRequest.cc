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

#include <alibabacloud/dataworks-public/model/SetSwitchValueRequest.h>

using AlibabaCloud::Dataworks_public::Model::SetSwitchValueRequest;

SetSwitchValueRequest::SetSwitchValueRequest()
    : RpcServiceRequest("dataworks-public", "2018-06-01", "SetSwitchValue") {
  setMethod(HttpRequest::Method::Post);
}

SetSwitchValueRequest::~SetSwitchValueRequest() {}

std::string SetSwitchValueRequest::getSwitchName() const {
  return switchName_;
}

void SetSwitchValueRequest::setSwitchName(const std::string &switchName) {
  switchName_ = switchName;
  setParameter(std::string("SwitchName"), switchName);
}

std::string SetSwitchValueRequest::getSwitchValue() const {
  return switchValue_;
}

void SetSwitchValueRequest::setSwitchValue(const std::string &switchValue) {
  switchValue_ = switchValue;
  setParameter(std::string("SwitchValue"), switchValue);
}

