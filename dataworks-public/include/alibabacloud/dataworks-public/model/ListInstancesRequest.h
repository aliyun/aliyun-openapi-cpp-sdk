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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINSTANCESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINSTANCESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListInstancesRequest : public RpcServiceRequest {
public:
	ListInstancesRequest();
	~ListInstancesRequest();
	std::string getProjectEnv() const;
	void setProjectEnv(const std::string &projectEnv);
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getBizName() const;
	void setBizName(const std::string &bizName);
	std::string getBeginBizdate() const;
	void setBeginBizdate(const std::string &beginBizdate);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getEndBizdate() const;
	void setEndBizdate(const std::string &endBizdate);
	long getDagId() const;
	void setDagId(long dagId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getNodeName() const;
	void setNodeName(const std::string &nodeName);
	std::string getProgramType() const;
	void setProgramType(const std::string &programType);
	std::string getBizdate() const;
	void setBizdate(const std::string &bizdate);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getNodeId() const;
	void setNodeId(long nodeId);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string projectEnv_;
	std::string owner_;
	std::string bizName_;
	std::string beginBizdate_;
	std::string orderBy_;
	std::string endBizdate_;
	long dagId_;
	int pageNumber_;
	std::string nodeName_;
	std::string programType_;
	std::string bizdate_;
	int pageSize_;
	long nodeId_;
	long projectId_;
	std::string status_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTINSTANCESREQUEST_H_
