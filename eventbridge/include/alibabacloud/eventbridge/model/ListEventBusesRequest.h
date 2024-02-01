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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTEVENTBUSESREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTEVENTBUSESREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT ListEventBusesRequest : public RpcServiceRequest {
public:
	ListEventBusesRequest();
	~ListEventBusesRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getLimit() const;
	void setLimit(int limit);
	std::string getNamePrefix() const;
	void setNamePrefix(const std::string &namePrefix);
	std::string getEventBusType() const;
	void setEventBusType(const std::string &eventBusType);

private:
	std::string nextToken_;
	int limit_;
	std::string namePrefix_;
	std::string eventBusType_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTEVENTBUSESREQUEST_H_
