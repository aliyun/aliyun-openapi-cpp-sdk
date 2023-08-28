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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTPROJECTSRESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTPROJECTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>

namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		namespace Model
		{
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListProjectsResult : public ServiceResult
			{
			public:
				struct ProjectsItem
				{
					std::string onlineDatasourceType;
					std::string owner;
					std::string description;
					std::string projectId;
					std::string offlineDatasourceName;
					std::string gmtModifiedTime;
					std::string name;
					std::string offlineDatasourceId;
					std::string onlineDatasourceName;
					int featureViewCount;
					int offlineLifecycle;
					int modelCount;
					std::string offlineDatasourceType;
					int featureEntityCount;
					std::string gmtCreateTime;
					std::string onlineDatasourceId;
				};


				ListProjectsResult();
				explicit ListProjectsResult(const std::string &payload);
				~ListProjectsResult();
				long getTotalCount()const;
				std::vector<ProjectsItem> getProjects()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<ProjectsItem> projects_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTPROJECTSRESULT_H_