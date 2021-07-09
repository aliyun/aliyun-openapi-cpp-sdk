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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTPIPELINESREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTPIPELINESREQUEST_H_

#include <alibabacloud/devops-rdc/Devops_rdcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops_rdc {
namespace Model {
class ALIBABACLOUD_DEVOPS_RDC_EXPORT ListPipelinesRequest : public RpcServiceRequest {
public:
	ListPipelinesRequest();
	~ListPipelinesRequest();
	std::string getPipelineName() const;
	void setPipelineName(const std::string &pipelineName);
	std::string getResultStatusList() const;
	void setResultStatusList(const std::string &resultStatusList);
	std::string getCreators() const;
	void setCreators(const std::string &creators);
	std::string getExecuteEndTime() const;
	void setExecuteEndTime(const std::string &executeEndTime);
	std::string getUserPk() const;
	void setUserPk(const std::string &userPk);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	std::string getCreateStartTime() const;
	void setCreateStartTime(const std::string &createStartTime);
	std::string getOperators() const;
	void setOperators(const std::string &operators);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getExecuteStartTime() const;
	void setExecuteStartTime(const std::string &executeStartTime);
	int getPageStart() const;
	void setPageStart(int pageStart);
	std::string getCreateEndTime() const;
	void setCreateEndTime(const std::string &createEndTime);

private:
	std::string pipelineName_;
	std::string resultStatusList_;
	std::string creators_;
	std::string executeEndTime_;
	std::string userPk_;
	std::string orgId_;
	std::string createStartTime_;
	std::string operators_;
	int pageSize_;
	std::string executeStartTime_;
	int pageStart_;
	std::string createEndTime_;
};
} // namespace Model
} // namespace Devops_rdc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_LISTPIPELINESREQUEST_H_
