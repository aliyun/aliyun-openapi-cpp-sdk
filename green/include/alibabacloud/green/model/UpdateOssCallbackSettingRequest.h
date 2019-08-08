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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEOSSCALLBACKSETTINGREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEOSSCALLBACKSETTINGREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Green {
namespace Model {
class ALIBABACLOUD_GREEN_EXPORT UpdateOssCallbackSettingRequest
    : public RpcServiceRequest {

public:
  UpdateOssCallbackSettingRequest();
  ~UpdateOssCallbackSettingRequest();

  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  bool getScanCallback() const;
  void setScanCallback(bool scanCallback);
  std::string getScanCallbackSuggestions() const;
  void setScanCallbackSuggestions(const std::string &scanCallbackSuggestions);
  std::string getCallbackSeed() const;
  void setCallbackSeed(const std::string &callbackSeed);
  bool getAuditCallback() const;
  void setAuditCallback(bool auditCallback);
  std::string getCallbackUrl() const;
  void setCallbackUrl(const std::string &callbackUrl);
  std::string getServiceModules() const;
  void setServiceModules(const std::string &serviceModules);

private:
  std::string sourceIp_;
  bool scanCallback_;
  std::string scanCallbackSuggestions_;
  std::string callbackSeed_;
  bool auditCallback_;
  std::string callbackUrl_;
  std::string serviceModules_;
};
} // namespace Model
} // namespace Green
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEOSSCALLBACKSETTINGREQUEST_H_