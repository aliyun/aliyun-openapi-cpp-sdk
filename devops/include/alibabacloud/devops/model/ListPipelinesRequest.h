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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINESREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINESREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListPipelinesRequest : public RoaServiceRequest {
public:
	ListPipelinesRequest();
	~ListPipelinesRequest();
	std::string getPipelineName() const;
	void setPipelineName(const std::string &pipelineName);
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getCreatorAccountIds() const;
	void setCreatorAccountIds(const std::string &creatorAccountIds);
	long getExecuteEndTime() const;
	void setExecuteEndTime(long executeEndTime);
	long getCreateStartTime() const;
	void setCreateStartTime(long createStartTime);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getExecuteAccountIds() const;
	void setExecuteAccountIds(const std::string &executeAccountIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	long getExecuteStartTime() const;
	void setExecuteStartTime(long executeStartTime);
	long getCreateEndTime() const;
	void setCreateEndTime(long createEndTime);

private:
	std::string pipelineName_;
	std::string statusList_;
	std::string creatorAccountIds_;
	long executeEndTime_;
	long createStartTime_;
	std::string organizationId_;
	std::string executeAccountIds_;
	std::string nextToken_;
	long maxResults_;
	long executeStartTime_;
	long createEndTime_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINESREQUEST_H_
