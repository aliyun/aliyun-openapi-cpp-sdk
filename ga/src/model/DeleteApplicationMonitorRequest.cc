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

#include <alibabacloud/ga/model/DeleteApplicationMonitorRequest.h>

using AlibabaCloud::Ga::Model::DeleteApplicationMonitorRequest;

DeleteApplicationMonitorRequest::DeleteApplicationMonitorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "DeleteApplicationMonitor") {
  setMethod(HttpRequest::Method::Post);
}

DeleteApplicationMonitorRequest::~DeleteApplicationMonitorRequest() {}

std::string DeleteApplicationMonitorRequest::getClientToken() const {
  return clientToken_;
}

void DeleteApplicationMonitorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteApplicationMonitorRequest::getRegionId() const {
  return regionId_;
}

void DeleteApplicationMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteApplicationMonitorRequest::getTaskId() const {
  return taskId_;
}

void DeleteApplicationMonitorRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

