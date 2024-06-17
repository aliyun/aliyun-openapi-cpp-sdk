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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_CREATECOMMANDREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_CREATECOMMANDREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT CreateCommandRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateCommandRequest();
	~CreateCommandRequest();
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
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getName() const;
	void setName(const std::string &name);
	bool getEnableParameter() const;
	void setEnableParameter(bool enableParameter);

private:
	std::string workingDir_;
	std::string description_;
	std::string type_;
	std::string commandContent_;
	long timeout_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	std::string name_;
	bool enableParameter_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_CREATECOMMANDREQUEST_H_
