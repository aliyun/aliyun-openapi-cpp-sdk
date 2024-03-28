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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListWorkitemsRequest : public RoaServiceRequest {
public:
	ListWorkitemsRequest();
	~ListWorkitemsRequest();
	std::string getExtraConditions() const;
	void setExtraConditions(const std::string &extraConditions);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getGroupCondition() const;
	void setGroupCondition(const std::string &groupCondition);
	std::string getSpaceType() const;
	void setSpaceType(const std::string &spaceType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getSearchType() const;
	void setSearchType(const std::string &searchType);
	std::string getMaxResults() const;
	void setMaxResults(const std::string &maxResults);
	std::string getSpaceIdentifier() const;
	void setSpaceIdentifier(const std::string &spaceIdentifier);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getConditions() const;
	void setConditions(const std::string &conditions);

private:
	std::string extraConditions_;
	std::string orderBy_;
	std::string organizationId_;
	std::string groupCondition_;
	std::string spaceType_;
	std::string nextToken_;
	std::string searchType_;
	std::string maxResults_;
	std::string spaceIdentifier_;
	std::string category_;
	std::string conditions_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTWORKITEMSREQUEST_H_
