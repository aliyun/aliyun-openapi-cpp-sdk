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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBETRANSFERHISTORYRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBETRANSFERHISTORYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/clickhouse/ClickhouseExport.h>

namespace AlibabaCloud
{
	namespace Clickhouse
	{
		namespace Model
		{
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DescribeTransferHistoryResult : public ServiceResult
			{
			public:
				struct HistoryDetail
				{
					std::string targetDBCluster;
					std::string status;
					long unsyncedBytes;
					std::string progress;
					std::string targetControlVersion;
					std::string sourceDBCluster;
					std::string disableWriteWindows;
					std::string sourceControlVersion;
					std::string subJobStatus;
					long bytesPerMinute;
					long unsyncedParts;
					std::string subJob;
					double partsPerMinute;
				};


				DescribeTransferHistoryResult();
				explicit DescribeTransferHistoryResult(const std::string &payload);
				~DescribeTransferHistoryResult();
				std::vector<HistoryDetail> getHistoryDetails()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<HistoryDetail> historyDetails_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DESCRIBETRANSFERHISTORYRESULT_H_