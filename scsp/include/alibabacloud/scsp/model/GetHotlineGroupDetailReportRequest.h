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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETHOTLINEGROUPDETAILREPORTREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_GETHOTLINEGROUPDETAILREPORTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT GetHotlineGroupDetailReportRequest : public RpcServiceRequest
			{

			public:
				GetHotlineGroupDetailReportRequest();
				~GetHotlineGroupDetailReportRequest();

				std::vector<long> getDepIds()const;
				void setDepIds(const std::vector<long>& depIds);
				long getEndDate()const;
				void setEndDate(long endDate);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::vector<long> getGroupIds()const;
				void setGroupIds(const std::vector<long>& groupIds);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				long getStartDate()const;
				void setStartDate(long startDate);

            private:
				std::vector<long> depIds_;
				long endDate_;
				std::string instanceId_;
				std::vector<long> groupIds_;
				int pageSize_;
				int currentPage_;
				long startDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETHOTLINEGROUPDETAILREPORTREQUEST_H_