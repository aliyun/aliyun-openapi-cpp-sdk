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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeUserResult : public ServiceResult {
public:
  struct RoleDTO {
    std::string gmtCreate;
    std::string description;
    std::string gmtModified;
    std::string resourceType;
    long id;
    std::string name;
  };
  struct GroupDTO {
    struct RoleDTO2 {
      std::string gmtCreate;
      std::string description;
      std::string gmtModified;
      std::string resourceType;
      long id;
      std::string name;
    };
    std::string type;
    std::string gmtCreate;
    long id;
    std::vector<GroupDTO::RoleDTO2> roleDTOList1;
    std::string name;
  };
  struct AccountDTO {
    std::string authType;
    std::string accountType;
    std::string aliyunUserId;
  };

  DescribeUserResult();
  explicit DescribeUserResult(const std::string &payload);
  ~DescribeUserResult();
  std::string getStatus() const;
  std::string getIsSuperAdmin() const;
  std::string getGmtCreate() const;
  std::string getUserName() const;
  std::string getDescription() const;
  std::vector<GroupDTO> getGroupDTOList() const;
  std::vector<AccountDTO> getAccountDTOList() const;
  bool getPaging() const;
  std::string getGmtModified() const;
  std::vector<RoleDTO> getRoleDTOList() const;
  std::string getUserType() const;
  std::string getAliyunUserId() const;

protected:
  void parse(const std::string &payload);

private:
  std::string status_;
  std::string isSuperAdmin_;
  std::string gmtCreate_;
  std::string userName_;
  std::string description_;
  std::vector<GroupDTO> groupDTOList_;
  std::vector<AccountDTO> accountDTOList_;
  bool paging_;
  std::string gmtModified_;
  std::vector<RoleDTO> roleDTOList_;
  std::string userType_;
  std::string aliyunUserId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERRESULT_H_