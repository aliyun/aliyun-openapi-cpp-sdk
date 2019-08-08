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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMCTEMPLATELISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMCTEMPLATELISTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryMCTemplateListResult : public ServiceResult {
public:
  struct _Template {
    std::string ad;
    std::string qrcode;
    std::string terrorism;
    std::string abuse;
    std::string live;
    std::string spam;
    std::string name;
    std::string logo;
    std::string contraband;
    std::string state;
    std::string politics;
    std::string porn;
    std::string templateId;
  };

  QueryMCTemplateListResult();
  explicit QueryMCTemplateListResult(const std::string &payload);
  ~QueryMCTemplateListResult();
  std::vector<_Template> getTemplateList() const;
  std::vector<std::string> getNonExistTids() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<_Template> templateList_;
  std::vector<std::string> nonExistTids_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMCTEMPLATELISTRESULT_H_