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

#include <alibabacloud/ens/model/UnassociateHaVipRequest.h>

using AlibabaCloud::Ens::Model::UnassociateHaVipRequest;

UnassociateHaVipRequest::UnassociateHaVipRequest()
    : RpcServiceRequest("ens", "2017-11-10", "UnassociateHaVip") {
  setMethod(HttpRequest::Method::Post);
}

UnassociateHaVipRequest::~UnassociateHaVipRequest() {}

std::string UnassociateHaVipRequest::getHaVipId() const {
  return haVipId_;
}

void UnassociateHaVipRequest::setHaVipId(const std::string &haVipId) {
  haVipId_ = haVipId;
  setParameter(std::string("HaVipId"), haVipId);
}

std::string UnassociateHaVipRequest::getInstanceId() const {
  return instanceId_;
}

void UnassociateHaVipRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

