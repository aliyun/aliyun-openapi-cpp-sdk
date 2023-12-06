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

#include <alibabacloud/dms-enterprise/model/CreateProcCorrectOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateProcCorrectOrderRequest;

CreateProcCorrectOrderRequest::CreateProcCorrectOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateProcCorrectOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateProcCorrectOrderRequest::~CreateProcCorrectOrderRequest() {}

long CreateProcCorrectOrderRequest::getTid() const {
  return tid_;
}

void CreateProcCorrectOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

CreateProcCorrectOrderRequest::Param CreateProcCorrectOrderRequest::getParam() const {
  return param_;
}

void CreateProcCorrectOrderRequest::setParam(const CreateProcCorrectOrderRequest::Param &param) {
  param_ = param;
  setParameter(std::string("Param") + ".Classify", param.classify);
  setParameter(std::string("Param") + ".RollbackSQL", param.rollbackSQL);
  setParameter(std::string("Param") + ".RollbackSqlType", param.rollbackSqlType);
  for(int dep1 = 0; dep1 != param.dbItemList.size(); dep1++) {
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".DbId", std::to_string(param.dbItemList[dep1].dbId));
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".Logic", param.dbItemList[dep1].logic ? "true" : "false");
  }
  setParameter(std::string("Param") + ".ExecSQL", param.execSQL);
  setParameter(std::string("Param") + ".ExecMode", param.execMode);
  setParameter(std::string("Param") + ".RollbackAttachmentName", param.rollbackAttachmentName);
}

std::vector<CreateProcCorrectOrderRequest::long> CreateProcCorrectOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateProcCorrectOrderRequest::setRelatedUserList(const std::vector<CreateProcCorrectOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

std::string CreateProcCorrectOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateProcCorrectOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateProcCorrectOrderRequest::getComment() const {
  return comment_;
}

void CreateProcCorrectOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

