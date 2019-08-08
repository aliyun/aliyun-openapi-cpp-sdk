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

#ifndef ALIBABACLOUD_AEGIS_MODEL_QUERYLOGINEVENTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_QUERYLOGINEVENTREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT QueryLoginEventRequest
    : public RpcServiceRequest {

public:
  QueryLoginEventRequest();
  ~QueryLoginEventRequest();

  std::string getEndTime() const;
  void setEndTime(const std::string &endTime);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  std::string getStartTime() const;
  void setStartTime(const std::string &startTime);
  std::string getUuid() const;
  void setUuid(const std::string &uuid);
  int getStatus() const;
  void setStatus(int status);

private:
  std::string endTime_;
  int currentPage_;
  std::string startTime_;
  std::string uuid_;
  int status_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_QUERYLOGINEVENTREQUEST_H_