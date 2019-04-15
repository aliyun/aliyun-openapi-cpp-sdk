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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGITEMSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGITEMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeLogItemsResult : public ServiceResult
			{
			public:
				struct LogsListItem
				{
					struct MContentsItem
					{
						std::string mKey;
						std::string mValue;
					};
					std::string mLogTime;
					std::string logSource;
					std::vector<LogsListItem::MContentsItem> mContents;
					std::string logSourceId;
				};


				DescribeLogItemsResult();
				explicit DescribeLogItemsResult(const std::string &payload);
				~DescribeLogItemsResult();
				int getSetPageSize()const;
				std::vector<LogsListItem> getLogsList()const;
				int getCrackOffset()const;
				int getAccountSnapshotTotalCount()const;
				int getProcessOffset()const;
				int getNetworkOffset()const;
				int getTotalCount()const;
				int getProcessSnapshotOffset()const;
				int getLoginTotalCount()const;
				int getCurrentPage()const;
				int getPortSnapshotOffset()const;
				int getNetworkTotalCount()const;
				int getAccountSnapshotOffset()const;
				int getCrackTotalCount()const;
				int getProcessSnapshotTotalCount()const;
				int getPortSnapshotTotalCount()const;
				int getProcessTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int setPageSize_;
				std::vector<LogsListItem> logsList_;
				int crackOffset_;
				int accountSnapshotTotalCount_;
				int processOffset_;
				int networkOffset_;
				int totalCount_;
				int processSnapshotOffset_;
				int loginTotalCount_;
				int currentPage_;
				int portSnapshotOffset_;
				int networkTotalCount_;
				int accountSnapshotOffset_;
				int crackTotalCount_;
				int processSnapshotTotalCount_;
				int portSnapshotTotalCount_;
				int processTotalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGITEMSRESULT_H_