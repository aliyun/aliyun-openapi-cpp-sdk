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

#ifndef ALIBABACLOUD_AVATAR_MODEL_SENDTEXTREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_SENDTEXTREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT SendTextRequest : public RpcServiceRequest {
public:
	struct StreamExtension {
		bool isStream;
		int index;
		std::string position;
	};
	SendTextRequest();
	~SendTextRequest();
	bool getFeedback() const;
	void setFeedback(bool feedback);
	std::string getUniqueCode() const;
	void setUniqueCode(const std::string &uniqueCode);
	StreamExtension getStreamExtension() const;
	void setStreamExtension(const StreamExtension &streamExtension);
	long getTenantId() const;
	void setTenantId(long tenantId);
	bool getInterrupt() const;
	void setInterrupt(bool interrupt);
	std::string getSessionId() const;
	void setSessionId(const std::string &sessionId);
	std::string getText() const;
	void setText(const std::string &text);

private:
	bool feedback_;
	std::string uniqueCode_;
	StreamExtension streamExtension_;
	long tenantId_;
	bool interrupt_;
	std::string sessionId_;
	std::string text_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_SENDTEXTREQUEST_H_
