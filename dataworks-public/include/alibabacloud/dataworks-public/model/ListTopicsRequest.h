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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTOPICSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTOPICSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListTopicsRequest : public RpcServiceRequest {
public:
	ListTopicsRequest();
	~ListTopicsRequest();
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getBeginTime() const;
	void setBeginTime(const std::string &beginTime);
	std::string getTopicStatuses() const;
	void setTopicStatuses(const std::string &topicStatuses);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	long getInstanceId() const;
	void setInstanceId(long instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTopicTypes() const;
	void setTopicTypes(const std::string &topicTypes);
	long getNodeId() const;
	void setNodeId(long nodeId);

private:
	std::string owner_;
	std::string endTime_;
	std::string beginTime_;
	std::string topicStatuses_;
	int pageNumber_;
	long instanceId_;
	int pageSize_;
	std::string topicTypes_;
	long nodeId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTOPICSREQUEST_H_
