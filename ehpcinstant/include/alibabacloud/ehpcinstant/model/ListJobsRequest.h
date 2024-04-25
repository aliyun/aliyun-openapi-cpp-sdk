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

#ifndef ALIBABACLOUD_EHPCINSTANT_MODEL_LISTJOBSREQUEST_H_
#define ALIBABACLOUD_EHPCINSTANT_MODEL_LISTJOBSREQUEST_H_

#include <alibabacloud/ehpcinstant/EhpcInstantExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EhpcInstant {
namespace Model {
class ALIBABACLOUD_EHPCINSTANT_EXPORT ListJobsRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string jobId;
		int timeCreatedAfter;
		int timeCreatedBefore;
		std::string jobName;
		std::string status;
	};
	struct SortBy {
		std::string label;
		std::string order;
	};
	ListJobsRequest();
	~ListJobsRequest();
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	Filter getFilter() const;
	void setFilter(const Filter &filter);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	SortBy getSortBy() const;
	void setSortBy(const SortBy &sortBy);

private:
	std::string pageNumber_;
	Filter filter_;
	std::string pageSize_;
	SortBy sortBy_;
};
} // namespace Model
} // namespace EhpcInstant
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPCINSTANT_MODEL_LISTJOBSREQUEST_H_
