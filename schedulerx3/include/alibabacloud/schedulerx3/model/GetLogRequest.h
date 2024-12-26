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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_GETLOGREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_GETLOGREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT GetLogRequest : public RpcServiceRequest {
public:
	GetLogRequest();
	~GetLogRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	int getLineNum() const;
	void setLineNum(int lineNum);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getJobExecutionId() const;
	void setJobExecutionId(const std::string &jobExecutionId);
	int getOffset() const;
	void setOffset(int offset);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	bool getReverse() const;
	void setReverse(bool reverse);
	long getLogId() const;
	void setLogId(long logId);

private:
	std::string mseSessionId_;
	long startTime_;
	std::string appName_;
	int lineNum_;
	std::string keyword_;
	std::string jobExecutionId_;
	int offset_;
	std::string level_;
	long endTime_;
	std::string clusterId_;
	bool reverse_;
	long logId_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_GETLOGREQUEST_H_
