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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPERMAPPLYORDERDETAILRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPERMAPPLYORDERDETAILRESULT_H_

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
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetPermApplyOrderDetailResult : public ServiceResult
			{
			public:
				struct PermApplyOrderDetail
				{
					struct Resource
					{
						struct DatabaseInfo
						{
							std::string searchName;
							std::vector<std::string> ownerNickNames;
							long dbId;
							bool logic;
							std::string envType;
							std::string dbType;
							std::vector<std::string> ownerIds;
						};
						struct ColumnInfo
						{
							std::string columnName;
							std::string tableName;
						};
						struct TableInfo
						{
							std::string tableName;
						};
						struct InstanceInfo
						{
							long dbaId;
							std::string searchName;
							std::string instanceId;
							std::vector<std::string> ownerIds1;
							long port;
							std::string host;
							std::string dbaNickName;
							std::vector<std::string> ownerNickName;
							std::string envType;
							std::string dbType;
						};
						DatabaseInfo databaseInfo;
						ColumnInfo columnInfo;
						TableInfo tableInfo;
						InstanceInfo instanceInfo;
					};
					std::string applyType;
					long permType;
					long seconds;
					std::vector<Resource> resources;
				};


				GetPermApplyOrderDetailResult();
				explicit GetPermApplyOrderDetailResult(const std::string &payload);
				~GetPermApplyOrderDetailResult();
				PermApplyOrderDetail getPermApplyOrderDetail()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				PermApplyOrderDetail permApplyOrderDetail_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPERMAPPLYORDERDETAILRESULT_H_