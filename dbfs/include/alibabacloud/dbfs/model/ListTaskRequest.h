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

#ifndef ALIBABACLOUD_DBFS_MODEL_LISTTASKREQUEST_H_
#define ALIBABACLOUD_DBFS_MODEL_LISTTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT ListTaskRequest : public RpcServiceRequest
			{

			public:
				ListTaskRequest();
				~ListTaskRequest();

				std::string getSortType()const;
				void setSortType(const std::string& sortType);
				std::string getFilterValue()const;
				void setFilterValue(const std::string& filterValue);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getFilterKey()const;
				void setFilterKey(const std::string& filterKey);
				std::string getSortKey()const;
				void setSortKey(const std::string& sortKey);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				std::string sortType_;
				std::string filterValue_;
				int pageNumber_;
				std::string filterKey_;
				std::string sortKey_;
				std::string regionId_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_LISTTASKREQUEST_H_