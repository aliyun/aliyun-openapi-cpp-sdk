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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTDATASOURCEFEATUREVIEWSRESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTDATASOURCEFEATUREVIEWSRESULT_H_

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
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListDatasourceFeatureViewsResult : public ServiceResult
			{
			public:
				struct TotalUsageStatistics
				{
					struct TotalReadWriteCountItem
					{
						long totalReadCount;
						long totalWriteCount;
						std::string date;
					};
					double totalDiskUsage;
					std::vector<TotalReadWriteCountItem> totalReadWriteCount;
					double totalMemoryUsage;
				};
				struct DatasourceFeatureViews
				{
					struct UsageStatistics
					{
						struct ReadWriteCountItem
						{
							long writeCount;
							std::string date;
							long readCount;
						};
						std::vector<ReadWriteCountItem> readWriteCount;
						double diskUsage;
						long rowCount;
						double memoryUsage;
					};
					std::string featureEntityName;
					std::string type;
					std::string featureViewId;
					std::string projectName;
					std::string config;
					UsageStatistics usageStatistics;
					int tTL;
					std::string name;
				};


				ListDatasourceFeatureViewsResult();
				explicit ListDatasourceFeatureViewsResult(const std::string &payload);
				~ListDatasourceFeatureViewsResult();
				std::vector<DatasourceFeatureViews> getFeatureViews()const;
				long getTotalCount()const;
				std::string getRequestId()const;
				TotalUsageStatistics getTotalUsageStatistics()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DatasourceFeatureViews> featureViews_;
				long totalCount_;
				std::string requestId_;
				TotalUsageStatistics totalUsageStatistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTDATASOURCEFEATUREVIEWSRESULT_H_