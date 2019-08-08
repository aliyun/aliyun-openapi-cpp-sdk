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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESECURESUGGESTIONRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESECURESUGGESTIONRESULT_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT DescribeSecureSuggestionResult
    : public ServiceResult {
public:
  struct Suggestion {
    struct DetailItem {
      std::string description;
      std::string subType;
      std::string title;
    };
    int points;
    std::string suggestType;
    std::vector<Suggestion::DetailItem> detail;
  };

  DescribeSecureSuggestionResult();
  explicit DescribeSecureSuggestionResult(const std::string &payload);
  ~DescribeSecureSuggestionResult();
  std::vector<Suggestion> getSuggestions() const;
  int getTotalCount() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Suggestion> suggestions_;
  int totalCount_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESECURESUGGESTIONRESULT_H_