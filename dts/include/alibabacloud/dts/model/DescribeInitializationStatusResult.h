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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEINITIALIZATIONSTATUSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEINITIALIZATIONSTATUSRESULT_H_

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
			class ALIBABACLOUD_DTS_EXPORT DescribeInitializationStatusResult : public ServiceResult
			{
			public:
				struct DataInitializationDetail
				{
					std::string status;
					std::string tableName;
					std::string totalRowNum;
					std::string usedTime;
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
				struct StructureInitializationDetail
				{
					struct StructureInitializationDetail1
					{
						std::string status;
						std::string objectType;
						std::string objectDefinition;
						std::string sourceOwnerDBName;
						std::string errorMessage;
						std::string destinationOwnerDBName;
						std::string objectName;
					};
					std::string status;
					std::string objectType;
					std::vector<StructureInitializationDetail::StructureInitializationDetail1> constraints;
					std::string objectDefinition;
					std::string sourceOwnerDBName;
					std::string errorMessage;
					std::string destinationOwnerDBName;
					std::string objectName;
				};


				DescribeInitializationStatusResult();
				explicit DescribeInitializationStatusResult(const std::string &payload);
				~DescribeInitializationStatusResult();
				std::vector<StructureInitializationDetail> getStructureInitializationDetails()const;
				std::vector<DataInitializationDetail> getDataInitializationDetails()const;
				std::string getErrMessage()const;
				std::string getSuccess()const;
				std::vector<DataSynchronizationDetail> getDataSynchronizationDetails()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StructureInitializationDetail> structureInitializationDetails_;
				std::vector<DataInitializationDetail> dataInitializationDetails_;
				std::string errMessage_;
				std::string success_;
				std::vector<DataSynchronizationDetail> dataSynchronizationDetails_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEINITIALIZATIONSTATUSRESULT_H_