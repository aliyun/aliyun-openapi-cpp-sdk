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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTUSERSOFSKILLGROUPRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTUSERSOFSKILLGROUPRESULT_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListUsersOfSkillGroupResult
    : public ServiceResult {
public:
  struct Users {
    struct User {
      struct Detail {
        std::string loginName;
        std::string department;
        std::string email;
        std::string phone;
        std::string displayName;
      };
      struct Role {
        struct Privilege {
          std::string privilegeDescription;
          std::string privilegeId;
          std::string privilegeName;
        };
        std::string roleName;
        std::string instanceId;
        int userCount;
        std::vector<Role::Privilege> privileges;
        std::string roleDescription;
        std::string roleId;
      };
      struct SkillLevel {
        struct Skill {
          std::string skillGroupName;
          std::string instanceId;
          std::string skillGroupId;
          std::string skillGroupDescription;
        };
        Skill skill;
        std::string skillLevelId;
        int level;
      };
      std::vector<User::SkillLevel> skillLevels;
      std::string instanceId;
      std::string userId;
      std::string ramId;
      std::vector<User::Role> roles;
      Detail detail;
    };
    int totalCount;
    int pageSize;
    int pageNumber;
    std::vector<User> list;
  };

  ListUsersOfSkillGroupResult();
  explicit ListUsersOfSkillGroupResult(const std::string &payload);
  ~ListUsersOfSkillGroupResult();
  std::string getMessage() const;
  int getHttpStatusCode() const;
  Users getUsers() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  int httpStatusCode_;
  Users users_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTUSERSOFSKILLGROUPRESULT_H_