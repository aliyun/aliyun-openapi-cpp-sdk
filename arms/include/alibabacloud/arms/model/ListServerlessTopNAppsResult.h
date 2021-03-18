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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTSERVERLESSTOPNAPPSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTSERVERLESSTOPNAPPSRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT ListServerlessTopNAppsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					float rt;
					std::string region;
					int error;
					std::string pid;
					int count;
					std::string name;
				};


				ListServerlessTopNAppsResult();
				explicit ListServerlessTopNAppsResult(const std::string &payload);
				~ListServerlessTopNAppsResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTSERVERLESSTOPNAPPSRESULT_H_