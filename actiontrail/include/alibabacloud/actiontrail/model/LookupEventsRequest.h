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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSREQUEST_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSREQUEST_H_

#include <alibabacloud/actiontrail/ActiontrailExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Actiontrail {
namespace Model {
class ALIBABACLOUD_ACTIONTRAIL_EXPORT LookupEventsRequest : public RpcServiceRequest {
public:
	struct LookupAttribute {
		std::string value;
		std::string key;
	};
	LookupEventsRequest();
	~LookupEventsRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<LookupAttribute> getLookupAttribute() const;
	void setLookupAttribute(const std::vector<LookupAttribute> &lookupAttribute);
	std::string getMaxResults() const;
	void setMaxResults(const std::string &maxResults);
	std::string getDirection() const;
	void setDirection(const std::string &direction);

private:
	std::string endTime_;
	std::string startTime_;
	std::string nextToken_;
	std::vector<LookupAttribute> lookupAttribute_;
	std::string maxResults_;
	std::string direction_;
};
} // namespace Model
} // namespace Actiontrail
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSREQUEST_H_
