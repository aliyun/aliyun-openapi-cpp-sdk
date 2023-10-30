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

#ifndef ALIBABACLOUD_LIVE_MODEL_SENDLIVEMESSAGEGROUPREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SENDLIVEMESSAGEGROUPREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT SendLiveMessageGroupRequest : public RpcServiceRequest {
public:
	SendLiveMessageGroupRequest();
	~SendLiveMessageGroupRequest();
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getSenderMetaInfo() const;
	void setSenderMetaInfo(const std::string &senderMetaInfo);
	std::string getDataCenter() const;
	void setDataCenter(const std::string &dataCenter);
	std::string getMsgTid() const;
	void setMsgTid(const std::string &msgTid);
	std::string getBody() const;
	void setBody(const std::string &body);
	std::string getSenderId() const;
	void setSenderId(const std::string &senderId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	long getMsgType() const;
	void setMsgType(long msgType);

private:
	std::string groupId_;
	std::string senderMetaInfo_;
	std::string dataCenter_;
	std::string msgTid_;
	std::string body_;
	std::string senderId_;
	std::string appId_;
	long msgType_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_SENDLIVEMESSAGEGROUPREQUEST_H_
