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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATEMERGEREQUESTPERSONNELREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATEMERGEREQUESTPERSONNELREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT UpdateMergeRequestPersonnelRequest : public RoaServiceRequest {
public:
	struct Body {
		std::string string;
		std::vector<std::string> newUserIdList;
	};
	UpdateMergeRequestPersonnelRequest();
	~UpdateMergeRequestPersonnelRequest();
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	long getRepositoryId() const;
	void setRepositoryId(long repositoryId);
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);
	body getBody() const;
	void setBody(const body &body);
	long getLocalId() const;
	void setLocalId(long localId);
	std::string getPersonType() const;
	void setPersonType(const std::string &personType);

private:
	std::string organizationId_;
	long repositoryId_;
	std::string accessToken_;
	body body_;
	long localId_;
	std::string personType_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATEMERGEREQUESTPERSONNELREQUEST_H_
