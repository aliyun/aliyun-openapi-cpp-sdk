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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_GETSAVEDQUERYRESULT_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_GETSAVEDQUERYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcecenter/ResourceCenterExport.h>

namespace AlibabaCloud
{
	namespace ResourceCenter
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCECENTER_EXPORT GetSavedQueryResult : public ServiceResult
			{
			public:
				struct SavedQuery
				{
					std::string description;
					std::string expression;
					std::string createTime;
					std::string queryId;
					std::string updateTime;
					std::string name;
				};


				GetSavedQueryResult();
				explicit GetSavedQueryResult(const std::string &payload);
				~GetSavedQueryResult();
				SavedQuery getSavedQuery()const;

			protected:
				void parse(const std::string &payload);
			private:
				SavedQuery savedQuery_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_GETSAVEDQUERYRESULT_H_