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

#ifndef ALIBABACLOUD_LIVE_MODEL_SENDROOMUSERNOTIFICATIONREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SENDROOMUSERNOTIFICATIONREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT SendRoomUserNotificationRequest : public RpcServiceRequest {
public:
	SendRoomUserNotificationRequest();
	~SendRoomUserNotificationRequest();
	std::string getData() const;
	void setData(const std::string &data);
	std::string getToAppUid() const;
	void setToAppUid(const std::string &toAppUid);
	std::string getAppUid() const;
	void setAppUid(const std::string &appUid);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getPriority() const;
	void setPriority(int priority);
	std::string getRoomId() const;
	void setRoomId(const std::string &roomId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::string data_;
	std::string toAppUid_;
	std::string appUid_;
	long ownerId_;
	int priority_;
	std::string roomId_;
	std::string appId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_SENDROOMUSERNOTIFICATIONREQUEST_H_
