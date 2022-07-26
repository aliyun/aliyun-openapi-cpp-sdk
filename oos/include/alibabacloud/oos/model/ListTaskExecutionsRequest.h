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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTTASKEXECUTIONSREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_LISTTASKEXECUTIONSREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT ListTaskExecutionsRequest : public RpcServiceRequest {
public:
	ListTaskExecutionsRequest();
	~ListTaskExecutionsRequest();
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	bool getIncludeChildTaskExecution() const;
	void setIncludeChildTaskExecution(bool includeChildTaskExecution);
	std::string getExecutionId() const;
	void setExecutionId(const std::string &executionId);
	std::string getParentTaskExecutionId() const;
	void setParentTaskExecutionId(const std::string &parentTaskExecutionId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getEndDateBefore() const;
	void setEndDateBefore(const std::string &endDateBefore);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getStartDateAfter() const;
	void setStartDateAfter(const std::string &startDateAfter);
	std::string getStartDateBefore() const;
	void setStartDateBefore(const std::string &startDateBefore);
	std::string getEndDateAfter() const;
	void setEndDateAfter(const std::string &endDateAfter);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getTaskExecutionId() const;
	void setTaskExecutionId(const std::string &taskExecutionId);
	std::string getSortField() const;
	void setSortField(const std::string &sortField);
	std::string getTaskAction() const;
	void setTaskAction(const std::string &taskAction);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string taskName_;
	bool includeChildTaskExecution_;
	std::string executionId_;
	std::string parentTaskExecutionId_;
	std::string regionId_;
	std::string nextToken_;
	std::string endDateBefore_;
	std::string sortOrder_;
	std::string startDateAfter_;
	std::string startDateBefore_;
	std::string endDateAfter_;
	int maxResults_;
	std::string taskExecutionId_;
	std::string sortField_;
	std::string taskAction_;
	std::string status_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_LISTTASKEXECUTIONSREQUEST_H_
