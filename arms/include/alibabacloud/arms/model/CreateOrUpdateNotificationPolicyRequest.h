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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATENOTIFICATIONPOLICYREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATENOTIFICATIONPOLICYREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateNotificationPolicyRequest : public RpcServiceRequest {
public:
	CreateOrUpdateNotificationPolicyRequest();
	~CreateOrUpdateNotificationPolicyRequest();
	long getIntegrationId() const;
	void setIntegrationId(long integrationId);
	std::string getAreaCodes() const;
	void setAreaCodes(const std::string &areaCodes);
	std::string getGroupRule() const;
	void setGroupRule(const std::string &groupRule);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getRepeat() const;
	void setRepeat(bool repeat);
	long getId() const;
	void setId(long id);
	std::string getNotifyRule() const;
	void setNotifyRule(const std::string &notifyRule);
	std::string getState() const;
	void setState(const std::string &state);
	long getRepeatInterval() const;
	void setRepeatInterval(long repeatInterval);
	long getEscalationPolicyId() const;
	void setEscalationPolicyId(long escalationPolicyId);
	bool getSendRecoverMessage() const;
	void setSendRecoverMessage(bool sendRecoverMessage);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getMatchingRules() const;
	void setMatchingRules(const std::string &matchingRules);
	bool getDirectedMode() const;
	void setDirectedMode(bool directedMode);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getNotifyTemplate() const;
	void setNotifyTemplate(const std::string &notifyTemplate);

private:
	long integrationId_;
	std::string areaCodes_;
	std::string groupRule_;
	std::string regionId_;
	bool repeat_;
	long id_;
	std::string notifyRule_;
	std::string state_;
	long repeatInterval_;
	long escalationPolicyId_;
	bool sendRecoverMessage_;
	std::string proxyUserId_;
	std::string matchingRules_;
	bool directedMode_;
	std::string name_;
	std::string notifyTemplate_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATENOTIFICATIONPOLICYREQUEST_H_
