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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATEINSTANCERESULT_H_
#define ALIBABACLOUD_CCC_MODEL_CREATEINSTANCERESULT_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT CreateInstanceResult : public ServiceResult {
public:
  struct Instance {
    struct User {
      struct Detail {
        std::string loginName;
        std::string department;
        std::string email;
        std::string phone;
        std::string displayName;
      };
      std::string instanceId;
      std::string userId;
      std::string ramId;
      Detail detail;
    };
    struct PhoneNumber {
      std::string usage;
      bool testOnly;
      bool allowOutbound;
      std::string number;
      std::string instanceId;
      int remainingTime;
      int trunks;
      std::string phoneNumberId;
      std::string phoneNumberDescription;
    };
    std::string status;
    std::vector<PhoneNumber> phoneNumbers;
    std::string owner;
    long createdTime;
    std::vector<std::string> successLoginNames;
    std::string instanceId;
    std::string domainName;
    std::string consoleUrl;
    int storageMaxSize;
    std::vector<User> admin;
    std::vector<std::string> failLoginNames;
    std::vector<std::string> successPhoneNumbers;
    std::string instanceName;
    int maxOnlineAgents;
    std::string tenantId;
    std::string directoryId;
    std::string storageBucket;
    std::vector<std::string> failPhoneNumbers;
    std::string instanceDescription;
    int storageMaxDays;
  };

  CreateInstanceResult();
  explicit CreateInstanceResult(const std::string &payload);
  ~CreateInstanceResult();
  std::string getMessage() const;
  Instance getInstance() const;
  int getHttpStatusCode() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  Instance instance_;
  int httpStatusCode_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_CREATEINSTANCERESULT_H_