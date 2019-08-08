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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTMYGROUPSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_LISTMYGROUPSREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT ListMyGroupsRequest : public RpcServiceRequest {

public:
  ListMyGroupsRequest();
  ~ListMyGroupsRequest();

  bool getSelectContactGroups() const;
  void setSelectContactGroups(bool selectContactGroups);
  std::string getInstanceId() const;
  void setInstanceId(const std::string &instanceId);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getType() const;
  void setType(const std::string &type);
  std::string getKeyword() const;
  void setKeyword(const std::string &keyword);
  std::string getGroupName() const;
  void setGroupName(const std::string &groupName);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getBindUrls() const;
  void setBindUrls(const std::string &bindUrls);

private:
  bool selectContactGroups_;
  std::string instanceId_;
  int pageSize_;
  std::string type_;
  std::string keyword_;
  std::string groupName_;
  int pageNumber_;
  std::string bindUrls_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_LISTMYGROUPSREQUEST_H_