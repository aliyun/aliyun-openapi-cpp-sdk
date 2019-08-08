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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSWARNCREATEREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSWARNCREATEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ons/OnsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Ons {
namespace Model {
class ALIBABACLOUD_ONS_EXPORT OnsWarnCreateRequest : public RpcServiceRequest {

public:
  OnsWarnCreateRequest();
  ~OnsWarnCreateRequest();

  std::string getInstanceId() const;
  void setInstanceId(const std::string &instanceId);
  std::string getBlockTime() const;
  void setBlockTime(const std::string &blockTime);
  std::string getLevel() const;
  void setLevel(const std::string &level);
  std::string getGroupId() const;
  void setGroupId(const std::string &groupId);
  std::string getDelayTime() const;
  void setDelayTime(const std::string &delayTime);
  std::string getTopic() const;
  void setTopic(const std::string &topic);
  std::string getThreshold() const;
  void setThreshold(const std::string &threshold);
  std::string getAlertTime() const;
  void setAlertTime(const std::string &alertTime);
  std::string getContacts() const;
  void setContacts(const std::string &contacts);

private:
  std::string instanceId_;
  std::string blockTime_;
  std::string level_;
  std::string groupId_;
  std::string delayTime_;
  std::string topic_;
  std::string threshold_;
  std::string alertTime_;
  std::string contacts_;
};
} // namespace Model
} // namespace Ons
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ONS_MODEL_ONSWARNCREATEREQUEST_H_