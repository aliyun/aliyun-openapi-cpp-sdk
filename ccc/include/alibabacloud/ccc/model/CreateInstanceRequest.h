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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATEINSTANCEREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT CreateInstanceRequest : public RpcServiceRequest {

public:
  CreateInstanceRequest();
  ~CreateInstanceRequest();

  std::vector<std::string> getPhoneNumbers() const;
  void setPhoneNumbers(const std::vector<std::string> &phoneNumbers);
  std::vector<std::string> getUserObject() const;
  void setUserObject(const std::vector<std::string> &userObject);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getDomainName() const;
  void setDomainName(const std::string &domainName);
  std::string getPhoneNumber() const;
  void setPhoneNumber(const std::string &phoneNumber);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  int getStorageMaxDays() const;
  void setStorageMaxDays(int storageMaxDays);
  int getStorageMaxSize() const;
  void setStorageMaxSize(int storageMaxSize);
  std::string getDirectoryId() const;
  void setDirectoryId(const std::string &directoryId);
  std::vector<std::string> getAdminRamId() const;
  void setAdminRamId(const std::vector<std::string> &adminRamId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::vector<std::string> phoneNumbers_;
  std::vector<std::string> userObject_;
  std::string name_;
  std::string domainName_;
  std::string phoneNumber_;
  std::string description_;
  int storageMaxDays_;
  int storageMaxSize_;
  std::string directoryId_;
  std::vector<std::string> adminRamId_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_CREATEINSTANCEREQUEST_H_