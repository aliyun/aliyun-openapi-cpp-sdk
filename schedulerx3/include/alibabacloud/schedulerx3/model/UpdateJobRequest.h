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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_UPDATEJOBREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_UPDATEJOBREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT UpdateJobRequest : public RpcServiceRequest {
public:
	struct NoticeContacts {
		int contactType;
		std::string name;
	};
	struct NoticeConfig {
		bool timeoutKillEnable;
		bool failEnable;
		bool webhookIsAtAll;
		bool successNotice;
		int failLimitTimes;
		std::string sendChannel;
		bool timeoutEnable;
		bool missWorkerEnable;
		long timeout;
	};
	UpdateJobRequest();
	~UpdateJobRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	int getExecutorBlockStrategy() const;
	void setExecutorBlockStrategy(int executorBlockStrategy);
	std::string getTimezone() const;
	void setTimezone(const std::string &timezone);
	int getRouteStrategy() const;
	void setRouteStrategy(int routeStrategy);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getAttemptInterval() const;
	void setAttemptInterval(int attemptInterval);
	long getStartTime() const;
	void setStartTime(long startTime);
	long getJobId() const;
	void setJobId(long jobId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::vector<NoticeContacts> getNoticeContacts() const;
	void setNoticeContacts(const std::vector<NoticeContacts> &noticeContacts);
	NoticeConfig getNoticeConfig() const;
	void setNoticeConfig(const NoticeConfig &noticeConfig);
	std::string getCalendar() const;
	void setCalendar(const std::string &calendar);
	int getDataOffset() const;
	void setDataOffset(int dataOffset);
	int getMaxAttempt() const;
	void setMaxAttempt(int maxAttempt);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getPriority() const;
	void setPriority(int priority);
	std::string getTimeExpression() const;
	void setTimeExpression(const std::string &timeExpression);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getXAttrs() const;
	void setXAttrs(const std::string &xAttrs);
	int getMaxConcurrency() const;
	void setMaxConcurrency(int maxConcurrency);
	int getTimeType() const;
	void setTimeType(int timeType);
	std::string getParameters() const;
	void setParameters(const std::string &parameters);
	std::string getJobHandler() const;
	void setJobHandler(const std::string &jobHandler);
	std::string getCleanMode() const;
	void setCleanMode(const std::string &cleanMode);

private:
	std::string mseSessionId_;
	int executorBlockStrategy_;
	std::string timezone_;
	int routeStrategy_;
	std::string description_;
	int attemptInterval_;
	long startTime_;
	long jobId_;
	std::string appName_;
	std::vector<NoticeContacts> noticeContacts_;
	NoticeConfig noticeConfig_;
	std::string calendar_;
	int dataOffset_;
	int maxAttempt_;
	std::string clusterId_;
	int priority_;
	std::string timeExpression_;
	std::string name_;
	std::string xAttrs_;
	int maxConcurrency_;
	int timeType_;
	std::string parameters_;
	std::string jobHandler_;
	std::string cleanMode_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_UPDATEJOBREQUEST_H_
