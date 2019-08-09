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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTORELISTDATABASESRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTORELISTDATABASESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT MetastoreListDatabasesResult : public ServiceResult
			{
			public:
				struct Database
				{
					std::string status;
					std::string owner;
					std::string databaseType;
					std::string databaseName;
					long gmtModified;
					std::string ownerType;
					std::string databaseParameters;
					long gmtCreate;
					std::string clusterBizId;
					std::string databaseComment;
					std::string clusterName;
					std::string id;
					std::string locationType;
					std::string location;
				};


				MetastoreListDatabasesResult();
				explicit MetastoreListDatabasesResult(const std::string &payload);
				~MetastoreListDatabasesResult();
				std::vector<std::string> getDbNames()const;
				int getTotalCount()const;
				std::string getDescription()const;
				std::vector<Database> getDatabaseList()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> dbNames_;
				int totalCount_;
				std::string description_;
				std::vector<Database> databaseList_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_METASTORELISTDATABASESRESULT_H_