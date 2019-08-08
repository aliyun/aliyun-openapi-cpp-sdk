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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT DescribeAlarmsRequest : public RpcServiceRequest {

public:
  DescribeAlarmsRequest();
  ~DescribeAlarmsRequest();

  bool getEnableState() const;
  void setEnableState(bool enableState);
  std::string getNames() const;
  void setNames(const std::string &names);
  std::string getDisplayName() const;
  void setDisplayName(const std::string &displayName);
  std::string getGroupId() const;
  void setGroupId(const std::string &groupId);
  std::string get_Namespace() const;
  void set_Namespace(const std::string &_namespace);
  std::string getPageSize() const;
  void setPageSize(const std::string &pageSize);
  std::string getAlertState() const;
  void setAlertState(const std::string &alertState);
  std::string getNameKeyword() const;
  void setNameKeyword(const std::string &nameKeyword);
  std::string getGroupBy() const;
  void setGroupBy(const std::string &groupBy);
  std::string getPage() const;
  void setPage(const std::string &page);
  std::string getMetricName() const;
  void setMetricName(const std::string &metricName);

private:
  bool enableState_;
  std::string names_;
  std::string displayName_;
  std::string groupId_;
  std::string _namespace_;
  std::string pageSize_;
  std::string alertState_;
  std::string nameKeyword_;
  std::string groupBy_;
  std::string page_;
  std::string metricName_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSREQUEST_H_