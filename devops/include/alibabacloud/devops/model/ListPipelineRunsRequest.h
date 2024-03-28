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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINERUNSREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINERUNSREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListPipelineRunsRequest : public RoaServiceRequest {
public:
	ListPipelineRunsRequest();
	~ListPipelineRunsRequest();
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	long getPipelineId() const;
	void setPipelineId(long pipelineId);
	int getTriggerMode() const;
	void setTriggerMode(int triggerMode);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long endTime_;
	long startTime_;
	long pipelineId_;
	int triggerMode_;
	std::string organizationId_;
	std::string nextToken_;
	long maxResults_;
	std::string status_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINERUNSREQUEST_H_
