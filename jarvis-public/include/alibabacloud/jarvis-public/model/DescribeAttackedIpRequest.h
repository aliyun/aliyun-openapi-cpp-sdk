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

#ifndef ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEATTACKEDIPREQUEST_H_
#define ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEATTACKEDIPREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/jarvis-public/Jarvis_publicExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Jarvis_public {
namespace Model {
class ALIBABACLOUD_JARVIS_PUBLIC_EXPORT DescribeAttackedIpRequest
    : public RpcServiceRequest {

public:
  DescribeAttackedIpRequest();
  ~DescribeAttackedIpRequest();

  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getServerIpList() const;
  void setServerIpList(const std::string &serverIpList);
  int getPageSize() const;
  void setPageSize(int pageSize);
  int getEndTime() const;
  void setEndTime(int endTime);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  int getStartTime() const;
  void setStartTime(int startTime);
  std::string getLang() const;
  void setLang(const std::string &lang);
  std::string getRegion() const;
  void setRegion(const std::string &region);
  std::string getProductType() const;
  void setProductType(const std::string &productType);

private:
  std::string sourceIp_;
  std::string serverIpList_;
  int pageSize_;
  int endTime_;
  int currentPage_;
  int startTime_;
  std::string lang_;
  std::string region_;
  std::string productType_;
};
} // namespace Model
} // namespace Jarvis_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEATTACKEDIPREQUEST_H_