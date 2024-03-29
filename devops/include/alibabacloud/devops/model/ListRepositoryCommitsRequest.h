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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYCOMMITSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYCOMMITSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListRepositoryCommitsRequest : public RoaServiceRequest {
public:
	ListRepositoryCommitsRequest();
	~ListRepositoryCommitsRequest();
	bool getShowCommentsCount() const;
	void setShowCommentsCount(bool showCommentsCount);
	std::string getStart() const;
	void setStart(const std::string &start);
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);
	bool getShowSignature() const;
	void setShowSignature(bool showSignature);
	std::string getRefName() const;
	void setRefName(const std::string &refName);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getPath() const;
	void setPath(const std::string &path);
	std::string getSearch() const;
	void setSearch(const std::string &search);
	long getRepositoryId() const;
	void setRepositoryId(long repositoryId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getEnd() const;
	void setEnd(const std::string &end);
	long getPage() const;
	void setPage(long page);

private:
	bool showCommentsCount_;
	std::string start_;
	std::string accessToken_;
	bool showSignature_;
	std::string refName_;
	std::string organizationId_;
	std::string path_;
	std::string search_;
	long repositoryId_;
	long pageSize_;
	std::string end_;
	long page_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTREPOSITORYCOMMITSREQUEST_H_
