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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUSPICIOUSEVENTSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUSPICIOUSEVENTSREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeSuspiciousEventsRequest
    : public RpcServiceRequest {

public:
  DescribeSuspiciousEventsRequest();
  ~DescribeSuspiciousEventsRequest();

  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getLevel() const;
  void setLevel(const std::string &level);
  int getPageSize() const;
  void setPageSize(int pageSize);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  std::string getDealed() const;
  void setDealed(const std::string &dealed);
  std::string getRemark() const;
  void setRemark(const std::string &remark);
  std::string getEventType() const;
  void setEventType(const std::string &eventType);
  std::string getUuid() const;
  void setUuid(const std::string &uuid);

private:
  std::string sourceIp_;
  std::string level_;
  int pageSize_;
  int currentPage_;
  std::string dealed_;
  std::string remark_;
  std::string eventType_;
  std::string uuid_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUSPICIOUSEVENTSREQUEST_H_