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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_LISTSCHEDULEEVENTREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_LISTSCHEDULEEVENTREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT ListScheduleEventRequest : public RpcServiceRequest {
public:
	ListScheduleEventRequest();
	~ListScheduleEventRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEvent() const;
	void setEvent(const std::string &event);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getJobName() const;
	void setJobName(const std::string &jobName);
	std::string getJobExecutionId() const;
	void setJobExecutionId(const std::string &jobExecutionId);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	bool getReverse() const;
	void setReverse(bool reverse);

private:
	std::string mseSessionId_;
	long startTime_;
	int pageNum_;
	std::string appName_;
	int pageSize_;
	std::string event_;
	std::string keyword_;
	std::string jobName_;
	std::string jobExecutionId_;
	long endTime_;
	std::string clusterId_;
	bool reverse_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_LISTSCHEDULEEVENTREQUEST_H_
