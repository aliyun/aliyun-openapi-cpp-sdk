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

#include <alibabacloud/ens/model/RebootInstanceRequest.h>

using AlibabaCloud::Ens::Model::RebootInstanceRequest;

RebootInstanceRequest::RebootInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RebootInstance") {
  setMethod(HttpRequest::Method::Post);
}

RebootInstanceRequest::~RebootInstanceRequest() {}

std::string RebootInstanceRequest::getForceStop() const {
  return forceStop_;
}

void RebootInstanceRequest::setForceStop(const std::string &forceStop) {
  forceStop_ = forceStop;
  setParameter(std::string("ForceStop"), forceStop);
}

std::string RebootInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RebootInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

