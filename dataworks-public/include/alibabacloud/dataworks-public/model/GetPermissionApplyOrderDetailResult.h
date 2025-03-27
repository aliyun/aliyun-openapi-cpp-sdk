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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPERMISSIONAPPLYORDERDETAILRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPERMISSIONAPPLYORDERDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetPermissionApplyOrderDetailResult : public ServiceResult
			{
			public:
				struct ApplyOrderDetail
				{
					struct ApproveContent
					{
						struct ProjectMeta
						{
							struct ObjectMetaListItem
							{
								struct ColumnMetaListItem
								{
									std::string columnName;
									std::string securityLevel;
									std::string columnComment;
									std::vector<std::string> columnActions;
								};
								std::vector<ObjectMetaListItem::ColumnMetaListItem> columnMetaList;
								std::vector<std::string> actions;
								std::string objectName;
							};
							std::string maxComputeProjectName;
							int workspaceId;
							std::vector<ObjectMetaListItem> objectMetaList;
						};
						int orderType;
						long deadline;
						std::string applyReason;
						ProjectMeta projectMeta;
					};
					struct ApproveAccountListItem
					{
						std::string baseId;
					};
					struct GranteeObjectListItem
					{
						int granteeType;
						std::string granteeId;
						std::string granteeName;
						int granteeTypeSub;
					};
					ApproveContent approveContent;
					std::vector<ApproveAccountListItem> approveAccountList;
					long applyTimestamp;
					std::string flowId;
					std::string applyBaseId;
					std::vector<GranteeObjectListItem> granteeObjectList;
					int flowStatus;
				};


				GetPermissionApplyOrderDetailResult();
				explicit GetPermissionApplyOrderDetailResult(const std::string &payload);
				~GetPermissionApplyOrderDetailResult();
				ApplyOrderDetail getApplyOrderDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				ApplyOrderDetail applyOrderDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETPERMISSIONAPPLYORDERDETAILRESULT_H_