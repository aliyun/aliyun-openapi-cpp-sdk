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

#include <alibabacloud/dms-enterprise/model/AddAuthorityTemplateItemsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::AddAuthorityTemplateItemsRequest;

AddAuthorityTemplateItemsRequest::AddAuthorityTemplateItemsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "AddAuthorityTemplateItems") {
  setMethod(HttpRequest::Method::Post);
}

AddAuthorityTemplateItemsRequest::~AddAuthorityTemplateItemsRequest() {}

long AddAuthorityTemplateItemsRequest::getTid() const {
  return tid_;
}

void AddAuthorityTemplateItemsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long AddAuthorityTemplateItemsRequest::getTemplateId() const {
  return templateId_;
}

void AddAuthorityTemplateItemsRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::vector<AddAuthorityTemplateItemsRequest::Items> AddAuthorityTemplateItemsRequest::getItems() const {
  return items_;
}

void AddAuthorityTemplateItemsRequest::setItems(const std::vector<AddAuthorityTemplateItemsRequest::Items> &items) {
  items_ = items;
  for(int dep1 = 0; dep1 != items.size(); dep1++) {
    setParameter(std::string("Items") + "." + std::to_string(dep1 + 1) + ".InstanceId", std::to_string(items[dep1].instanceId));
    setParameter(std::string("Items") + "." + std::to_string(dep1 + 1) + ".DbId", std::to_string(items[dep1].dbId));
    for(int dep2 = 0; dep2 != items[dep1].permissionTypes.size(); dep2++) {
      setParameter(std::string("Items") + "." + std::to_string(dep1 + 1) + ".PermissionTypes." + std::to_string(dep2 + 1), items[dep1].permissionTypes[dep2]);
    }
    setParameter(std::string("Items") + "." + std::to_string(dep1 + 1) + ".TableName", items[dep1].tableName);
    setParameter(std::string("Items") + "." + std::to_string(dep1 + 1) + ".ResourceType", items[dep1].resourceType);
  }
}

