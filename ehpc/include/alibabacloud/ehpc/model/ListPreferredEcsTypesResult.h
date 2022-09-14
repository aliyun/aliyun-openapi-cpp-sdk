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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTPREFERREDECSTYPESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTPREFERREDECSTYPESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListPreferredEcsTypesResult : public ServiceResult
			{
			public:
				struct SeriesInfo
				{
					struct Roles
					{
						std::vector<std::string> compute;
						std::vector<std::string> login;
						std::vector<std::string> manager;
					};
					std::string seriesName;
					std::string seriesId;
					Roles roles;
				};


				ListPreferredEcsTypesResult();
				explicit ListPreferredEcsTypesResult(const std::string &payload);
				~ListPreferredEcsTypesResult();
				std::vector<SeriesInfo> getSeries()const;
				bool getSupportSpotInstance()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SeriesInfo> series_;
				bool supportSpotInstance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTPREFERREDECSTYPESRESULT_H_