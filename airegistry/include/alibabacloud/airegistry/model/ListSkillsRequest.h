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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_LISTSKILLSREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_LISTSKILLSREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT ListSkillsRequest : public RpcServiceRequest {
public:
	ListSkillsRequest();
	~ListSkillsRequest();
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getSearch() const;
	void setSearch(const std::string &search);
	std::string getScope() const;
	void setScope(const std::string &scope);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getSkillName() const;
	void setSkillName(const std::string &skillName);

private:
	std::string namespaceId_;
	std::string orderBy_;
	int pageNo_;
	std::string search_;
	std::string scope_;
	int pageSize_;
	std::string owner_;
	std::string skillName_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_LISTSKILLSREQUEST_H_
