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

#ifndef ALIBABACLOUD_CCC_MODEL_MODIFYNOTIFICATIONCONFIGREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_MODIFYNOTIFICATIONCONFIGREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ModifyNotificationConfigRequest
    : public RpcServiceRequest {
  struct Subscriptions {
    std::string displayName;
    std::string name;
    bool selected;
  };

public:
  ModifyNotificationConfigRequest();
  ~ModifyNotificationConfigRequest();

  std::vector<Subscriptions> getSubscriptions() const;
  void setSubscriptions(const std::vector<Subscriptions> &subscriptions);
  std::string getInstanceId() const;
  void setInstanceId(const std::string &instanceId);
  std::string getAccessPoint() const;
  void setAccessPoint(const std::string &accessPoint);
  std::string getTopic() const;
  void setTopic(const std::string &topic);
  std::string getProducerId() const;
  void setProducerId(const std::string &producerId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::vector<Subscriptions> subscriptions_;
  std::string instanceId_;
  std::string accessPoint_;
  std::string topic_;
  std::string producerId_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_MODIFYNOTIFICATIONCONFIGREQUEST_H_