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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEUSERBIZTYPESRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEUSERBIZTYPESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Green {
namespace Model {
class ALIBABACLOUD_GREEN_EXPORT DescribeUserBizTypesResult
    : public ServiceResult {
public:
  struct Item {
    std::string sourceBizType;
    bool gray;
    std::string bizType;
    std::string source;
  };

  DescribeUserBizTypesResult();
  explicit DescribeUserBizTypesResult(const std::string &payload);
  ~DescribeUserBizTypesResult();
  std::vector<Item> getBizTypeList() const;
  std::vector<Item> getBizTypeListImport() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Item> bizTypeList_;
  std::vector<Item> bizTypeListImport_;
};
} // namespace Model
} // namespace Green
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEUSERBIZTYPESRESULT_H_