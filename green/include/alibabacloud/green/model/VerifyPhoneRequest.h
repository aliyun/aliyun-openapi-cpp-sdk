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

#ifndef ALIBABACLOUD_GREEN_MODEL_VERIFYPHONEREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_VERIFYPHONEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Green {
namespace Model {
class ALIBABACLOUD_GREEN_EXPORT VerifyPhoneRequest : public RpcServiceRequest {

public:
  VerifyPhoneRequest();
  ~VerifyPhoneRequest();

  std::string getVerifyCode() const;
  void setVerifyCode(const std::string &verifyCode);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getPhone() const;
  void setPhone(const std::string &phone);
  std::string getLang() const;
  void setLang(const std::string &lang);

private:
  std::string verifyCode_;
  std::string sourceIp_;
  std::string phone_;
  std::string lang_;
};
} // namespace Model
} // namespace Green
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GREEN_MODEL_VERIFYPHONEREQUEST_H_