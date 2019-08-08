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

#ifndef ALIBABACLOUD_PUSH_MODEL_QUERYPUSHSTATBYAPPREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_QUERYPUSHSTATBYAPPREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/push/PushExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Push {
namespace Model {
class ALIBABACLOUD_PUSH_EXPORT QueryPushStatByAppRequest
    : public RpcServiceRequest {

public:
  QueryPushStatByAppRequest();
  ~QueryPushStatByAppRequest();

  std::string getGranularity() const;
  void setGranularity(const std::string &granularity);
  std::string getEndTime() const;
  void setEndTime(const std::string &endTime);
  long getAppKey() const;
  void setAppKey(long appKey);
  std::string getStartTime() const;
  void setStartTime(const std::string &startTime);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string granularity_;
  std::string endTime_;
  long appKey_;
  std::string startTime_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Push
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PUSH_MODEL_QUERYPUSHSTATBYAPPREQUEST_H_