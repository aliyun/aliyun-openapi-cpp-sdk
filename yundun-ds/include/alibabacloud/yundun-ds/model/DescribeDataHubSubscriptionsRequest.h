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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATAHUBSUBSCRIPTIONSREQUEST_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATAHUBSUBSCRIPTIONSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Yundun_ds {
namespace Model {
class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeDataHubSubscriptionsRequest
    : public RpcServiceRequest {

public:
  DescribeDataHubSubscriptionsRequest();
  ~DescribeDataHubSubscriptionsRequest();

  long getTopicId() const;
  void setTopicId(long topicId);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  int getFeatureType() const;
  void setFeatureType(int featureType);
  int getPageSize() const;
  void setPageSize(int pageSize);
  long getDepartId() const;
  void setDepartId(long departId);
  int getCurrentPage() const;
  void setCurrentPage(int currentPage);
  std::string getLang() const;
  void setLang(const std::string &lang);
  long getProjectId() const;
  void setProjectId(long projectId);
  std::string getKey() const;
  void setKey(const std::string &key);

private:
  long topicId_;
  std::string sourceIp_;
  int featureType_;
  int pageSize_;
  long departId_;
  int currentPage_;
  std::string lang_;
  long projectId_;
  std::string key_;
};
} // namespace Model
} // namespace Yundun_ds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATAHUBSUBSCRIPTIONSREQUEST_H_