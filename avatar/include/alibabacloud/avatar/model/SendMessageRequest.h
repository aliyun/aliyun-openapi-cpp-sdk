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

#ifndef ALIBABACLOUD_AVATAR_MODEL_SENDMESSAGEREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_SENDMESSAGEREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT SendMessageRequest : public RpcServiceRequest {
public:
	struct StreamExtension {
		bool isStream;
		int index;
		std::string position;
	};
	struct VAMLRequest {
		std::string code;
		std::string vaml;
	};
	SendMessageRequest();
	~SendMessageRequest();
	bool getFeedback() const;
	void setFeedback(bool feedback);
	StreamExtension getStreamExtension() const;
	void setStreamExtension(const StreamExtension &streamExtension);
	std::string getTextRequest() const;
	void setTextRequest(const std::string &textRequest);
	long getTenantId() const;
	void setTenantId(long tenantId);
	VAMLRequest getVAMLRequest() const;
	void setVAMLRequest(const VAMLRequest &vAMLRequest);
	std::string getSessionId() const;
	void setSessionId(const std::string &sessionId);

private:
	bool feedback_;
	StreamExtension streamExtension_;
	std::string textRequest_;
	long tenantId_;
	VAMLRequest vAMLRequest_;
	std::string sessionId_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_SENDMESSAGEREQUEST_H_
