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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEHISTORYEVENTSREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEHISTORYEVENTSREQUEST_H_

#include <alibabacloud/elasticsearch/ElasticsearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Elasticsearch {
namespace Model {
class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListInstanceHistoryEventsRequest : public RoaServiceRequest {
public:
	ListInstanceHistoryEventsRequest();
	~ListInstanceHistoryEventsRequest();
	string getEventFinashEndTime() const;
	void setEventFinashEndTime(string eventFinashEndTime);
	string getInstanceId() const;
	void setInstanceId(string instanceId);
	integer getSize() const;
	void setSize(integer size);
	string getEventExecuteStartTime() const;
	void setEventExecuteStartTime(string eventExecuteStartTime);
	string getEventFinashStartTime() const;
	void setEventFinashStartTime(string eventFinashStartTime);
	string getNodeIP() const;
	void setNodeIP(string nodeIP);
	integer getPage() const;
	void setPage(integer page);
	string getEventCreateEndTime() const;
	void setEventCreateEndTime(string eventCreateEndTime);
	string getEventCreateStartTime() const;
	void setEventCreateStartTime(string eventCreateStartTime);
	string getEventExecuteEndTime() const;
	void setEventExecuteEndTime(string eventExecuteEndTime);

private:
	string eventFinashEndTime_;
	string instanceId_;
	integer size_;
	string eventExecuteStartTime_;
	string eventFinashStartTime_;
	string nodeIP_;
	integer page_;
	string eventCreateEndTime_;
	string eventCreateStartTime_;
	string eventExecuteEndTime_;
};
} // namespace Model
} // namespace Elasticsearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTINSTANCEHISTORYEVENTSREQUEST_H_
