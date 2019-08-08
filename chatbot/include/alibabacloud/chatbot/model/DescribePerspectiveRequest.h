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

#ifndef ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEPERSPECTIVEREQUEST_H_
#define ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEPERSPECTIVEREQUEST_H_

#include <alibabacloud/chatbot/ChatbotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Chatbot {
namespace Model {
class ALIBABACLOUD_CHATBOT_EXPORT DescribePerspectiveRequest
    : public RpcServiceRequest {

public:
  DescribePerspectiveRequest();
  ~DescribePerspectiveRequest();

  std::string getPerspectiveId() const;
  void setPerspectiveId(const std::string &perspectiveId);

private:
  std::string perspectiveId_;
};
} // namespace Model
} // namespace Chatbot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CHATBOT_MODEL_DESCRIBEPERSPECTIVEREQUEST_H_