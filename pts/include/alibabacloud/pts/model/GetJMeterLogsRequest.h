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

#ifndef ALIBABACLOUD_PTS_MODEL_GETJMETERLOGSREQUEST_H_
#define ALIBABACLOUD_PTS_MODEL_GETJMETERLOGSREQUEST_H_

#include <alibabacloud/pts/PTSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PTS {
namespace Model {
class ALIBABACLOUD_PTS_EXPORT GetJMeterLogsRequest : public RpcServiceRequest {
public:
	GetJMeterLogsRequest();
	~GetJMeterLogsRequest();
	int getAgentIndex() const;
	void setAgentIndex(int agentIndex);
	std::string getReportId() const;
	void setReportId(const std::string &reportId);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	std::string getThread() const;
	void setThread(const std::string &thread);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	int agentIndex_;
	std::string reportId_;
	std::string level_;
	long endTime_;
	long beginTime_;
	std::string thread_;
	int pageNumber_;
	int pageSize_;
	std::string keyword_;
};
} // namespace Model
} // namespace PTS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PTS_MODEL_GETJMETERLOGSREQUEST_H_
