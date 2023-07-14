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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTSERVERLESSJOBSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTSERVERLESSJOBSREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListServerlessJobsRequest : public RpcServiceRequest {
public:
	ListServerlessJobsRequest();
	~ListServerlessJobsRequest();
	std::string getSubmitTimeStart() const;
	void setSubmitTimeStart(const std::string &submitTimeStart);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getSubmitOrder() const;
	void setSubmitOrder(const std::string &submitOrder);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::vector<std::string> getJobNames() const;
	void setJobNames(const std::vector<std::string> &jobNames);
	std::vector<std::string> getUsers() const;
	void setUsers(const std::vector<std::string> &users);
	std::string getStartOrder() const;
	void setStartOrder(const std::string &startOrder);
	std::string getSubmitTimeEnd() const;
	void setSubmitTimeEnd(const std::string &submitTimeEnd);
	std::vector<std::string> getQueues() const;
	void setQueues(const std::vector<std::string> &queues);
	std::vector<std::string> getJobIds() const;
	void setJobIds(const std::vector<std::string> &jobIds);

private:
	std::string submitTimeStart_;
	long pageNumber_;
	std::string regionId_;
	long pageSize_;
	std::string state_;
	std::string submitOrder_;
	std::string clusterId_;
	std::vector<std::string> jobNames_;
	std::vector<std::string> users_;
	std::string startOrder_;
	std::string submitTimeEnd_;
	std::vector<std::string> queues_;
	std::vector<std::string> jobIds_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTSERVERLESSJOBSREQUEST_H_
