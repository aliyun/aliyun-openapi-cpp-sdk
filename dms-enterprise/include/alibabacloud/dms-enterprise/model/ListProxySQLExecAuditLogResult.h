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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTPROXYSQLEXECAUDITLOGRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTPROXYSQLEXECAUDITLOGRESULT_H_

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
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListProxySQLExecAuditLogResult : public ServiceResult
			{
			public:
				struct ProxySQLExecAuditLog
				{
					std::string instanceName;
					std::string userName;
					long instanceId;
					long userId;
					long elapsedTime;
					std::string execState;
					std::string sQLType;
					std::string opTime;
					std::string schemaName;
					long affectRows;
					std::string sQL;
					std::string remark;
				};


				ListProxySQLExecAuditLogResult();
				explicit ListProxySQLExecAuditLogResult(const std::string &payload);
				~ListProxySQLExecAuditLogResult();
				std::vector<ProxySQLExecAuditLog> getProxySQLExecAuditLogList()const;
				long getTotalCount()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ProxySQLExecAuditLog> proxySQLExecAuditLogList_;
				long totalCount_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTPROXYSQLEXECAUDITLOGRESULT_H_