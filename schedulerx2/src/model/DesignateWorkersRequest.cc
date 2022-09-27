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

#include <alibabacloud/schedulerx2/model/DesignateWorkersRequest.h>

using AlibabaCloud::Schedulerx2::Model::DesignateWorkersRequest;

DesignateWorkersRequest::DesignateWorkersRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "DesignateWorkers") {
  setMethod(HttpRequest::Method::Get);
}

DesignateWorkersRequest::~DesignateWorkersRequest() {}

std::string DesignateWorkersRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void DesignateWorkersRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

bool DesignateWorkersRequest::getTransferable() const {
  return transferable_;
}

void DesignateWorkersRequest::setTransferable(bool transferable) {
  transferable_ = transferable;
  setParameter(std::string("Transferable"), transferable ? "true" : "false");
}

int DesignateWorkersRequest::getDesignateType() const {
  return designateType_;
}

void DesignateWorkersRequest::setDesignateType(int designateType) {
  designateType_ = designateType;
  setParameter(std::string("DesignateType"), std::to_string(designateType));
}

long DesignateWorkersRequest::getJobId() const {
  return jobId_;
}

void DesignateWorkersRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string DesignateWorkersRequest::getRegionId() const {
  return regionId_;
}

void DesignateWorkersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DesignateWorkersRequest::getWorkers() const {
  return workers_;
}

void DesignateWorkersRequest::setWorkers(const std::string &workers) {
  workers_ = workers;
  setParameter(std::string("Workers"), workers);
}

std::string DesignateWorkersRequest::getGroupId() const {
  return groupId_;
}

void DesignateWorkersRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DesignateWorkersRequest::getLabels() const {
  return labels_;
}

void DesignateWorkersRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setParameter(std::string("Labels"), labels);
}

std::string DesignateWorkersRequest::get_Namespace() const {
  return _namespace_;
}

void DesignateWorkersRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

