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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEPROJECTREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateProjectRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	CreateProjectRequest();
	~CreateProjectRequest();
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	bool getDisableDevelopment() const;
	void setDisableDevelopment(bool disableDevelopment);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getProjectIdentifier() const;
	void setProjectIdentifier(const std::string &projectIdentifier);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getProjectDescription() const;
	void setProjectDescription(const std::string &projectDescription);
	int getIsAllowDownload() const;
	void setIsAllowDownload(int isAllowDownload);
	std::string getResourceManagerResourceGroupId() const;
	void setResourceManagerResourceGroupId(const std::string &resourceManagerResourceGroupId);
	int getProjectMode() const;
	void setProjectMode(int projectMode);

private:
	std::string projectName_;
	bool disableDevelopment_;
	std::string clientToken_;
	std::string projectIdentifier_;
	std::vector<Tags> tags_;
	std::string projectDescription_;
	int isAllowDownload_;
	std::string resourceManagerResourceGroupId_;
	int projectMode_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEPROJECTREQUEST_H_
