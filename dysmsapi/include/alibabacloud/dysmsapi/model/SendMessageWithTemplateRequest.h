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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGEWITHTEMPLATEREQUEST_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGEWITHTEMPLATEREQUEST_H_

#include <alibabacloud/dysmsapi/DysmsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dysmsapi {
namespace Model {
class ALIBABACLOUD_DYSMSAPI_EXPORT SendMessageWithTemplateRequest : public RpcServiceRequest {
public:
	SendMessageWithTemplateRequest();
	~SendMessageWithTemplateRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSmsUpExtendCode() const;
	void setSmsUpExtendCode(const std::string &smsUpExtendCode);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	long getValidityPeriod() const;
	void setValidityPeriod(long validityPeriod);
	std::string getTo() const;
	void setTo(const std::string &to);
	std::string getTemplateCode() const;
	void setTemplateCode(const std::string &templateCode);
	std::string getChannelId() const;
	void setChannelId(const std::string &channelId);
	std::string getTemplateParam() const;
	void setTemplateParam(const std::string &templateParam);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string smsUpExtendCode_;
	std::string from_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	long validityPeriod_;
	std::string to_;
	std::string templateCode_;
	std::string channelId_;
	std::string templateParam_;
};
} // namespace Model
} // namespace Dysmsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGEWITHTEMPLATEREQUEST_H_
