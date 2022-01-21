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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTSQLEXECAUDITLOGRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTSQLEXECAUDITLOGRESULT_H_

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
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListSQLExecAuditLogResult : public ServiceResult
			{
			public:
				struct SQLExecAuditLog
				{
					std::string userName;
					long instanceId;
					long elapsedTime;
					std::string execState;
					std::string opTime;
					std::string sQL;
					std::string remark;
					std::string instanceName;
					long userId;
					long dbId;
					bool logic;
					std::string sQLType;
					std::string schemaName;
					long affectRows;
				};


				ListSQLExecAuditLogResult();
				explicit ListSQLExecAuditLogResult(const std::string &payload);
				~ListSQLExecAuditLogResult();
				long getTotalCount()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				std::vector<SQLExecAuditLog> getSQLExecAuditLogList()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string errorCode_;
				std::string errorMessage_;
				std::vector<SQLExecAuditLog> sQLExecAuditLogList_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTSQLEXECAUDITLOGRESULT_H_