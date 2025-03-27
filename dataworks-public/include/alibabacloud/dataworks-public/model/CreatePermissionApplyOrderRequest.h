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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEPERMISSIONAPPLYORDERREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEPERMISSIONAPPLYORDERREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreatePermissionApplyOrderRequest : public RpcServiceRequest {
public:
	struct ApplyObject {
		struct ColumnMetaList {
			std::string name;
			std::string actions;
		};
		std::vector<ColumnMetaList> columnMetaList;
		std::string name;
		std::string actions;
	};
	CreatePermissionApplyOrderRequest();
	~CreatePermissionApplyOrderRequest();
	std::string getApplyUserIds() const;
	void setApplyUserIds(const std::string &applyUserIds);
	long getDeadline() const;
	void setDeadline(long deadline);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);
	std::string getApplyReason() const;
	void setApplyReason(const std::string &applyReason);
	std::string getMaxComputeProjectName() const;
	void setMaxComputeProjectName(const std::string &maxComputeProjectName);
	std::vector<ApplyObject> getApplyObject() const;
	void setApplyObject(const std::vector<ApplyObject> &applyObject);
	std::string getCatalogName() const;
	void setCatalogName(const std::string &catalogName);
	std::string getApplyType() const;
	void setApplyType(const std::string &applyType);
	int getWorkspaceId() const;
	void setWorkspaceId(int workspaceId);
	int getOrderType() const;
	void setOrderType(int orderType);

private:
	std::string applyUserIds_;
	long deadline_;
	std::string engineType_;
	std::string applyReason_;
	std::string maxComputeProjectName_;
	std::vector<ApplyObject> applyObject_;
	std::string catalogName_;
	std::string applyType_;
	int workspaceId_;
	int orderType_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEPERMISSIONAPPLYORDERREQUEST_H_
