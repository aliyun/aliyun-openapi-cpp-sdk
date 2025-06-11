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

#ifndef ALIBABACLOUD_LIVE_MODEL_CREATERTCWHIPSTREAMADDRESSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CREATERTCWHIPSTREAMADDRESSREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CreateRTCWhipStreamAddressRequest : public RpcServiceRequest {
public:
	CreateRTCWhipStreamAddressRequest();
	~CreateRTCWhipStreamAddressRequest();
	int getExpireTime() const;
	void setExpireTime(int expireTime);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);

private:
	int expireTime_;
	std::string clientToken_;
	std::string userId_;
	std::string appId_;
	std::string displayName_;
	std::string channelId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CREATERTCWHIPSTREAMADDRESSREQUEST_H_
