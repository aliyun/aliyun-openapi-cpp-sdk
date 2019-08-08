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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATEMONITORINGTEMPLATEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATEMONITORINGTEMPLATEREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateMonitoringTemplateRequest
    : public RpcServiceRequest {

public:
  CreateMonitoringTemplateRequest();
  ~CreateMonitoringTemplateRequest();

  std::string getEventRuleTemplatesJson() const;
  void setEventRuleTemplatesJson(const std::string &eventRuleTemplatesJson);
  std::string getName() const;
  void setName(const std::string &name);
  std::string get_Namespace() const;
  void set_Namespace(const std::string &_namespace);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  std::string getAlertTemplatesJson() const;
  void setAlertTemplatesJson(const std::string &alertTemplatesJson);

private:
  std::string eventRuleTemplatesJson_;
  std::string name_;
  std::string _namespace_;
  std::string description_;
  std::string alertTemplatesJson_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATEMONITORINGTEMPLATEREQUEST_H_