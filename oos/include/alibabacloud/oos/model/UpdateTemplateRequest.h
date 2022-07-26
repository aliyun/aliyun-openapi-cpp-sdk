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

#ifndef ALIBABACLOUD_OOS_MODEL_UPDATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_UPDATETEMPLATEREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT UpdateTemplateRequest : public RpcServiceRequest {
public:
	UpdateTemplateRequest();
	~UpdateTemplateRequest();
	std::string getContent() const;
	void setContent(const std::string &content);
	std::map<std::string, std::string> getTags() const;
	void setTags(std::map<std::string, std::string> tags);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getVersionName() const;
	void setVersionName(const std::string &versionName);

private:
	std::string content_;
	std::map<std::string, std::string> tags_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string templateName_;
	std::string versionName_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_UPDATETEMPLATEREQUEST_H_
