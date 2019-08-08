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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENATTACKANALYSISDATAREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENATTACKANALYSISDATAREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeScreenAttackAnalysisDataRequest
    : public RpcServiceRequest {

public:
  DescribeScreenAttackAnalysisDataRequest();
  ~DescribeScreenAttackAnalysisDataRequest();

  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getData() const;
  void setData(const std::string &data);
  std::string getBase64() const;
  void setBase64(const std::string &base64);
  int getPageSize() const;
  void setPageSize(int pageSize);
  long getEndTime() const;
  void setEndTime(long endTime);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  long getStartTime() const;
  void setStartTime(long startTime);
  std::string getLang() const;
  void setLang(const std::string &lang);
  std::string getType() const;
  void setType(const std::string &type);

private:
  std::string sourceIp_;
  std::string data_;
  std::string base64_;
  int pageSize_;
  long endTime_;
  int currentPage_;
  long startTime_;
  std::string lang_;
  std::string type_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENATTACKANALYSISDATAREQUEST_H_