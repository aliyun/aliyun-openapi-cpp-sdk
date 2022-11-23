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

#include <alibabacloud/dms-enterprise/model/CreateDataImportOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDataImportOrderRequest;

CreateDataImportOrderRequest::CreateDataImportOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDataImportOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataImportOrderRequest::~CreateDataImportOrderRequest() {}

long CreateDataImportOrderRequest::getTid() const {
  return tid_;
}

void CreateDataImportOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

CreateDataImportOrderRequest::Param CreateDataImportOrderRequest::getParam() const {
  return param_;
}

void CreateDataImportOrderRequest::setParam(const CreateDataImportOrderRequest::Param &param) {
  param_ = param;
  setParameter(std::string("Param") + ".FileEncoding", param.fileEncoding);
  setParameter(std::string("Param") + ".Classify", param.classify);
  setParameter(std::string("Param") + ".FileType", param.fileType);
  setParameter(std::string("Param") + ".CsvFirstRowIsColumnDef", param.csvFirstRowIsColumnDef ? "true" : "false");
  setParameter(std::string("Param") + ".RollbackAttachmentName", param.rollbackAttachmentName);
  setParameter(std::string("Param") + ".AttachmentName", param.attachmentName);
  setParameter(std::string("Param") + ".ImportMode", param.importMode);
  setParameter(std::string("Param") + ".RollbackSQL", param.rollbackSQL);
  setParameter(std::string("Param") + ".RollbackSqlType", param.rollbackSqlType);
  for(int dep1 = 0; dep1 != param.dbItemList.size(); dep1++) {
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".DbId", std::to_string(param.dbItemList[dep1].dbId));
    setParameter(std::string("Param") + ".DbItemList." + std::to_string(dep1 + 1) + ".Logic", param.dbItemList[dep1].logic ? "true" : "false");
  }
  setParameter(std::string("Param") + ".InsertType", param.insertType);
  setParameter(std::string("Param") + ".TableName", param.tableName);
  setParameter(std::string("Param") + ".IgnoreError", param.ignoreError ? "true" : "false");
}

std::vector<CreateDataImportOrderRequest::long> CreateDataImportOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateDataImportOrderRequest::setRelatedUserList(const std::vector<CreateDataImportOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

std::string CreateDataImportOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateDataImportOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateDataImportOrderRequest::getComment() const {
  return comment_;
}

void CreateDataImportOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

