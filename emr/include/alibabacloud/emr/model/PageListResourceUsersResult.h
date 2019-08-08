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

#ifndef ALIBABACLOUD_EMR_MODEL_PAGELISTRESOURCEUSERSRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_PAGELISTRESOURCEUSERSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT PageListResourceUsersResult
    : public ServiceResult {
public:
  struct Item {
    struct RoleDTO {
      std::string gmtCreate;
      std::string description;
      std::string gmtModified;
      std::string resourceType;
      long id;
      std::string name;
    };
    std::string status;
    std::string linuxSyncStatus;
    long gmtCreate;
    std::string userName;
    std::string sourceType;
    std::string kerberosStutus;
    std::vector<Item::RoleDTO> roleDTOList;
    std::string aliyunUserId;
    std::string knoxSyncStatus;
  };

  PageListResourceUsersResult();
  explicit PageListResourceUsersResult(const std::string &payload);
  ~PageListResourceUsersResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  bool getPaging() const;
  std::vector<Item> getItems() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  bool paging_;
  std::vector<Item> items_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_PAGELISTRESOURCEUSERSRESULT_H_