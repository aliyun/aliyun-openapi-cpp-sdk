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

#include <alibabacloud/sae/model/ExecJobRequest.h>

using AlibabaCloud::Sae::Model::ExecJobRequest;

ExecJobRequest::ExecJobRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/job/execJob"};
  setMethod(HttpRequest::Method::Get);
}

ExecJobRequest::~ExecJobRequest() {}

std::string ExecJobRequest::getEventId() const {
  return eventId_;
}

void ExecJobRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string ExecJobRequest::getJarStartOptions() const {
  return jarStartOptions_;
}

void ExecJobRequest::setJarStartOptions(const std::string &jarStartOptions) {
  jarStartOptions_ = jarStartOptions;
  setParameter(std::string("JarStartOptions"), jarStartOptions);
}

std::string ExecJobRequest::getJarStartArgs() const {
  return jarStartArgs_;
}

void ExecJobRequest::setJarStartArgs(const std::string &jarStartArgs) {
  jarStartArgs_ = jarStartArgs;
  setParameter(std::string("JarStartArgs"), jarStartArgs);
}

std::string ExecJobRequest::getCommandArgs() const {
  return commandArgs_;
}

void ExecJobRequest::setCommandArgs(const std::string &commandArgs) {
  commandArgs_ = commandArgs;
  setParameter(std::string("CommandArgs"), commandArgs);
}

std::string ExecJobRequest::getReplicas() const {
  return replicas_;
}

void ExecJobRequest::setReplicas(const std::string &replicas) {
  replicas_ = replicas;
  setParameter(std::string("Replicas"), replicas);
}

std::string ExecJobRequest::getAppId() const {
  return appId_;
}

void ExecJobRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ExecJobRequest::getEnvs() const {
  return envs_;
}

void ExecJobRequest::setEnvs(const std::string &envs) {
  envs_ = envs;
  setParameter(std::string("Envs"), envs);
}

std::string ExecJobRequest::getTime() const {
  return time_;
}

void ExecJobRequest::setTime(const std::string &time) {
  time_ = time;
  setParameter(std::string("Time"), time);
}

std::string ExecJobRequest::getCommand() const {
  return command_;
}

void ExecJobRequest::setCommand(const std::string &command) {
  command_ = command;
  setParameter(std::string("Command"), command);
}

std::string ExecJobRequest::getWarStartOptions() const {
  return warStartOptions_;
}

void ExecJobRequest::setWarStartOptions(const std::string &warStartOptions) {
  warStartOptions_ = warStartOptions;
  setParameter(std::string("WarStartOptions"), warStartOptions);
}

