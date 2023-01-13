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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_QUERYJOBSWITHRESULTREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_QUERYJOBSWITHRESULTREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT QueryJobsWithResultRequest : public RpcServiceRequest {
public:
	QueryJobsWithResultRequest();
	~QueryJobsWithResultRequest();
	bool getHasReachedEndOfFlowFilter() const;
	void setHasReachedEndOfFlowFilter(bool hasReachedEndOfFlowFilter);
	bool getHasAnsweredFilter() const;
	void setHasAnsweredFilter(bool hasAnsweredFilter);
	std::string getTaskStatusFilter() const;
	void setTaskStatusFilter(const std::string &taskStatusFilter);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getQueryText() const;
	void setQueryText(const std::string &queryText);
	bool getHasHangUpByRejectionFilter() const;
	void setHasHangUpByRejectionFilter(bool hasHangUpByRejectionFilter);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getJobStatusFilter() const;
	void setJobStatusFilter(const std::string &jobStatusFilter);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getJobGroupId() const;
	void setJobGroupId(const std::string &jobGroupId);

private:
	bool hasReachedEndOfFlowFilter_;
	bool hasAnsweredFilter_;
	std::string taskStatusFilter_;
	int pageNumber_;
	std::string queryText_;
	bool hasHangUpByRejectionFilter_;
	std::string instanceId_;
	std::string jobStatusFilter_;
	int pageSize_;
	std::string jobGroupId_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_QUERYJOBSWITHRESULTREQUEST_H_
