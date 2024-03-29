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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_TRANSFERREPOSITORYREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_TRANSFERREPOSITORYREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT TransferRepositoryRequest : public RoaServiceRequest {
public:
	TransferRepositoryRequest();
	~TransferRepositoryRequest();
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getRepositoryId() const;
	void setRepositoryId(const std::string &repositoryId);
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);

private:
	std::string organizationId_;
	std::string groupId_;
	std::string repositoryId_;
	std::string accessToken_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_TRANSFERREPOSITORYREQUEST_H_
