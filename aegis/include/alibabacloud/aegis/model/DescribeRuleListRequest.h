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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeRuleListRequest
    : public RpcServiceRequest {

public:
  DescribeRuleListRequest();
  ~DescribeRuleListRequest();

  std::string getWarnLevel() const;
  void setWarnLevel(const std::string &warnLevel);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  long getGroupId() const;
  void setGroupId(long groupId);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getRemark() const;
  void setRemark(const std::string &remark);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  long getId() const;
  void setId(long id);
  std::string getLang() const;
  void setLang(const std::string &lang);
  std::string getExGroupId() const;
  void setExGroupId(const std::string &exGroupId);

private:
  std::string warnLevel_;
  std::string sourceIp_;
  long groupId_;
  int pageSize_;
  std::string remark_;
  int currentPage_;
  long id_;
  std::string lang_;
  std::string exGroupId_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTREQUEST_H_