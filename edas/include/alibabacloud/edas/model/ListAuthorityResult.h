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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTAUTHORITYRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTAUTHORITYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ListAuthorityResult : public ServiceResult
			{
			public:
				struct Authority
				{
					struct Action
					{
						std::string description;
						std::string code;
						std::string groupId;
						std::string name;
					};
					std::string description;
					std::vector<Authority::Action> actionList;
					std::string groupId;
					std::string name;
				};


				ListAuthorityResult();
				explicit ListAuthorityResult(const std::string &payload);
				~ListAuthorityResult();
				std::string getMessage()const;
				std::vector<Authority> getAuthorityList()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Authority> authorityList_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTAUTHORITYRESULT_H_