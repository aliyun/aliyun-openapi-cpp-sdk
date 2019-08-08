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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETCLOUDMETRICLOGSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_GETCLOUDMETRICLOGSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT GetCloudMetricLogsRequest
    : public RpcServiceRequest {

public:
  GetCloudMetricLogsRequest();
  ~GetCloudMetricLogsRequest();

  std::string getAggregationType() const;
  void setAggregationType(const std::string &aggregationType);
  std::string getFilter() const;
  void setFilter(const std::string &filter);
  std::string getMetricCategories() const;
  void setMetricCategories(const std::string &metricCategories);
  std::string getMetricScope() const;
  void setMetricScope(const std::string &metricScope);
  int getFrom() const;
  void setFrom(int from);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  int getTo() const;
  void setTo(int to);
  int getAggregationInterval() const;
  void setAggregationInterval(int aggregationInterval);
  bool getReverse() const;
  void setReverse(bool reverse);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string aggregationType_;
  std::string filter_;
  std::string metricCategories_;
  std::string metricScope_;
  int from_;
  std::string clusterId_;
  int to_;
  int aggregationInterval_;
  bool reverse_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_GETCLOUDMETRICLOGSREQUEST_H_