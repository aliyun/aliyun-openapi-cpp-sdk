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

#include <alibabacloud/ens/model/RunServiceScheduleRequest.h>

using AlibabaCloud::Ens::Model::RunServiceScheduleRequest;

RunServiceScheduleRequest::RunServiceScheduleRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RunServiceSchedule") {
  setMethod(HttpRequest::Method::Post);
}

RunServiceScheduleRequest::~RunServiceScheduleRequest() {}

std::string RunServiceScheduleRequest::getUuid() const {
  return uuid_;
}

void RunServiceScheduleRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string RunServiceScheduleRequest::getClientIp() const {
  return clientIp_;
}

void RunServiceScheduleRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setParameter(std::string("ClientIp"), clientIp);
}

std::string RunServiceScheduleRequest::getPodConfigName() const {
  return podConfigName_;
}

void RunServiceScheduleRequest::setPodConfigName(const std::string &podConfigName) {
  podConfigName_ = podConfigName;
  setParameter(std::string("PodConfigName"), podConfigName);
}

std::string RunServiceScheduleRequest::getServiceCommands() const {
  return serviceCommands_;
}

void RunServiceScheduleRequest::setServiceCommands(const std::string &serviceCommands) {
  serviceCommands_ = serviceCommands;
  setParameter(std::string("ServiceCommands"), serviceCommands);
}

std::string RunServiceScheduleRequest::getScheduleStrategy() const {
  return scheduleStrategy_;
}

void RunServiceScheduleRequest::setScheduleStrategy(const std::string &scheduleStrategy) {
  scheduleStrategy_ = scheduleStrategy;
  setParameter(std::string("ScheduleStrategy"), scheduleStrategy);
}

std::string RunServiceScheduleRequest::getDirectorys() const {
  return directorys_;
}

void RunServiceScheduleRequest::setDirectorys(const std::string &directorys) {
  directorys_ = directorys;
  setParameter(std::string("Directorys"), directorys);
}

int RunServiceScheduleRequest::getPreLockedTimeout() const {
  return preLockedTimeout_;
}

void RunServiceScheduleRequest::setPreLockedTimeout(int preLockedTimeout) {
  preLockedTimeout_ = preLockedTimeout;
  setParameter(std::string("PreLockedTimeout"), std::to_string(preLockedTimeout));
}

std::string RunServiceScheduleRequest::getServiceAction() const {
  return serviceAction_;
}

void RunServiceScheduleRequest::setServiceAction(const std::string &serviceAction) {
  serviceAction_ = serviceAction;
  setParameter(std::string("ServiceAction"), serviceAction);
}

std::string RunServiceScheduleRequest::getAppId() const {
  return appId_;
}

void RunServiceScheduleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

