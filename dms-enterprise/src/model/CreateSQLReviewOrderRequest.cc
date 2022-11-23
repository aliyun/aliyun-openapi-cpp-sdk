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

#include <alibabacloud/dms-enterprise/model/CreateSQLReviewOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateSQLReviewOrderRequest;

CreateSQLReviewOrderRequest::CreateSQLReviewOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateSQLReviewOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateSQLReviewOrderRequest::~CreateSQLReviewOrderRequest() {}

long CreateSQLReviewOrderRequest::getTid() const {
  return tid_;
}

void CreateSQLReviewOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

CreateSQLReviewOrderRequest::Param CreateSQLReviewOrderRequest::getParam() const {
  return param_;
}

void CreateSQLReviewOrderRequest::setParam(const CreateSQLReviewOrderRequest::Param &param) {
  param_ = param;
  for(int dep1 = 0; dep1 != param.attachmentKeyList.size(); dep1++) {
    setParameter(std::string("Param") + ".AttachmentKeyList." + std::to_string(dep1 + 1), param.attachmentKeyList[dep1]);
  }
  setParameter(std::string("Param") + ".ProjectName", param.projectName);
  setParameter(std::string("Param") + ".DbId", std::to_string(param.dbId));
}

std::vector<CreateSQLReviewOrderRequest::long> CreateSQLReviewOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateSQLReviewOrderRequest::setRelatedUserList(const std::vector<CreateSQLReviewOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

std::string CreateSQLReviewOrderRequest::getComment() const {
  return comment_;
}

void CreateSQLReviewOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

