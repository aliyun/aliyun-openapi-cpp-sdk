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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_PUTTARGETSREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_PUTTARGETSREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT PutTargetsRequest : public RpcServiceRequest {
public:
	struct Targets {
		std::string endpoint;
		std::string pushRetryStrategy;
		struct ParamListItem {
			std::string _template;
			std::string resourceKey;
			std::string form;
			std::string value;
		};
		ParamListItem paramListItem;
		std::vector<ParamListItem> paramList;
		std::string id;
		struct DeadLetterQueue {
			std::string arn;
		};
		DeadLetterQueue deadLetterQueue;
		std::string type;
		std::string errorsTolerance;
	};
	PutTargetsRequest();
	~PutTargetsRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getEventBusName() const;
	void setEventBusName(const std::string &eventBusName);
	std::vector<Targets> getTargets() const;
	void setTargets(const std::vector<Targets> &targets);

private:
	std::string clientToken_;
	std::string ruleName_;
	std::string eventBusName_;
	std::vector<Targets> targets_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_PUTTARGETSREQUEST_H_
