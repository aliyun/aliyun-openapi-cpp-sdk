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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEDATABASERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEDATABASERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT MetastoreDescribeDatabaseResult : public ServiceResult
			{
			public:
				struct Database
				{
					std::string status;
					std::string owner;
					std::string databaseType;
					std::string projectName;
					std::string databaseName;
					long gmtModified;
					std::string projectId;
					std::string ownerType;
					std::string databaseParameters;
					long gmtCreate;
					std::string clusterBizId;
					std::string dataSourceType;
					std::string databaseComment;
					std::string clusterName;
					std::string id;
					std::string locationType;
					std::string dataSourceId;
					std::string location;
				};
				struct Parameter
				{
					std::string value;
					std::string key;
				};


				MetastoreDescribeDatabaseResult();
				explicit MetastoreDescribeDatabaseResult(const std::string &payload);
				~MetastoreDescribeDatabaseResult();
				std::string getLocationUri()const;
				std::vector<Parameter> getParameters()const;
				std::string getDescription()const;
				Database getDatabase()const;
				std::string getDbName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string locationUri_;
				std::vector<Parameter> parameters_;
				std::string description_;
				Database database_;
				std::string dbName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_METASTOREDESCRIBEDATABASERESULT_H_