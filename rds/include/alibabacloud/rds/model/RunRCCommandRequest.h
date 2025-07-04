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

#ifndef ALIBABACLOUD_RDS_MODEL_RUNRCCOMMANDREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_RUNRCCOMMANDREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT RunRCCommandRequest : public RpcServiceRequest {
public:
	struct ResourceTags {
		std::string value;
		std::string key;
	};
	struct Tags {
		std::string value;
		std::string key;
	};
	RunRCCommandRequest();
	~RunRCCommandRequest();
	std::vector<ResourceTags> getResourceTags() const;
	void setResourceTags(const std::vector<ResourceTags> &resourceTags);
	std::string getContainerName() const;
	void setContainerName(const std::string &containerName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getWorkingDir() const;
	void setWorkingDir(const std::string &workingDir);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getCommandContent() const;
	void setCommandContent(const std::string &commandContent);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getFrequency() const;
	void setFrequency(const std::string &frequency);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getContentEncoding() const;
	void setContentEncoding(const std::string &contentEncoding);
	std::string getRepeatMode() const;
	void setRepeatMode(const std::string &repeatMode);
	std::string getWindowsPasswordName() const;
	void setWindowsPasswordName(const std::string &windowsPasswordName);
	bool getKeepCommand() const;
	void setKeepCommand(bool keepCommand);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getTerminationMode() const;
	void setTerminationMode(const std::string &terminationMode);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getContainerId() const;
	void setContainerId(const std::string &containerId);
	std::map<std::string, std::string> getParameters() const;
	void setParameters(const std::map<std::string, std::string> &parameters);
	bool getEnableParameter() const;
	void setEnableParameter(bool enableParameter);
	std::string getUsername() const;
	void setUsername(const std::string &username);
	std::string getLauncher() const;
	void setLauncher(const std::string &launcher);

private:
	std::vector<ResourceTags> resourceTags_;
	std::string containerName_;
	std::string clientToken_;
	std::string workingDir_;
	std::string description_;
	std::string type_;
	std::string commandContent_;
	long timeout_;
	std::string frequency_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string contentEncoding_;
	std::string repeatMode_;
	std::string windowsPasswordName_;
	bool keepCommand_;
	std::vector<Tags> tags_;
	std::string terminationMode_;
	std::vector<std::string> instanceIds_;
	std::string name_;
	std::string containerId_;
	std::map<std::string, std::string> parameters_;
	bool enableParameter_;
	std::string username_;
	std::string launcher_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_RUNRCCOMMANDREQUEST_H_
