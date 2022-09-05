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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEIMROBOTREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEIMROBOTREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateIMRobotRequest : public RpcServiceRequest {
public:
	CreateOrUpdateIMRobotRequest();
	~CreateOrUpdateIMRobotRequest();
	bool getDailyNoc() const;
	void setDailyNoc(bool dailyNoc);
	std::string getRobotAddress() const;
	void setRobotAddress(const std::string &robotAddress);
	std::string getDingSignKey() const;
	void setDingSignKey(const std::string &dingSignKey);
	std::string getRobotName() const;
	void setRobotName(const std::string &robotName);
	long getRobotId() const;
	void setRobotId(long robotId);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getDailyNocTime() const;
	void setDailyNocTime(const std::string &dailyNocTime);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::string getCardTemplate() const;
	void setCardTemplate(const std::string &cardTemplate);
	bool getEnableOutgoing() const;
	void setEnableOutgoing(bool enableOutgoing);

private:
	bool dailyNoc_;
	std::string robotAddress_;
	std::string dingSignKey_;
	std::string robotName_;
	long robotId_;
	std::string type_;
	std::string proxyUserId_;
	std::string dailyNocTime_;
	std::string token_;
	std::string cardTemplate_;
	bool enableOutgoing_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEIMROBOTREQUEST_H_
