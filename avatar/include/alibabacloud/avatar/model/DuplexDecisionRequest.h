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

#ifndef ALIBABACLOUD_AVATAR_MODEL_DUPLEXDECISIONREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_DUPLEXDECISIONREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT DuplexDecisionRequest : public RpcServiceRequest {
public:
	struct DialogContext {
		struct HistoriesItem {
			std::string robot;
			std::string user;
		};
		HistoriesItem historiesItem;
		std::vector<HistoriesItem> histories;
		int curUtteranceIdx;
	};
	DuplexDecisionRequest();
	~DuplexDecisionRequest();
	int getInterruptType() const;
	void setInterruptType(int interruptType);
	std::vector<std::string> getCustomKeywords() const;
	void setCustomKeywords(const std::vector<std::string> &customKeywords);
	std::string getSessionId() const;
	void setSessionId(const std::string &sessionId);
	std::string getDialogStatus() const;
	void setDialogStatus(const std::string &dialogStatus);
	DialogContext getDialogContext() const;
	void setDialogContext(const DialogContext &dialogContext);
	int getCallTime() const;
	void setCallTime(int callTime);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	long getTenantId() const;
	void setTenantId(long tenantId);
	std::string getText() const;
	void setText(const std::string &text);
	std::string getBizRequestId() const;
	void setBizRequestId(const std::string &bizRequestId);

private:
	int interruptType_;
	std::vector<std::string> customKeywords_;
	std::string sessionId_;
	std::string dialogStatus_;
	DialogContext dialogContext_;
	int callTime_;
	std::string appId_;
	long tenantId_;
	std::string text_;
	std::string bizRequestId_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_DUPLEXDECISIONREQUEST_H_
