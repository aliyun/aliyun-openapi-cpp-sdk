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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTACTIONRECORDSREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTACTIONRECORDSREQUEST_H_

#include <alibabacloud/elasticsearch/ElasticsearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Elasticsearch {
namespace Model {
class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListActionRecordsRequest : public RoaServiceRequest {
public:
	ListActionRecordsRequest();
	~ListActionRecordsRequest();
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getActionNames() const;
	void setActionNames(const std::string &actionNames);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getSize() const;
	void setSize(int size);
	std::string getRequestId() const;
	void setRequestId(const std::string &requestId);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getPage() const;
	void setPage(int page);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getUserId() const;
	void setUserId(const std::string &userId);

private:
	std::string filter_;
	std::string actionNames_;
	std::string instanceId_;
	int size_;
	std::string requestId_;
	long endTime_;
	int page_;
	long startTime_;
	std::string userId_;
};
} // namespace Model
} // namespace Elasticsearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTACTIONRECORDSREQUEST_H_
