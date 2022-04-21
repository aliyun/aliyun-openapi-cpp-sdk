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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_SEARCHTASKREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_SEARCHTASKREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT SearchTaskRequest : public RpcServiceRequest {
public:
	SearchTaskRequest();
	~SearchTaskRequest();
	long getActualTimeLte() const;
	void setActualTimeLte(long actualTimeLte);
	std::string getOtherId() const;
	void setOtherId(const std::string &otherId);
	long getTaskCreateTimeLte() const;
	void setTaskCreateTimeLte(long taskCreateTimeLte);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	long getTaskCreateTimeGte() const;
	void setTaskCreateTimeGte(long taskCreateTimeGte);
	std::string getCalledNumber() const;
	void setCalledNumber(const std::string &calledNumber);
	std::string getUserIdMatch() const;
	void setUserIdMatch(const std::string &userIdMatch);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getScriptNameQuery() const;
	void setScriptNameQuery(const std::string &scriptNameQuery);
	int getPageIndex() const;
	void setPageIndex(int pageIndex);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getTaskStatusStringList() const;
	void setTaskStatusStringList(const std::string &taskStatusStringList);
	std::string getJobGroupNameQuery() const;
	void setJobGroupNameQuery(const std::string &jobGroupNameQuery);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getRecordingDurationGte() const;
	void setRecordingDurationGte(long recordingDurationGte);
	long getCallDurationLte() const;
	void setCallDurationLte(long callDurationLte);
	std::string getJobGroupId() const;
	void setJobGroupId(const std::string &jobGroupId);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getJobStatusStringList() const;
	void setJobStatusStringList(const std::string &jobStatusStringList);
	long getActualTimeGte() const;
	void setActualTimeGte(long actualTimeGte);
	long getCallDurationGte() const;
	void setCallDurationGte(long callDurationGte);
	long getRecordingDurationLte() const;
	void setRecordingDurationLte(long recordingDurationLte);

private:
	long actualTimeLte_;
	std::string otherId_;
	long taskCreateTimeLte_;
	std::string jobId_;
	long taskCreateTimeGte_;
	std::string calledNumber_;
	std::string userIdMatch_;
	int pageSize_;
	std::string scriptNameQuery_;
	int pageIndex_;
	std::string sortOrder_;
	std::string taskStatusStringList_;
	std::string jobGroupNameQuery_;
	std::string taskId_;
	std::string instanceId_;
	long recordingDurationGte_;
	long callDurationLte_;
	std::string jobGroupId_;
	std::string sortBy_;
	std::string jobStatusStringList_;
	long actualTimeGte_;
	long callDurationGte_;
	long recordingDurationLte_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_SEARCHTASKREQUEST_H_
