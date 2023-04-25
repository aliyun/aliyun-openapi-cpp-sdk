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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTREALTIMEAGENTSTATESREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTREALTIMEAGENTSTATESREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListRealtimeAgentStatesRequest : public RpcServiceRequest {
public:
	ListRealtimeAgentStatesRequest();
	~ListRealtimeAgentStatesRequest();
	std::string getCallTypeList() const;
	void setCallTypeList(const std::string &callTypeList);
	std::string getQuery() const;
	void setQuery(const std::string &query);
	bool getOutboundScenario() const;
	void setOutboundScenario(bool outboundScenario);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getWorkModeList() const;
	void setWorkModeList(const std::string &workModeList);
	std::string getAgentIdList() const;
	void setAgentIdList(const std::string &agentIdList);
	std::string getSkillGroupId() const;
	void setSkillGroupId(const std::string &skillGroupId);
	std::string getAgentName() const;
	void setAgentName(const std::string &agentName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getStateList() const;
	void setStateList(const std::string &stateList);

private:
	std::string callTypeList_;
	std::string query_;
	bool outboundScenario_;
	int pageNumber_;
	std::string instanceId_;
	std::string workModeList_;
	std::string agentIdList_;
	std::string skillGroupId_;
	std::string agentName_;
	int pageSize_;
	std::string stateList_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTREALTIMEAGENTSTATESREQUEST_H_
