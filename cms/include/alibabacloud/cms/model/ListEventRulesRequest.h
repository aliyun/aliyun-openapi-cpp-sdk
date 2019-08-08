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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTEVENTRULESREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_LISTEVENTRULESREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT ListEventRulesRequest : public RpcServiceRequest {

public:
  ListEventRulesRequest();
  ~ListEventRulesRequest();

  std::string getGroupId() const;
  void setGroupId(const std::string &groupId);
  std::string getPageSize() const;
  void setPageSize(const std::string &pageSize);
  std::string getNamePrefix() const;
  void setNamePrefix(const std::string &namePrefix);
  std::string getPage() const;
  void setPage(const std::string &page);

private:
  std::string groupId_;
  std::string pageSize_;
  std::string namePrefix_;
  std::string page_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_LISTEVENTRULESREQUEST_H_