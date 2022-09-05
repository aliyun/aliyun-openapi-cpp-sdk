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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATEALERTCONTACTREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATEALERTCONTACTREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT UpdateAlertContactRequest : public RpcServiceRequest {
public:
	UpdateAlertContactRequest();
	~UpdateAlertContactRequest();
	long getContactId() const;
	void setContactId(long contactId);
	std::string getPhoneNum() const;
	void setPhoneNum(const std::string &phoneNum);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getContactName() const;
	void setContactName(const std::string &contactName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDingRobotWebhookUrl() const;
	void setDingRobotWebhookUrl(const std::string &dingRobotWebhookUrl);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	bool getSystemNoc() const;
	void setSystemNoc(bool systemNoc);

private:
	long contactId_;
	std::string phoneNum_;
	std::string proxyUserId_;
	std::string contactName_;
	std::string regionId_;
	std::string dingRobotWebhookUrl_;
	std::string email_;
	bool systemNoc_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATEALERTCONTACTREQUEST_H_
