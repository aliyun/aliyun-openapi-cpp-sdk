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

#include <alibabacloud/schedulerx3/model/OperateDesignateExecutorsRequest.h>

using AlibabaCloud::SchedulerX3::Model::OperateDesignateExecutorsRequest;

OperateDesignateExecutorsRequest::OperateDesignateExecutorsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "OperateDesignateExecutors") {
  setMethod(HttpRequest::Method::Post);
}

OperateDesignateExecutorsRequest::~OperateDesignateExecutorsRequest() {}

std::string OperateDesignateExecutorsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OperateDesignateExecutorsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

bool OperateDesignateExecutorsRequest::getTransferable() const {
  return transferable_;
}

void OperateDesignateExecutorsRequest::setTransferable(bool transferable) {
  transferable_ = transferable;
  setBodyParameter(std::string("Transferable"), transferable ? "true" : "false");
}

int OperateDesignateExecutorsRequest::getDesignateType() const {
  return designateType_;
}

void OperateDesignateExecutorsRequest::setDesignateType(int designateType) {
  designateType_ = designateType;
  setBodyParameter(std::string("DesignateType"), std::to_string(designateType));
}

long OperateDesignateExecutorsRequest::getJobId() const {
  return jobId_;
}

void OperateDesignateExecutorsRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

std::string OperateDesignateExecutorsRequest::getAppName() const {
  return appName_;
}

void OperateDesignateExecutorsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::vector<OperateDesignateExecutorsRequest::std::string> OperateDesignateExecutorsRequest::getAddressList() const {
  return addressList_;
}

void OperateDesignateExecutorsRequest::setAddressList(const std::vector<OperateDesignateExecutorsRequest::std::string> &addressList) {
  addressList_ = addressList;
  for(int dep1 = 0; dep1 != addressList.size(); dep1++) {
    setBodyParameter(std::string("AddressList") + "." + std::to_string(dep1 + 1), addressList[dep1]);
  }
}

std::string OperateDesignateExecutorsRequest::getClusterId() const {
  return clusterId_;
}

void OperateDesignateExecutorsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

