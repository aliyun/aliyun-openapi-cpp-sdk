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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGETOGLOBEREQUEST_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGETOGLOBEREQUEST_H_

#include <alibabacloud/dysmsapi/DysmsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dysmsapi {
namespace Model {
class ALIBABACLOUD_DYSMSAPI_EXPORT SendMessageToGlobeRequest : public RpcServiceRequest {
public:
	SendMessageToGlobeRequest();
	~SendMessageToGlobeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getMessage() const;
	void setMessage(const std::string &message);
	long getValidityPeriod() const;
	void setValidityPeriod(long validityPeriod);
	std::string getTo() const;
	void setTo(const std::string &to);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);

private:
	long resourceOwnerId_;
	std::string type_;
	std::string accessKeyId_;
	std::string from_;
	std::string taskId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string message_;
	long validityPeriod_;
	std::string to_;
	std::string channelId_;
};
} // namespace Model
} // namespace Dysmsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGETOGLOBEREQUEST_H_
