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

#ifndef ALIBABACLOUD_FOAS_MODEL_LISTCLUSTERRESULT_H_
#define ALIBABACLOUD_FOAS_MODEL_LISTCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT ListClusterResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					long gmtCreate;
					std::string description;
					std::string zoneId;
					std::string ownerId;
					std::string clusterId;
					std::string state;
					std::string displayName;
					long gmtModified;
					std::string _operator;
					std::string regionId;
				};


				ListClusterResult();
				explicit ListClusterResult(const std::string &payload);
				~ListClusterResult();
				long getTotalCount()const;
				int getTotalPage()const;
				int getPageSize()const;
				std::vector<Cluster> getClusters()const;
				int getPageIndex()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int totalPage_;
				int pageSize_;
				std::vector<Cluster> clusters_;
				int pageIndex_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_LISTCLUSTERRESULT_H_