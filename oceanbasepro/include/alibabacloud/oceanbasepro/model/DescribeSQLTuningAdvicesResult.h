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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLTUNINGADVICESRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLTUNINGADVICESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeSQLTuningAdvicesResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Plan
					{
						long executions;
						float avgCpuTime;
						std::string planHash;
						float timeoutPercentage;
						float avgConcurrencyWaitTime;
						long firstLoadTimeUs;
						float avgDiskWrites;
						float avgUserIoWaitTime;
						long planSize;
						std::string serverSn;
						std::string outlineData;
						std::string planType;
						long obDbId;
						float hitPercentage;
						float avgBufferGets;
						float execPs;
						float delayedLargeQueryPercentage;
						bool tableScan;
						float largeQueryPercentage;
						long schemaVersion;
						long planId;
						std::string firstLoadTime;
						float avgRowProcessed;
						long mergedVersion;
						bool hitDiagnosis;
						std::string uid;
						float avgApplicationWaitTime;
						long collectTimeUs;
						float avgElapsedTime;
						long obServerId;
						long outlineId;
						float avgDiskReads;
					};
					struct ColumnsItem
					{
						std::string columnName;
						double ndv;
						std::string minValue;
						std::string maxValue;
					};
					std::string type;
					std::string columnNames;
					std::string table;
					std::string localityType;
					std::vector<DataItem::ColumnsItem> columns;
					std::string dbName;
					Plan plan;
				};


				DescribeSQLTuningAdvicesResult();
				explicit DescribeSQLTuningAdvicesResult(const std::string &payload);
				~DescribeSQLTuningAdvicesResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLTUNINGADVICESRESULT_H_