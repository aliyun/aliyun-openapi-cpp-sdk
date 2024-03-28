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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTHOSTGROUPSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTHOSTGROUPSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListHostGroupsRequest : public RoaServiceRequest {
public:
	ListHostGroupsRequest();
	~ListHostGroupsRequest();
	std::string getPageSort() const;
	void setPageSort(const std::string &pageSort);
	std::string getCreatorAccountIds() const;
	void setCreatorAccountIds(const std::string &creatorAccountIds);
	long getCreateStartTime() const;
	void setCreateStartTime(long createStartTime);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getPageOrder() const;
	void setPageOrder(const std::string &pageOrder);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getIds() const;
	void setIds(const std::string &ids);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	long getCreateEndTime() const;
	void setCreateEndTime(long createEndTime);

private:
	std::string pageSort_;
	std::string creatorAccountIds_;
	long createStartTime_;
	std::string organizationId_;
	std::string pageOrder_;
	std::string nextToken_;
	std::string name_;
	std::string ids_;
	long maxResults_;
	long createEndTime_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTHOSTGROUPSREQUEST_H_
