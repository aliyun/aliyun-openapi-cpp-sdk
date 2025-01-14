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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTAPPROVALSREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTAPPROVALSREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListApprovalsRequest : public RpcServiceRequest {
public:
	ListApprovalsRequest();
	~ListApprovalsRequest();
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getSchemaId() const;
	void setSchemaId(const std::string &schemaId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	long getCreateEndTime() const;
	void setCreateEndTime(long createEndTime);
	std::string getOperatorUserId() const;
	void setOperatorUserId(const std::string &operatorUserId);
	std::string getSchemaName() const;
	void setSchemaName(const std::string &schemaName);
	std::string getPolicyType() const;
	void setPolicyType(const std::string &policyType);
	std::string getProcessName() const;
	void setProcessName(const std::string &processName);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::vector<std::string> getApprovalIds() const;
	void setApprovalIds(const std::vector<std::string> &approvalIds);
	long getCreateStartTime() const;
	void setCreateStartTime(long createStartTime);
	std::string getProcessId() const;
	void setProcessId(const std::string &processId);
	std::string getCreatorDepartment() const;
	void setCreatorDepartment(const std::string &creatorDepartment);
	std::string getOperatorUsername() const;
	void setOperatorUsername(const std::string &operatorUsername);
	std::string getCreatorUserId() const;
	void setCreatorUserId(const std::string &creatorUserId);
	std::string getCreatorUsername() const;
	void setCreatorUsername(const std::string &creatorUsername);
	std::vector<std::string> getStatuses() const;
	void setStatuses(const std::vector<std::string> &statuses);
	std::string getCreatorDevTag() const;
	void setCreatorDevTag(const std::string &creatorDevTag);

private:
	std::string sourceIp_;
	std::string schemaId_;
	long pageSize_;
	long createEndTime_;
	std::string operatorUserId_;
	std::string schemaName_;
	std::string policyType_;
	std::string processName_;
	long currentPage_;
	std::vector<std::string> approvalIds_;
	long createStartTime_;
	std::string processId_;
	std::string creatorDepartment_;
	std::string operatorUsername_;
	std::string creatorUserId_;
	std::string creatorUsername_;
	std::vector<std::string> statuses_;
	std::string creatorDevTag_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTAPPROVALSREQUEST_H_
