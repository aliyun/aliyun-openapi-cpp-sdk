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

#include <alibabacloud/schedulerx2/model/ExecuteJobRequest.h>

using AlibabaCloud::Schedulerx2::Model::ExecuteJobRequest;

ExecuteJobRequest::ExecuteJobRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "ExecuteJob") {
  setMethod(HttpRequest::Method::Get);
}

ExecuteJobRequest::~ExecuteJobRequest() {}

std::string ExecuteJobRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void ExecuteJobRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

bool ExecuteJobRequest::getCheckJobStatus() const {
  return checkJobStatus_;
}

void ExecuteJobRequest::setCheckJobStatus(bool checkJobStatus) {
  checkJobStatus_ = checkJobStatus;
  setParameter(std::string("CheckJobStatus"), checkJobStatus ? "true" : "false");
}

int ExecuteJobRequest::getDesignateType() const {
  return designateType_;
}

void ExecuteJobRequest::setDesignateType(int designateType) {
  designateType_ = designateType;
  setParameter(std::string("DesignateType"), std::to_string(designateType));
}

long ExecuteJobRequest::getJobId() const {
  return jobId_;
}

void ExecuteJobRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string ExecuteJobRequest::getRegionId() const {
  return regionId_;
}

void ExecuteJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ExecuteJobRequest::getWorker() const {
  return worker_;
}

void ExecuteJobRequest::setWorker(const std::string &worker) {
  worker_ = worker;
  setParameter(std::string("Worker"), worker);
}

std::string ExecuteJobRequest::getInstanceParameters() const {
  return instanceParameters_;
}

void ExecuteJobRequest::setInstanceParameters(const std::string &instanceParameters) {
  instanceParameters_ = instanceParameters;
  setParameter(std::string("InstanceParameters"), instanceParameters);
}

std::string ExecuteJobRequest::getGroupId() const {
  return groupId_;
}

void ExecuteJobRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ExecuteJobRequest::getLabel() const {
  return label_;
}

void ExecuteJobRequest::setLabel(const std::string &label) {
  label_ = label;
  setParameter(std::string("Label"), label);
}

std::string ExecuteJobRequest::get_Namespace() const {
  return _namespace_;
}

void ExecuteJobRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

