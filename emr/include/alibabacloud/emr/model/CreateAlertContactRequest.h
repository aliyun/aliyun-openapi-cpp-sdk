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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEALERTCONTACTREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEALERTCONTACTREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT CreateAlertContactRequest
    : public RpcServiceRequest {

public:
  CreateAlertContactRequest();
  ~CreateAlertContactRequest();

  std::string getEmailVerificationCode() const;
  void setEmailVerificationCode(const std::string &emailVerificationCode);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getPhoneNumberVerificationCode() const;
  void setPhoneNumberVerificationCode(
      const std::string &phoneNumberVerificationCode);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getPhoneNumber() const;
  void setPhoneNumber(const std::string &phoneNumber);
  std::string getEmail() const;
  void setEmail(const std::string &email);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string emailVerificationCode_;
  long resourceOwnerId_;
  std::string regionId_;
  std::string phoneNumberVerificationCode_;
  std::string name_;
  std::string phoneNumber_;
  std::string email_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEALERTCONTACTREQUEST_H_