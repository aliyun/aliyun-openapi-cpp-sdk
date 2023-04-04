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

#ifndef ALIBABACLOUD_AVATAR_MODEL_STARTINSTANCEREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_STARTINSTANCEREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT StartInstanceRequest : public RpcServiceRequest {
public:
	struct Channel {
		std::string type;
		std::map<std::string, std::string> reqConfig;
	};
	struct CommandRequest {
		bool alphaSwitch;
	};
	StartInstanceRequest();
	~StartInstanceRequest();
	std::string getApp() const;
	void setApp(const std::string &app);
	long getTenantId() const;
	void setTenantId(long tenantId);
	Channel getChannel() const;
	void setChannel(const Channel &channel);
	CommandRequest getCommandRequest() const;
	void setCommandRequest(const CommandRequest &commandRequest);
	std::string getUser() const;
	void setUser(const std::string &user);

private:
	std::string app_;
	long tenantId_;
	Channel channel_;
	CommandRequest commandRequest_;
	std::string user_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_STARTINSTANCEREQUEST_H_
