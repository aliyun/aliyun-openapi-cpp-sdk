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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListPermissionApplyOrdersRequest : public RpcServiceRequest {
public:
	ListPermissionApplyOrdersRequest();
	~ListPermissionApplyOrdersRequest();
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	int getQueryType() const;
	void setQueryType(int queryType);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);
	std::string getMaxComputeProjectName() const;
	void setMaxComputeProjectName(const std::string &maxComputeProjectName);
	std::string getCatalogName() const;
	void setCatalogName(const std::string &catalogName);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getFlowStatus() const;
	void setFlowStatus(int flowStatus);
	std::string getApplyType() const;
	void setApplyType(const std::string &applyType);
	int getWorkspaceId() const;
	void setWorkspaceId(int workspaceId);
	int getOrderType() const;
	void setOrderType(int orderType);

private:
	long startTime_;
	int pageNum_;
	int pageSize_;
	std::string tableName_;
	int queryType_;
	std::string engineType_;
	std::string maxComputeProjectName_;
	std::string catalogName_;
	long endTime_;
	int flowStatus_;
	std::string applyType_;
	int workspaceId_;
	int orderType_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_
