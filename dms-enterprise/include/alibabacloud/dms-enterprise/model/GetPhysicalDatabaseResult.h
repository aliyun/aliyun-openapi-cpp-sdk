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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPHYSICALDATABASERESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPHYSICALDATABASERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetPhysicalDatabaseResult : public ServiceResult
			{
			public:
				struct Database
				{
					std::string instanceId;
					std::string searchName;
					int port;
					std::string databaseId;
					std::string host;
					std::string encoding;
					std::string envType;
					std::string dbType;
					std::string sid;
					std::string dbaName;
					std::string dbaId;
					std::string state;
					std::string instanceAlias;
					std::string catalogName;
					std::vector<std::string> ownerNameList;
					std::string schemaName;
					std::vector<std::string> ownerIdList;
				};


				GetPhysicalDatabaseResult();
				explicit GetPhysicalDatabaseResult(const std::string &payload);
				~GetPhysicalDatabaseResult();
				Database getDatabase()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Database database_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPHYSICALDATABASERESULT_H_