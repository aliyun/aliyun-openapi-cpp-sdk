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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTAPIDESTINATIONSREQUEST_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTAPIDESTINATIONSREQUEST_H_

#include <alibabacloud/eventbridge/EventbridgeExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eventbridge {
namespace Model {
class ALIBABACLOUD_EVENTBRIDGE_EXPORT ListApiDestinationsRequest : public RpcServiceRequest {
public:
	ListApiDestinationsRequest();
	~ListApiDestinationsRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getConnectionName() const;
	void setConnectionName(const std::string &connectionName);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getApiDestinationNamePrefix() const;
	void setApiDestinationNamePrefix(const std::string &apiDestinationNamePrefix);

private:
	std::string clientToken_;
	std::string description_;
	std::string nextToken_;
	std::string connectionName_;
	long maxResults_;
	std::string apiDestinationNamePrefix_;
};
} // namespace Model
} // namespace Eventbridge
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_LISTAPIDESTINATIONSREQUEST_H_
