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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINEGROUPPIPELINESREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINEGROUPPIPELINESREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListPipelineGroupPipelinesRequest : public RoaServiceRequest {
public:
	ListPipelineGroupPipelinesRequest();
	~ListPipelineGroupPipelinesRequest();
	std::string getPipelineName() const;
	void setPipelineName(const std::string &pipelineName);
	std::string getResultStatusList() const;
	void setResultStatusList(const std::string &resultStatusList);
	long getGroupId() const;
	void setGroupId(long groupId);
	long getExecuteEndTime() const;
	void setExecuteEndTime(long executeEndTime);
	long getCreateStartTime() const;
	void setCreateStartTime(long createStartTime);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
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
	std::string resultStatusList_;
	long groupId_;
	long executeEndTime_;
	long createStartTime_;
	std::string organizationId_;
	std::string nextToken_;
	long maxResults_;
	long executeStartTime_;
	long createEndTime_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINEGROUPPIPELINESREQUEST_H_
