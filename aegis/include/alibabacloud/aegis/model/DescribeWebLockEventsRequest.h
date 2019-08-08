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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWEBLOCKEVENTSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWEBLOCKEVENTSREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeWebLockEventsRequest
    : public RpcServiceRequest {

public:
  DescribeWebLockEventsRequest();
  ~DescribeWebLockEventsRequest();

  std::string getStatusList() const;
  void setStatusList(const std::string &statusList);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getLevel() const;
  void setLevel(const std::string &level);
  std::string getGroupId() const;
  void setGroupId(const std::string &groupId);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getRemark() const;
  void setRemark(const std::string &remark);
  std::string getDealed() const;
  void setDealed(const std::string &dealed);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  std::string getTag() const;
  void setTag(const std::string &tag);
  std::string getLang() const;
  void setLang(const std::string &lang);
  std::string getEventName() const;
  void setEventName(const std::string &eventName);

private:
  std::string statusList_;
  std::string sourceIp_;
  std::string level_;
  std::string groupId_;
  int pageSize_;
  std::string remark_;
  std::string dealed_;
  int currentPage_;
  std::string tag_;
  std::string lang_;
  std::string eventName_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWEBLOCKEVENTSREQUEST_H_