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

#ifndef ALIBABACLOUD_RESOURCESHARING_MODEL_GETPERMISSIONRESULT_H_
#define ALIBABACLOUD_RESOURCESHARING_MODEL_GETPERMISSIONRESULT_H_

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
			class ALIBABACLOUD_RESOURCESHARING_EXPORT GetPermissionResult : public ServiceResult
			{
			public:
				struct Permission
				{
					std::string permissionName;
					bool defaultVersion;
					std::string createTime;
					std::string permission;
					std::string updateTime;
					std::string resourceType;
					bool defaultPermission;
					std::string permissionVersion;
				};


				GetPermissionResult();
				explicit GetPermissionResult(const std::string &payload);
				~GetPermissionResult();
				Permission getPermission()const;

			protected:
				void parse(const std::string &payload);
			private:
				Permission permission_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCESHARING_MODEL_GETPERMISSIONRESULT_H_