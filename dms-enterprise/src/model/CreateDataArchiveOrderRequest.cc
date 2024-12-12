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

#include <alibabacloud/dms-enterprise/model/CreateDataArchiveOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDataArchiveOrderRequest;

CreateDataArchiveOrderRequest::CreateDataArchiveOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDataArchiveOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateDataArchiveOrderRequest::~CreateDataArchiveOrderRequest() {}

long CreateDataArchiveOrderRequest::getTid() const {
  return tid_;
}

void CreateDataArchiveOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long CreateDataArchiveOrderRequest::getParentId() const {
  return parentId_;
}

void CreateDataArchiveOrderRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), std::to_string(parentId));
}

std::string CreateDataArchiveOrderRequest::getPluginType() const {
  return pluginType_;
}

void CreateDataArchiveOrderRequest::setPluginType(const std::string &pluginType) {
  pluginType_ = pluginType;
  setParameter(std::string("PluginType"), pluginType);
}

CreateDataArchiveOrderRequest::Param CreateDataArchiveOrderRequest::getParam() const {
  return param_;
}

void CreateDataArchiveOrderRequest::setParam(const CreateDataArchiveOrderRequest::Param &param) {
  param_ = param;
  for(int dep1 = 0; dep1 != param.variables.size(); dep1++) {
    setParameter(std::string("Param") + ".Variables." + std::to_string(dep1 + 1) + ".Name", param.variables[dep1].name);
    setParameter(std::string("Param") + ".Variables." + std::to_string(dep1 + 1) + ".Pattern", param.variables[dep1].pattern);
  }
  setParameter(std::string("Param") + ".SourceInstanceName", param.sourceInstanceName);
  setParameter(std::string("Param") + ".CronStr", param.cronStr);
  for(int dep1 = 0; dep1 != param.tableMapping.size(); dep1++) {
    setParameter(std::string("Param") + ".TableMapping." + std::to_string(dep1 + 1), param.tableMapping[dep1]);
  }
  for(int dep1 = 0; dep1 != param.orderAfter.size(); dep1++) {
    setParameter(std::string("Param") + ".OrderAfter." + std::to_string(dep1 + 1), param.orderAfter[dep1]);
  }
  setParameter(std::string("Param") + ".TargetInstanceHost", param.targetInstanceHost);
  for(int dep1 = 0; dep1 != param.tableIncludes.size(); dep1++) {
    setParameter(std::string("Param") + ".TableIncludes." + std::to_string(dep1 + 1) + ".TableWhere", param.tableIncludes[dep1].tableWhere);
    setParameter(std::string("Param") + ".TableIncludes." + std::to_string(dep1 + 1) + ".TableName", param.tableIncludes[dep1].tableName);
  }
  setParameter(std::string("Param") + ".SourceCatalogName", param.sourceCatalogName);
  setParameter(std::string("Param") + ".RunMethod", param.runMethod);
  setParameter(std::string("Param") + ".Logic", param.logic ? "true" : "false");
  setParameter(std::string("Param") + ".SourceSchemaName", param.sourceSchemaName);
  setParameter(std::string("Param") + ".ArchiveMethod", param.archiveMethod);
  setParameter(std::string("Param") + ".DatabaseId", param.databaseId);
}

std::vector<CreateDataArchiveOrderRequest::std::string> CreateDataArchiveOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateDataArchiveOrderRequest::setRelatedUserList(const std::vector<CreateDataArchiveOrderRequest::std::string> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), relatedUserList[dep1]);
  }
}

std::string CreateDataArchiveOrderRequest::getComment() const {
  return comment_;
}

void CreateDataArchiveOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

