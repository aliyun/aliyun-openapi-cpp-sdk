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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_CREATEAPPREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_CREATEAPPREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT CreateAppRequest : public RpcServiceRequest {
public:
	struct NoticeContacts {
		std::string webhook;
		std::string mail;
		std::string phone;
		std::string smsCode;
		std::string mailCode;
		std::string userName;
	};
	struct NoticeConfig {
		bool webhookIsAtAll;
		std::string noticeChannel;
	};
	CreateAppRequest();
	~CreateAppRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::vector<NoticeContacts> getNoticeContacts() const;
	void setNoticeContacts(const std::vector<NoticeContacts> &noticeContacts);
	NoticeConfig getNoticeConfig() const;
	void setNoticeConfig(const NoticeConfig &noticeConfig);
	int getMaxJobs() const;
	void setMaxJobs(int maxJobs);
	std::string getCalender() const;
	void setCalender(const std::string &calender);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	bool getEnableLog() const;
	void setEnableLog(bool enableLog);
	int getMaxConcurrency() const;
	void setMaxConcurrency(int maxConcurrency);

private:
	std::string mseSessionId_;
	std::string accessToken_;
	std::string title_;
	std::string appName_;
	std::vector<NoticeContacts> noticeContacts_;
	NoticeConfig noticeConfig_;
	int maxJobs_;
	std::string calender_;
	std::string clusterId_;
	bool enableLog_;
	int maxConcurrency_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_CREATEAPPREQUEST_H_
