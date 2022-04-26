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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCAMPAIGNSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCAMPAIGNSREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListCampaignsRequest : public RpcServiceRequest {
public:
	ListCampaignsRequest();
	~ListCampaignsRequest();
	std::string getActualStartTimeTo() const;
	void setActualStartTimeTo(const std::string &actualStartTimeTo);
	std::string getQueueId() const;
	void setQueueId(const std::string &queueId);
	std::string getActualStartTimeFrom() const;
	void setActualStartTimeFrom(const std::string &actualStartTimeFrom);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getPlanedStartTimeFrom() const;
	void setPlanedStartTimeFrom(const std::string &planedStartTimeFrom);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getName() const;
	void setName(const std::string &name);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getPlanedStartTimeTo() const;
	void setPlanedStartTimeTo(const std::string &planedStartTimeTo);
	std::string getState() const;
	void setState(const std::string &state);

private:
	std::string actualStartTimeTo_;
	std::string queueId_;
	std::string actualStartTimeFrom_;
	long pageNumber_;
	std::string planedStartTimeFrom_;
	std::string instanceId_;
	std::string name_;
	long pageSize_;
	std::string planedStartTimeTo_;
	std::string state_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCAMPAIGNSREQUEST_H_
