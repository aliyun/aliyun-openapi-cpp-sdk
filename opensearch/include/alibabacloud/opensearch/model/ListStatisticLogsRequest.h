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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_LISTSTATISTICLOGSREQUEST_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_LISTSTATISTICLOGSREQUEST_H_

#include <alibabacloud/opensearch/OpenSearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OpenSearch {
namespace Model {
class ALIBABACLOUD_OPENSEARCH_EXPORT ListStatisticLogsRequest : public RoaServiceRequest {
public:
	ListStatisticLogsRequest();
	~ListStatisticLogsRequest();
	std::string getColumns() const;
	void setColumns(const std::string &columns);
	std::string getQuery() const;
	void setQuery(const std::string &query);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getModuleName() const;
	void setModuleName(const std::string &moduleName);
	bool getDistinct() const;
	void setDistinct(bool distinct);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	int getStartTime() const;
	void setStartTime(int startTime);
	int getStopTime() const;
	void setStopTime(int stopTime);
	std::string getAppGroupIdentity() const;
	void setAppGroupIdentity(const std::string &appGroupIdentity);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	std::string columns_;
	std::string query_;
	int pageSize_;
	std::string moduleName_;
	bool distinct_;
	std::string sortBy_;
	int startTime_;
	int stopTime_;
	std::string appGroupIdentity_;
	int pageNumber_;
};
} // namespace Model
} // namespace OpenSearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_LISTSTATISTICLOGSREQUEST_H_
