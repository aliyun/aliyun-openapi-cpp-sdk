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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeWorkflowRequest : public RpcServiceRequest {
public:
	DescribeWorkflowRequest();
	~DescribeWorkflowRequest();
	std::string getPageNum() const;
	void setPageNum(const std::string &pageNum);
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getId() const;
	void setId(const std::string &id);
	std::string getWorkFlowId() const;
	void setWorkFlowId(const std::string &workFlowId);
	std::string getBusinessId() const;
	void setBusinessId(const std::string &businessId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getWorkFlowName() const;
	void setWorkFlowName(const std::string &workFlowName);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getAliUid() const;
	void setAliUid(const std::string &aliUid);

private:
	std::string pageNum_;
	std::string startDate_;
	std::string ensRegionId_;
	std::string id_;
	std::string workFlowId_;
	std::string businessId_;
	std::string instanceId_;
	std::string endDate_;
	std::string status_;
	std::string workFlowName_;
	std::string pageSize_;
	std::string aliUid_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEWORKFLOWREQUEST_H_
