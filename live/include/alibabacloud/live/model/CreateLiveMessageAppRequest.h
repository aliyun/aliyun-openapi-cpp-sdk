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

#ifndef ALIBABACLOUD_LIVE_MODEL_CREATELIVEMESSAGEAPPREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CREATELIVEMESSAGEAPPREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CreateLiveMessageAppRequest : public RpcServiceRequest {
public:
	CreateLiveMessageAppRequest();
	~CreateLiveMessageAppRequest();
	int getStreamSupport() const;
	void setStreamSupport(int streamSupport);
	std::string getDataCenter() const;
	void setDataCenter(const std::string &dataCenter);
	int getRichTextSupport() const;
	void setRichTextSupport(int richTextSupport);
	int getMsgLifeCycle() const;
	void setMsgLifeCycle(int msgLifeCycle);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	int getAuditType() const;
	void setAuditType(int auditType);
	std::string getAuditUrl() const;
	void setAuditUrl(const std::string &auditUrl);
	std::string getEventCallbackUrl() const;
	void setEventCallbackUrl(const std::string &eventCallbackUrl);

private:
	int streamSupport_;
	std::string dataCenter_;
	int richTextSupport_;
	int msgLifeCycle_;
	std::string appName_;
	int auditType_;
	std::string auditUrl_;
	std::string eventCallbackUrl_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CREATELIVEMESSAGEAPPREQUEST_H_
