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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATECONNECTIONREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATECONNECTIONREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateConnectionRequest : public RpcServiceRequest {
public:
	CreateConnectionRequest();
	~CreateConnectionRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getSubType() const;
	void setSubType(const std::string &subType);
	std::string getName() const;
	void setName(const std::string &name);
	int getEnvType() const;
	void setEnvType(int envType);
	std::string getConnectionType() const;
	void setConnectionType(const std::string &connectionType);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	std::string description_;
	std::string content_;
	std::string subType_;
	std::string name_;
	int envType_;
	std::string connectionType_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATECONNECTIONREQUEST_H_
