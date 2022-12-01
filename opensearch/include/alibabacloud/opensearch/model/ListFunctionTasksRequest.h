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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_LISTFUNCTIONTASKSREQUEST_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_LISTFUNCTIONTASKSREQUEST_H_

#include <alibabacloud/opensearch/OpenSearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OpenSearch {
namespace Model {
class ALIBABACLOUD_OPENSEARCH_EXPORT ListFunctionTasksRequest : public RoaServiceRequest {
public:
	ListFunctionTasksRequest();
	~ListFunctionTasksRequest();
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getFunctionName() const;
	void setFunctionName(const std::string &functionName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getAppGroupIdentity() const;
	void setAppGroupIdentity(const std::string &appGroupIdentity);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string instanceName_;
	std::string functionName_;
	int pageSize_;
	long endTime_;
	long startTime_;
	std::string appGroupIdentity_;
	int pageNumber_;
	std::string status_;
};
} // namespace Model
} // namespace OpenSearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_LISTFUNCTIONTASKSREQUEST_H_
