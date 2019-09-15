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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGITEMSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGITEMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeLogItemsRequest : public RpcServiceRequest
			{

			public:
				DescribeLogItemsRequest();
				~DescribeLogItemsRequest();

				int getPortSnapshotOffset()const;
				void setPortSnapshotOffset(int portSnapshotOffset);
				int getNetworkOffset()const;
				void setNetworkOffset(int networkOffset);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getProcessOffset()const;
				void setProcessOffset(int processOffset);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getCrackOffset()const;
				void setCrackOffset(int crackOffset);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				int getLoginOffset()const;
				void setLoginOffset(int loginOffset);
				int getProcessSnapshotOffset()const;
				void setProcessSnapshotOffset(int processSnapshotOffset);
				std::string getQuery()const;
				void setQuery(const std::string& query);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getCurrentPage()const;
				void setCurrentPage(const std::string& currentPage);
				int getAccountSnapshotOffset()const;
				void setAccountSnapshotOffset(int accountSnapshotOffset);

            private:
				int portSnapshotOffset_;
				int networkOffset_;
				std::string startTime_;
				int processOffset_;
				std::string sourceIp_;
				int crackOffset_;
				std::string pageSize_;
				int loginOffset_;
				int processSnapshotOffset_;
				std::string query_;
				std::string endTime_;
				std::string currentPage_;
				int accountSnapshotOffset_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGITEMSREQUEST_H_