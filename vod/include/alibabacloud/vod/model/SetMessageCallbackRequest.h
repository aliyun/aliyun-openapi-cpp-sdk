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

#ifndef ALIBABACLOUD_VOD_MODEL_SETMESSAGECALLBACKREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SETMESSAGECALLBACKREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT SetMessageCallbackRequest : public RpcServiceRequest {
public:
	SetMessageCallbackRequest();
	~SetMessageCallbackRequest();
	std::string getAuthKey() const;
	void setAuthKey(const std::string &authKey);
	long getResourceRealOwnerId() const;
	void setResourceRealOwnerId(long resourceRealOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getCallbackType() const;
	void setCallbackType(const std::string &callbackType);
	std::string getCallbackSwitch() const;
	void setCallbackSwitch(const std::string &callbackSwitch);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEventTypeList() const;
	void setEventTypeList(const std::string &eventTypeList);
	std::string getMnsQueueName() const;
	void setMnsQueueName(const std::string &mnsQueueName);
	std::string getMnsEndpoint() const;
	void setMnsEndpoint(const std::string &mnsEndpoint);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getAuthSwitch() const;
	void setAuthSwitch(const std::string &authSwitch);
	std::string getCallbackURL() const;
	void setCallbackURL(const std::string &callbackURL);

private:
	std::string authKey_;
	long resourceRealOwnerId_;
	std::string accessKeyId_;
	std::string callbackType_;
	std::string callbackSwitch_;
	std::string ownerAccount_;
	std::string eventTypeList_;
	std::string mnsQueueName_;
	std::string mnsEndpoint_;
	std::string appId_;
	std::string authSwitch_;
	std::string callbackURL_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_SETMESSAGECALLBACKREQUEST_H_
