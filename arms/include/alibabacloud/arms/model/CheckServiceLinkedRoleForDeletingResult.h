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

#ifndef ALIBABACLOUD_ARMS_MODEL_CHECKSERVICELINKEDROLEFORDELETINGRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_CHECKSERVICELINKEDROLEFORDELETINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CheckServiceLinkedRoleForDeletingResult : public ServiceResult
			{
			public:
				struct RoleUsagesItem
				{
					std::string region;
					std::vector<std::string> resources;
				};


				CheckServiceLinkedRoleForDeletingResult();
				explicit CheckServiceLinkedRoleForDeletingResult(const std::string &payload);
				~CheckServiceLinkedRoleForDeletingResult();
				bool getDeletable()const;
				std::vector<RoleUsagesItem> getRoleUsages()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool deletable_;
				std::vector<RoleUsagesItem> roleUsages_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CHECKSERVICELINKEDROLEFORDELETINGRESULT_H_