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

#ifndef ALIBABACLOUD_IOT_MODEL_PUBBROADCASTREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_PUBBROADCASTREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Iot {
namespace Model {
class ALIBABACLOUD_IOT_EXPORT PubBroadcastRequest : public RpcServiceRequest {

public:
  PubBroadcastRequest();
  ~PubBroadcastRequest();

  std::string getTopicFullName() const;
  void setTopicFullName(const std::string &topicFullName);
  std::string getMessageContent() const;
  void setMessageContent(const std::string &messageContent);
  std::string getIotInstanceId() const;
  void setIotInstanceId(const std::string &iotInstanceId);
  std::string getProductKey() const;
  void setProductKey(const std::string &productKey);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string topicFullName_;
  std::string messageContent_;
  std::string iotInstanceId_;
  std::string productKey_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Iot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IOT_MODEL_PUBBROADCASTREQUEST_H_