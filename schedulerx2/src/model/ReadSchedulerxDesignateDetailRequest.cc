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

#include <alibabacloud/schedulerx2/model/ReadSchedulerxDesignateDetailRequest.h>

using AlibabaCloud::Schedulerx2::Model::ReadSchedulerxDesignateDetailRequest;

ReadSchedulerxDesignateDetailRequest::ReadSchedulerxDesignateDetailRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "ReadSchedulerxDesignateDetail") {
  setMethod(HttpRequest::Method::Post);
}

ReadSchedulerxDesignateDetailRequest::~ReadSchedulerxDesignateDetailRequest() {}

std::string ReadSchedulerxDesignateDetailRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void ReadSchedulerxDesignateDetailRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string ReadSchedulerxDesignateDetailRequest::getGroupId() const {
  return groupId_;
}

void ReadSchedulerxDesignateDetailRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

int ReadSchedulerxDesignateDetailRequest::getDesignateType() const {
  return designateType_;
}

void ReadSchedulerxDesignateDetailRequest::setDesignateType(int designateType) {
  designateType_ = designateType;
  setParameter(std::string("DesignateType"), std::to_string(designateType));
}

long ReadSchedulerxDesignateDetailRequest::getJobId() const {
  return jobId_;
}

void ReadSchedulerxDesignateDetailRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string ReadSchedulerxDesignateDetailRequest::getRegionId() const {
  return regionId_;
}

void ReadSchedulerxDesignateDetailRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ReadSchedulerxDesignateDetailRequest::get_Namespace() const {
  return _namespace_;
}

void ReadSchedulerxDesignateDetailRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

