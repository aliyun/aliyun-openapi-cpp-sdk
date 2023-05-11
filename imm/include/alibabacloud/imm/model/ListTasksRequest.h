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

#ifndef ALIBABACLOUD_IMM_MODEL_LISTTASKSREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_LISTTASKSREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT ListTasksRequest : public RpcServiceRequest {
public:
	struct StartTimeRange {
		std::string start;
		std::string end;
	};
	struct EndTimeRange {
		std::string start;
		std::string end;
	};
	ListTasksRequest();
	~ListTasksRequest();
	StartTimeRange getStartTimeRange() const;
	void setStartTimeRange(const StartTimeRange &startTimeRange);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::vector<std::string> getTaskTypes() const;
	void setTaskTypes(const std::vector<std::string> &taskTypes);
	EndTimeRange getEndTimeRange() const;
	void setEndTimeRange(const EndTimeRange &endTimeRange);
	std::string getSort() const;
	void setSort(const std::string &sort);
	bool getRequestDefinition() const;
	void setRequestDefinition(bool requestDefinition);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getTagSelector() const;
	void setTagSelector(const std::string &tagSelector);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	StartTimeRange startTimeRange_;
	std::string nextToken_;
	std::string order_;
	std::string projectName_;
	std::vector<std::string> taskTypes_;
	EndTimeRange endTimeRange_;
	std::string sort_;
	bool requestDefinition_;
	long maxResults_;
	std::string tagSelector_;
	std::string status_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_LISTTASKSREQUEST_H_
