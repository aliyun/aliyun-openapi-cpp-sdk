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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEPARTITIONSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEPARTITIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListTablePartitionsRequest : public RpcServiceRequest
			{

			public:
				ListTablePartitionsRequest();
				~ListTablePartitionsRequest();

				std::string getDatabaseName()const;
				void setDatabaseName(const std::string& databaseName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getSort()const;
				void setSort(const std::string& sort);
				std::string getTableName()const;
				void setTableName(const std::string& tableName);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getOrder()const;
				void setOrder(const std::string& order);

            private:
				std::string databaseName_;
				int pageSize_;
				std::string clusterId_;
				std::string sort_;
				std::string tableName_;
				int pageNumber_;
				std::string order_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTTABLEPARTITIONSREQUEST_H_