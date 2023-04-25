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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATECAMPAIGNREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATECAMPAIGNREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT CreateCampaignRequest : public RpcServiceRequest {
public:
	CreateCampaignRequest();
	~CreateCampaignRequest();
	std::string getQueueId() const;
	void setQueueId(const std::string &queueId);
	std::string getContactFlowId() const;
	void setContactFlowId(const std::string &contactFlowId);
	bool getSimulation() const;
	void setSimulation(bool simulation);
	bool getExecutingUntilTimeout() const;
	void setExecutingUntilTimeout(bool executingUntilTimeout);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	long getMaxAttemptCount() const;
	void setMaxAttemptCount(long maxAttemptCount);
	std::string getStrategyParameters() const;
	void setStrategyParameters(const std::string &strategyParameters);
	std::string getCaseFileKey() const;
	void setCaseFileKey(const std::string &caseFileKey);
	long getMinAttemptInterval() const;
	void setMinAttemptInterval(long minAttemptInterval);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSimulationParameters() const;
	void setSimulationParameters(const std::string &simulationParameters);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getStrategyType() const;
	void setStrategyType(const std::string &strategyType);
	std::string getCaseList() const;
	void setCaseList(const std::string &caseList);
	std::string getCallableTime() const;
	void setCallableTime(const std::string &callableTime);

private:
	std::string queueId_;
	std::string contactFlowId_;
	bool simulation_;
	bool executingUntilTimeout_;
	std::string endTime_;
	std::string startTime_;
	long maxAttemptCount_;
	std::string strategyParameters_;
	std::string caseFileKey_;
	long minAttemptInterval_;
	std::string instanceId_;
	std::string simulationParameters_;
	std::string name_;
	std::string strategyType_;
	std::string caseList_;
	std::string callableTime_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_CREATECAMPAIGNREQUEST_H_
