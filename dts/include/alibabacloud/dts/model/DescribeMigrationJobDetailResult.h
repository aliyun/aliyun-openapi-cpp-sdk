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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBDETAILRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeMigrationJobDetailResult : public ServiceResult
			{
			public:
				struct StructureInitializationDetail
				{
					struct StructureInitializationDetail1
					{
						std::string status;
						std::string objectType;
						std::string sourceOwnerDBName;
						std::string objectDefinition;
						std::string errorMessage;
						std::string destinationOwnerDBName;
						std::string objectName;
					};
					std::string status;
					std::string objectType;
					std::vector<StructureInitializationDetail::StructureInitializationDetail1> constraintList;
					std::string sourceOwnerDBName;
					std::string objectDefinition;
					std::string errorMessage;
					std::string destinationOwnerDBName;
					std::string objectName;
				};
				struct DataInitializationDetail
				{
					std::string status;
					std::string tableName;
					std::string totalRowNum;
					std::string migrationTime;
					std::string sourceOwnerDBName;
					std::string errorMessage;
					std::string destinationOwnerDBName;
					std::string finishRowNum;
				};
				struct DataSynchronizationDetail
				{
					std::string status;
					std::string tableName;
					std::string sourceOwnerDBName;
					std::string errorMessage;
					std::string destinationOwnerDBName;
				};


				DescribeMigrationJobDetailResult();
				explicit DescribeMigrationJobDetailResult(const std::string &payload);
				~DescribeMigrationJobDetailResult();
				long getTotalRecordCount()const;
				std::vector<DataSynchronizationDetail> getDataSynchronizationDetailList()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<DataInitializationDetail> getDataInitializationDetailList()const;
				std::vector<StructureInitializationDetail> getStructureInitializationDetailList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				std::vector<DataSynchronizationDetail> dataSynchronizationDetailList_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<DataInitializationDetail> dataInitializationDetailList_;
				std::vector<StructureInitializationDetail> structureInitializationDetailList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBDETAILRESULT_H_