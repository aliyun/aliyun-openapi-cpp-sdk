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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTNODESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTNODESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListNodesRequest : public RpcServiceRequest {
public:
	ListNodesRequest();
	~ListNodesRequest();
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getProjectEnv() const;
	void setProjectEnv(const std::string &projectEnv);
	std::string getBizName() const;
	void setBizName(const std::string &bizName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getNodeName() const;
	void setNodeName(const std::string &nodeName);
	std::string getProgramType() const;
	void setProgramType(const std::string &programType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSchedulerType() const;
	void setSchedulerType(const std::string &schedulerType);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	std::string owner_;
	std::string projectEnv_;
	std::string bizName_;
	int pageNumber_;
	std::string nodeName_;
	std::string programType_;
	int pageSize_;
	std::string schedulerType_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTNODESREQUEST_H_
