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

#include <alibabacloud/dds/model/ModifyTaskInfoRequest.h>

using AlibabaCloud::Dds::Model::ModifyTaskInfoRequest;

ModifyTaskInfoRequest::ModifyTaskInfoRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyTaskInfo") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTaskInfoRequest::~ModifyTaskInfoRequest() {}

long ModifyTaskInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyTaskInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyTaskInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyTaskInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyTaskInfoRequest::getRegionId() const {
  return regionId_;
}

void ModifyTaskInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyTaskInfoRequest::getTaskId() const {
  return taskId_;
}

void ModifyTaskInfoRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string ModifyTaskInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyTaskInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyTaskInfoRequest::getStepName() const {
  return stepName_;
}

void ModifyTaskInfoRequest::setStepName(const std::string &stepName) {
  stepName_ = stepName;
  setParameter(std::string("StepName"), stepName);
}

std::string ModifyTaskInfoRequest::getActionParams() const {
  return actionParams_;
}

void ModifyTaskInfoRequest::setActionParams(const std::string &actionParams) {
  actionParams_ = actionParams;
  setParameter(std::string("ActionParams"), actionParams);
}

std::string ModifyTaskInfoRequest::getTaskAction() const {
  return taskAction_;
}

void ModifyTaskInfoRequest::setTaskAction(const std::string &taskAction) {
  taskAction_ = taskAction;
  setParameter(std::string("TaskAction"), taskAction);
}

