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

#ifndef ALIBABACLOUD_LIVE_MODEL_SENDMESSAGETOGROUPUSERSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SENDMESSAGETOGROUPUSERSREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT SendMessageToGroupUsersRequest : public RpcServiceRequest {
public:
	SendMessageToGroupUsersRequest();
	~SendMessageToGroupUsersRequest();
	std::vector<std::string> getReceiverIdList() const;
	void setReceiverIdList(const std::vector<std::string> &receiverIdList);
	std::string getGroupIdcopy() const;
	void setGroupIdcopy(const std::string &groupIdcopy);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	int getType() const;
	void setType(int type);

private:
	std::vector<std::string> receiverIdList_;
	std::string groupIdcopy_;
	std::string groupId_;
	int type_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_SENDMESSAGETOGROUPUSERSREQUEST_H_
