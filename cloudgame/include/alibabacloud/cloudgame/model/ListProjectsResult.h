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

#ifndef ALIBABACLOUD_CLOUDGAME_MODEL_LISTPROJECTSRESULT_H_
#define ALIBABACLOUD_CLOUDGAME_MODEL_LISTPROJECTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudgame/CloudgameExport.h>

namespace AlibabaCloud
{
	namespace Cloudgame
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDGAME_EXPORT ListProjectsResult : public ServiceResult
			{
			public:
				struct DataListItem
				{
					std::string highDefinitionCodeRate;
					std::string highDefinitionResolution;
					std::string projectName;
					std::string standardResolution;
					std::string projectId;
					std::string highestCodeRate;
					int concurrencyLimitNumber;
					std::string standardCodeRate;
					std::string highestResolution;
				};


				ListProjectsResult();
				explicit ListProjectsResult(const std::string &payload);
				~ListProjectsResult();
				std::vector<DataListItem> getDataList()const;
				int getPageSize()const;
				int getCurrentPage()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataListItem> dataList_;
				int pageSize_;
				int currentPage_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDGAME_MODEL_LISTPROJECTSRESULT_H_