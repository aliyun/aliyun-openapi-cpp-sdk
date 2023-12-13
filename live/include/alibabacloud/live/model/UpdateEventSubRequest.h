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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATEEVENTSUBREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATEEVENTSUBREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT UpdateEventSubRequest : public RpcServiceRequest {
public:
	UpdateEventSubRequest();
	~UpdateEventSubRequest();
	std::string getSubscribeId() const;
	void setSubscribeId(const std::string &subscribeId);
	std::vector<std::string> getUsers() const;
	void setUsers(const std::vector<std::string> &users);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getCallbackUrl() const;
	void setCallbackUrl(const std::string &callbackUrl);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);
	std::vector<std::string> getEvents() const;
	void setEvents(const std::vector<std::string> &events);

private:
	std::string subscribeId_;
	std::vector<std::string> users_;
	std::string appId_;
	std::string callbackUrl_;
	std::string channelId_;
	std::vector<std::string> events_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATEEVENTSUBREQUEST_H_
