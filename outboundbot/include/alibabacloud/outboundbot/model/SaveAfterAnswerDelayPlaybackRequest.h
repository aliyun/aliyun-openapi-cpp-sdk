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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_SAVEAFTERANSWERDELAYPLAYBACKREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_SAVEAFTERANSWERDELAYPLAYBACKREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT SaveAfterAnswerDelayPlaybackRequest : public RpcServiceRequest {
public:
	SaveAfterAnswerDelayPlaybackRequest();
	~SaveAfterAnswerDelayPlaybackRequest();
	int getStrategyLevel() const;
	void setStrategyLevel(int strategyLevel);
	std::string getEntryId() const;
	void setEntryId(const std::string &entryId);
	int getAfterAnswerDelayPlayback() const;
	void setAfterAnswerDelayPlayback(int afterAnswerDelayPlayback);

private:
	int strategyLevel_;
	std::string entryId_;
	int afterAnswerDelayPlayback_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_SAVEAFTERANSWERDELAYPLAYBACKREQUEST_H_
