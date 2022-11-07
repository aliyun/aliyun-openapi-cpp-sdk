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

#ifndef ALIBABACLOUD_OOS_MODEL_STARTEXECUTIONREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_STARTEXECUTIONREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT StartExecutionRequest : public RpcServiceRequest {
public:
	StartExecutionRequest();
	~StartExecutionRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTemplateURL() const;
	void setTemplateURL(const std::string &templateURL);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getTemplateVersion() const;
	void setTemplateVersion(const std::string &templateVersion);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getLoopMode() const;
	void setLoopMode(const std::string &loopMode);
	std::string getSafetyCheck() const;
	void setSafetyCheck(const std::string &safetyCheck);
	std::map<std::string, std::string> getTags() const;
	void setTags(std::map<std::string, std::string> tags);
	std::string getTemplateContent() const;
	void setTemplateContent(const std::string &templateContent);
	std::string getParentExecutionId() const;
	void setParentExecutionId(const std::string &parentExecutionId);
	std::string getParameters() const;
	void setParameters(const std::string &parameters);

private:
	std::string clientToken_;
	std::string description_;
	std::string templateURL_;
	std::string mode_;
	std::string resourceGroupId_;
	std::string templateVersion_;
	std::string regionId_;
	std::string templateName_;
	std::string loopMode_;
	std::string safetyCheck_;
	std::map<std::string, std::string> tags_;
	std::string templateContent_;
	std::string parentExecutionId_;
	std::string parameters_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_STARTEXECUTIONREQUEST_H_
