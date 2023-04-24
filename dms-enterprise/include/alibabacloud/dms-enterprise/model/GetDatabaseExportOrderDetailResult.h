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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATABASEEXPORTORDERDETAILRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATABASEEXPORTORDERDETAILRESULT_H_

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
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetDatabaseExportOrderDetailResult : public ServiceResult
			{
			public:
				struct DatabaseExportOrderDetail
				{
					struct KeyInfo
					{
						struct Config
						{
							std::vector<std::string> exportTypes;
							std::vector<std::string> selectedTables;
							std::string dbName;
							std::string exportContent;
							std::vector<std::string> sQLExtOption;
							std::string targetOption;
						};
						std::string auditDate;
						Config config;
						long dbId;
						std::string downloadURL;
					};
					std::string comment;
					std::string statusDesc;
					std::string workflowStatusDesc;
					KeyInfo keyInfo;
					std::string searchName;
					std::string log;
					long id;
					std::string committer;
					std::string committerId;
				};


				GetDatabaseExportOrderDetailResult();
				explicit GetDatabaseExportOrderDetailResult(const std::string &payload);
				~GetDatabaseExportOrderDetailResult();
				DatabaseExportOrderDetail getDatabaseExportOrderDetail()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				DatabaseExportOrderDetail databaseExportOrderDetail_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATABASEEXPORTORDERDETAILRESULT_H_