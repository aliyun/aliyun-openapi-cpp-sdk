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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTSYNCHRONIZATIONJOBSREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTSYNCHRONIZATIONJOBSREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT ListSynchronizationJobsRequest : public RpcServiceRequest {
public:
	struct Filters {
		std::string string;
		std::vector<std::string> values;
		std::string key;
	};
	ListSynchronizationJobsRequest();
	~ListSynchronizationJobsRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	long getStartTime() const;
	void setStartTime(long startTime);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::vector<std::string> getTargetIds() const;
	void setTargetIds(const std::vector<std::string> &targetIds);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::vector<Filters> getFilters() const;
	void setFilters(const std::vector<Filters> &filters);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string targetType_;
	long startTime_;
	long pageNumber_;
	std::string nextToken_;
	long pageSize_;
	std::string direction_;
	std::vector<std::string> targetIds_;
	long endTime_;
	std::vector<Filters> filters_;
	std::string instanceId_;
	long maxResults_;
	std::string status_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTSYNCHRONIZATIONJOBSREQUEST_H_
