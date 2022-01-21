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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATEHOSTAVAILABILITYREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATEHOSTAVAILABILITYREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateHostAvailabilityRequest : public RpcServiceRequest {
public:
	struct AlertConfigEscalationList {
		int times;
		std::string metricName;
		std::string value;
		std::string _operator;
		std::string aggregate;
	};
	CreateHostAvailabilityRequest();
	~CreateHostAvailabilityRequest();
	std::string getTaskOptionHttpMethod() const;
	void setTaskOptionHttpMethod(const std::string &taskOptionHttpMethod);
	std::string getTaskOptionHttpHeader() const;
	void setTaskOptionHttpHeader(const std::string &taskOptionHttpHeader);
	std::vector<AlertConfigEscalationList> getAlertConfigEscalationList() const;
	void setAlertConfigEscalationList(const std::vector<AlertConfigEscalationList> &alertConfigEscalationList);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	int getAlertConfigSilenceTime() const;
	void setAlertConfigSilenceTime(int alertConfigSilenceTime);
	std::string getTaskOptionHttpResponseCharset() const;
	void setTaskOptionHttpResponseCharset(const std::string &taskOptionHttpResponseCharset);
	bool getTaskOptionHttpNegative() const;
	void setTaskOptionHttpNegative(bool taskOptionHttpNegative);
	int getTaskOptionInterval() const;
	void setTaskOptionInterval(int taskOptionInterval);
	int getAlertConfigNotifyType() const;
	void setAlertConfigNotifyType(int alertConfigNotifyType);
	std::string getTaskOptionTelnetOrPingHost() const;
	void setTaskOptionTelnetOrPingHost(const std::string &taskOptionTelnetOrPingHost);
	std::string getTaskOptionHttpResponseMatchContent() const;
	void setTaskOptionHttpResponseMatchContent(const std::string &taskOptionHttpResponseMatchContent);
	std::vector<std::string> getInstanceList() const;
	void setInstanceList(const std::vector<std::string> &instanceList);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	long getGroupId() const;
	void setGroupId(long groupId);
	int getAlertConfigEndTime() const;
	void setAlertConfigEndTime(int alertConfigEndTime);
	std::string getTaskOptionHttpURI() const;
	void setTaskOptionHttpURI(const std::string &taskOptionHttpURI);
	std::string getTaskScope() const;
	void setTaskScope(const std::string &taskScope);
	std::string getTaskOptionHttpPostContent() const;
	void setTaskOptionHttpPostContent(const std::string &taskOptionHttpPostContent);
	int getAlertConfigStartTime() const;
	void setAlertConfigStartTime(int alertConfigStartTime);
	std::string getAlertConfigWebHook() const;
	void setAlertConfigWebHook(const std::string &alertConfigWebHook);

private:
	std::string taskOptionHttpMethod_;
	std::string taskOptionHttpHeader_;
	std::vector<AlertConfigEscalationList> alertConfigEscalationList_;
	std::string taskName_;
	int alertConfigSilenceTime_;
	std::string taskOptionHttpResponseCharset_;
	bool taskOptionHttpNegative_;
	int taskOptionInterval_;
	int alertConfigNotifyType_;
	std::string taskOptionTelnetOrPingHost_;
	std::string taskOptionHttpResponseMatchContent_;
	std::vector<std::string> instanceList_;
	std::string taskType_;
	long groupId_;
	int alertConfigEndTime_;
	std::string taskOptionHttpURI_;
	std::string taskScope_;
	std::string taskOptionHttpPostContent_;
	int alertConfigStartTime_;
	std::string alertConfigWebHook_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATEHOSTAVAILABILITYREQUEST_H_
