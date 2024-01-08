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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_LISTPERMISSIONVERSIONSRESULT_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_LISTPERMISSIONVERSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcesharing/ResourceSharingExport.h>

namespace AlibabaCloud
{
	namespace ResourceSharing
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCESHARING_EXPORT ListPermissionVersionsResult : public ServiceResult
			{
			public:
				struct Permission
				{
					std::string permissionName;
					bool defaultVersion;
					std::string createTime;
					std::string updateTime;
					std::string resourceType;
					bool defaultPermission;
					std::string permissionVersion;
				};


				ListPermissionVersionsResult();
				explicit ListPermissionVersionsResult(const std::string &payload);
				~ListPermissionVersionsResult();
				std::string getNextToken()const;
				std::vector<Permission> getPermissions()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Permission> permissions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_LISTPERMISSIONVERSIONSRESULT_H_