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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTBEEBOTINTENTLGFREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTBEEBOTINTENTLGFREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListBeebotIntentLgfRequest : public RpcServiceRequest {
public:
	ListBeebotIntentLgfRequest();
	~ListBeebotIntentLgfRequest();
	std::string getIntentId() const;
	void setIntentId(const std::string &intentId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getLgfText() const;
	void setLgfText(const std::string &lgfText);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string intentId_;
	int pageNumber_;
	std::string lgfText_;
	std::string scriptId_;
	std::string instanceId_;
	int pageSize_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTBEEBOTINTENTLGFREQUEST_H_
