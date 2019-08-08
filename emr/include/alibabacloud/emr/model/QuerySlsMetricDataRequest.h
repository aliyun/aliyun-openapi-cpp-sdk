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

#ifndef ALIBABACLOUD_EMR_MODEL_QUERYSLSMETRICDATAREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_QUERYSLSMETRICDATAREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT QuerySlsMetricDataRequest
    : public RpcServiceRequest {

public:
  QuerySlsMetricDataRequest();
  ~QuerySlsMetricDataRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  long getPeriod() const;
  void setPeriod(long period);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  long getStartTimeStamp() const;
  void setStartTimeStamp(long startTimeStamp);
  std::string getMetricName() const;
  void setMetricName(const std::string &metricName);
  std::string getHostRole() const;
  void setHostRole(const std::string &hostRole);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  long getEndTimeStamp() const;
  void setEndTimeStamp(long endTimeStamp);

private:
  long resourceOwnerId_;
  long period_;
  std::string regionId_;
  std::string clusterId_;
  long startTimeStamp_;
  std::string metricName_;
  std::string hostRole_;
  std::string accessKeyId_;
  long endTimeStamp_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_QUERYSLSMETRICDATAREQUEST_H_