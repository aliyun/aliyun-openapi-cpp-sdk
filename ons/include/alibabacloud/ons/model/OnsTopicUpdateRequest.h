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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSTOPICUPDATEREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSTOPICUPDATEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ons/OnsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Ons {
namespace Model {
class ALIBABACLOUD_ONS_EXPORT OnsTopicUpdateRequest : public RpcServiceRequest {

public:
  OnsTopicUpdateRequest();
  ~OnsTopicUpdateRequest();

  std::string getInstanceId() const;
  void setInstanceId(const std::string &instanceId);
  int getPerm() const;
  void setPerm(int perm);
  std::string getTopic() const;
  void setTopic(const std::string &topic);

private:
  std::string instanceId_;
  int perm_;
  std::string topic_;
};
} // namespace Model
} // namespace Ons
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ONS_MODEL_ONSTOPICUPDATEREQUEST_H_