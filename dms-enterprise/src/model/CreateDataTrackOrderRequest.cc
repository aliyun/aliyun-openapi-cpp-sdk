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

#include <alibabacloud/dms-enterprise/model/CreateDataTrackOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDataTrackOrderRequest;

CreateDataTrackOrderRequest::CreateDataTrackOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDataTrackOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataTrackOrderRequest::~CreateDataTrackOrderRequest() {}

long CreateDataTrackOrderRequest::getTid() const {
  return tid_;
}

void CreateDataTrackOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

CreateDataTrackOrderRequest::Param CreateDataTrackOrderRequest::getParam() const {
  return param_;
}

void CreateDataTrackOrderRequest::setParam(const CreateDataTrackOrderRequest::Param &param) {
  param_ = param;
  setParameter(std::string("Param") + ".JobEndTime", param.jobEndTime);
  for(int dep1 = 0; dep1 != param.trackTypes.size(); dep1++) {
    setParameter(std::string("Param") + ".TrackTypes." + std::to_string(dep1 + 1), param.trackTypes[dep1]);
  }
  for(int dep1 = 0; dep1 != param.tableNames.size(); dep1++) {
    setParameter(std::string("Param") + ".TableNames." + std::to_string(dep1 + 1), param.tableNames[dep1]);
  }
  setParameter(std::string("Param") + ".DbId", param.dbId);
  setParameter(std::string("Param") + ".JobStartTime", param.jobStartTime);
}

std::vector<CreateDataTrackOrderRequest::std::string> CreateDataTrackOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateDataTrackOrderRequest::setRelatedUserList(const std::vector<CreateDataTrackOrderRequest::std::string> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), relatedUserList[dep1]);
  }
}

std::string CreateDataTrackOrderRequest::getComment() const {
  return comment_;
}

void CreateDataTrackOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

