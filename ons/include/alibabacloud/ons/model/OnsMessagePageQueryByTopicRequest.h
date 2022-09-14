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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPAGEQUERYBYTOPICREQUEST_H_
#define ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPAGEQUERYBYTOPICREQUEST_H_

#include <alibabacloud/ons/OnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ons {
namespace Model {
class ALIBABACLOUD_ONS_EXPORT OnsMessagePageQueryByTopicRequest : public RpcServiceRequest {
public:
	OnsMessagePageQueryByTopicRequest();
	~OnsMessagePageQueryByTopicRequest();
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTopic() const;
	void setTopic(const std::string &topic);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);

private:
	long endTime_;
	long beginTime_;
	int currentPage_;
	std::string instanceId_;
	int pageSize_;
	std::string topic_;
	std::string taskId_;
};
} // namespace Model
} // namespace Ons
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ONS_MODEL_ONSMESSAGEPAGEQUERYBYTOPICREQUEST_H_
