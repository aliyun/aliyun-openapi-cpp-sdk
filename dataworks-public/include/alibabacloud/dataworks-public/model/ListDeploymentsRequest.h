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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTDEPLOYMENTSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTDEPLOYMENTSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListDeploymentsRequest : public RpcServiceRequest {
public:
	ListDeploymentsRequest();
	~ListDeploymentsRequest();
	std::string getCreator() const;
	void setCreator(const std::string &creator);
	long getEndCreateTime() const;
	void setEndCreateTime(long endCreateTime);
	std::string getProjectIdentifier() const;
	void setProjectIdentifier(const std::string &projectIdentifier);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getExecutor() const;
	void setExecutor(const std::string &executor);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getEndExecuteTime() const;
	void setEndExecuteTime(long endExecuteTime);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	long getProjectId() const;
	void setProjectId(long projectId);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string creator_;
	long endCreateTime_;
	std::string projectIdentifier_;
	int pageNumber_;
	std::string executor_;
	int pageSize_;
	long endExecuteTime_;
	std::string keyword_;
	long projectId_;
	int status_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTDEPLOYMENTSREQUEST_H_
