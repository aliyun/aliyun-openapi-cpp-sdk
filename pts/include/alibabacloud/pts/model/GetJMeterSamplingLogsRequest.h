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

#ifndef ALIBABACLOUD_PTS_MODEL_GETJMETERSAMPLINGLOGSREQUEST_H_
#define ALIBABACLOUD_PTS_MODEL_GETJMETERSAMPLINGLOGSREQUEST_H_

#include <alibabacloud/pts/PTSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PTS {
namespace Model {
class ALIBABACLOUD_PTS_EXPORT GetJMeterSamplingLogsRequest : public RpcServiceRequest {
public:
	GetJMeterSamplingLogsRequest();
	~GetJMeterSamplingLogsRequest();
	std::string getResponseCode() const;
	void setResponseCode(const std::string &responseCode);
	long getAgentId() const;
	void setAgentId(long agentId);
	std::string getReportId() const;
	void setReportId(const std::string &reportId);
	int getMinRT() const;
	void setMinRT(int minRT);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	std::string getThread() const;
	void setThread(const std::string &thread);
	int getMaxRT() const;
	void setMaxRT(int maxRT);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getSamplerId() const;
	void setSamplerId(int samplerId);
	bool getSuccess() const;
	void setSuccess(bool success);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	std::string responseCode_;
	long agentId_;
	std::string reportId_;
	int minRT_;
	long endTime_;
	long beginTime_;
	std::string thread_;
	int maxRT_;
	int pageNumber_;
	int samplerId_;
	bool success_;
	int pageSize_;
	std::string keyword_;
};
} // namespace Model
} // namespace PTS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PTS_MODEL_GETJMETERSAMPLINGLOGSREQUEST_H_
