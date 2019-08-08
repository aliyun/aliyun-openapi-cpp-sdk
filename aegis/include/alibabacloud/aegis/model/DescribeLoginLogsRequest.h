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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGINLOGSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGINLOGSREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeLoginLogsRequest
    : public RpcServiceRequest {

public:
  DescribeLoginLogsRequest();
  ~DescribeLoginLogsRequest();

  std::string getTypes() const;
  void setTypes(const std::string &types);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getStatuses() const;
  void setStatuses(const std::string &statuses);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  std::string getRemark() const;
  void setRemark(const std::string &remark);
  std::string getTag() const;
  void setTag(const std::string &tag);

private:
  std::string types_;
  std::string sourceIp_;
  int pageSize_;
  std::string statuses_;
  int currentPage_;
  std::string remark_;
  std::string tag_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGINLOGSREQUEST_H_