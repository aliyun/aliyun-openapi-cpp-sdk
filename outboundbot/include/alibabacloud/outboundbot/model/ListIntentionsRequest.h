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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTINTENTIONSREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTINTENTIONSREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListIntentionsRequest : public RpcServiceRequest {
public:
	ListIntentionsRequest();
	~ListIntentionsRequest();
	std::string getUserNick() const;
	void setUserNick(const std::string &userNick);
	long getIntentId() const;
	void setIntentId(long intentId);
	long getAnnotationMissionDataSourceType() const;
	void setAnnotationMissionDataSourceType(long annotationMissionDataSourceType);
	long getEnvironment() const;
	void setEnvironment(long environment);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getPageIndex() const;
	void setPageIndex(int pageIndex);
	std::string getBotId() const;
	void setBotId(const std::string &botId);

private:
	std::string userNick_;
	long intentId_;
	long annotationMissionDataSourceType_;
	long environment_;
	std::string scriptId_;
	std::string instanceId_;
	int pageSize_;
	int pageIndex_;
	std::string botId_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTINTENTIONSREQUEST_H_
