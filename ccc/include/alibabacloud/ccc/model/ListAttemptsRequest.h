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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTATTEMPTSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTATTEMPTSREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListAttemptsRequest : public RpcServiceRequest {
public:
	ListAttemptsRequest();
	~ListAttemptsRequest();
	std::string getContactId() const;
	void setContactId(const std::string &contactId);
	std::string getCampaignId() const;
	void setCampaignId(const std::string &campaignId);
	std::string getCriteria() const;
	void setCriteria(const std::string &criteria);
	std::string getCallee() const;
	void setCallee(const std::string &callee);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getQueueId() const;
	void setQueueId(const std::string &queueId);
	std::string getAgentId() const;
	void setAgentId(const std::string &agentId);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getCaller() const;
	void setCaller(const std::string &caller);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCaseId() const;
	void setCaseId(const std::string &caseId);
	std::string getAttemptId() const;
	void setAttemptId(const std::string &attemptId);

private:
	std::string contactId_;
	std::string campaignId_;
	std::string criteria_;
	std::string callee_;
	long startTime_;
	int pageNumber_;
	int pageSize_;
	std::string queueId_;
	std::string agentId_;
	long endTime_;
	std::string caller_;
	std::string instanceId_;
	std::string caseId_;
	std::string attemptId_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTATTEMPTSREQUEST_H_
