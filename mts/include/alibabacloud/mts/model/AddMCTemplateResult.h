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

#ifndef ALIBABACLOUD_MTS_MODEL_ADDMCTEMPLATERESULT_H_
#define ALIBABACLOUD_MTS_MODEL_ADDMCTEMPLATERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT AddMCTemplateResult : public ServiceResult {
public:
  struct _Template {
    std::string contraband;
    std::string ad;
    std::string qrcode;
    std::string terrorism;
    std::string abuse;
    std::string live;
    std::string politics;
    std::string porn;
    std::string templateId;
    std::string spam;
    std::string name;
    std::string logo;
  };

  AddMCTemplateResult();
  explicit AddMCTemplateResult(const std::string &payload);
  ~AddMCTemplateResult();
  _Template get_Template() const;

protected:
  void parse(const std::string &payload);

private:
  _Template _template_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_ADDMCTEMPLATERESULT_H_