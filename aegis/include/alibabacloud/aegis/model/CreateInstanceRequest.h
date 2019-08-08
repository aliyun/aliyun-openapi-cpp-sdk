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

#ifndef ALIBABACLOUD_AEGIS_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_CREATEINSTANCEREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT CreateInstanceRequest
    : public RpcServiceRequest {

public:
  CreateInstanceRequest();
  ~CreateInstanceRequest();

  int getDuration() const;
  void setDuration(int duration);
  bool getIsAutoRenew() const;
  void setIsAutoRenew(bool isAutoRenew);
  std::string getClientToken() const;
  void setClientToken(const std::string &clientToken);
  int getVmNumber() const;
  void setVmNumber(int vmNumber);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  int getVersionCode() const;
  void setVersionCode(int versionCode);
  std::string getPricingCycle() const;
  void setPricingCycle(const std::string &pricingCycle);
  int getAutoRenewDuration() const;
  void setAutoRenewDuration(int autoRenewDuration);

private:
  int duration_;
  bool isAutoRenew_;
  std::string clientToken_;
  int vmNumber_;
  long ownerId_;
  int versionCode_;
  std::string pricingCycle_;
  int autoRenewDuration_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_CREATEINSTANCEREQUEST_H_