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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKSPACEREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKSPACEREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT CreateWorkspaceRequest : public RoaServiceRequest {
public:
	CreateWorkspaceRequest();
	~CreateWorkspaceRequest();
	std::string getCodeUrl() const;
	void setCodeUrl(const std::string &codeUrl);
	bool getReuse() const;
	void setReuse(bool reuse);
	std::string getResourceIdentifier() const;
	void setResourceIdentifier(const std::string &resourceIdentifier);
	std::string getRequestFrom() const;
	void setRequestFrom(const std::string &requestFrom);
	std::string getWorkspaceTemplate() const;
	void setWorkspaceTemplate(const std::string &workspaceTemplate);
	std::string getFilePath() const;
	void setFilePath(const std::string &filePath);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getCodeVersion() const;
	void setCodeVersion(const std::string &codeVersion);

private:
	std::string codeUrl_;
	bool reuse_;
	std::string resourceIdentifier_;
	std::string requestFrom_;
	std::string workspaceTemplate_;
	std::string filePath_;
	std::string name_;
	std::string codeVersion_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKSPACEREQUEST_H_
