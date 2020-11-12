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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_GETPARTITIONRESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_GETPARTITIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT GetPartitionResult : public ServiceResult
			{
			public:
				struct PartitionModel
				{
					struct StorageDescriptorModel
					{
						struct SerDeInfoModel
						{
							std::string serializationLib;
							std::string parameters;
							std::string name;
						};
						struct FieldSchemaModel
						{
							std::string comment;
							std::string type;
							std::string name;
						};
						SerDeInfoModel serDeInfoModel;
						std::vector<FieldSchemaModel> cols;
						std::string parameters;
						std::string inputFormat;
						std::string outputFormat;
						std::string location;
					};
					std::string tableName;
					std::string parameters;
					long createTime;
					std::vector<std::string> values;
					StorageDescriptorModel storageDescriptorModel;
					std::string dbName;
				};


				GetPartitionResult();
				explicit GetPartitionResult(const std::string &payload);
				~GetPartitionResult();
				std::string getMessage()const;
				PartitionModel getPartitionModel()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				PartitionModel partitionModel_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_GETPARTITIONRESULT_H_