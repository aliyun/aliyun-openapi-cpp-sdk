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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_CREATETABLEREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_CREATETABLEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT CreateTableRequest : public RpcServiceRequest
			{

			public:
				CreateTableRequest();
				~CreateTableRequest();

				std::string getTableType()const;
				void setTableType(const std::string& tableType);
				std::string getViewOriginalText()const;
				void setViewOriginalText(const std::string& viewOriginalText);
				Struct getStorageDescriptor()const;
				void setStorageDescriptor(const Struct& storageDescriptor);
				Array getPartitionKeys()const;
				void setPartitionKeys(const Array& partitionKeys);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::string getViewExpandedText()const;
				void setViewExpandedText(const std::string& viewExpandedText);
				std::string getTableName()const;
				void setTableName(const std::string& tableName);
				std::string getParameters()const;
				void setParameters(const std::string& parameters);

            private:
				std::string tableType_;
				std::string viewOriginalText_;
				Struct storageDescriptor_;
				Array partitionKeys_;
				std::string dbName_;
				std::string viewExpandedText_;
				std::string tableName_;
				std::string parameters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_CREATETABLEREQUEST_H_