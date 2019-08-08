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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEUPDATEPACKAGERESULTRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEUPDATEPACKAGERESULTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Green {
namespace Model {
class ALIBABACLOUD_GREEN_EXPORT DescribeUpdatePackageResultResult
    : public ServiceResult {
public:
  struct AppInfo {
    struct PackageInfo {
      std::string version;
    };
    struct DebugPackageInfo {
      std::string version;
    };
    std::string startDate;
    int type;
    DebugPackageInfo debugPackageInfo;
    std::string packageName;
    PackageInfo packageInfo;
    long id;
    std::string icon;
    std::string endDate;
    std::string name;
  };

  DescribeUpdatePackageResultResult();
  explicit DescribeUpdatePackageResultResult(const std::string &payload);
  ~DescribeUpdatePackageResultResult();
  AppInfo getAppInfo() const;

protected:
  void parse(const std::string &payload);

private:
  AppInfo appInfo_;
};
} // namespace Model
} // namespace Green
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEUPDATEPACKAGERESULTRESULT_H_