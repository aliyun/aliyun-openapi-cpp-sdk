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

#ifndef ALIBABACLOUD_DMS_DG_MODEL_GETUSERDATABASESRESULT_H_
#define ALIBABACLOUD_DMS_DG_MODEL_GETUSERDATABASESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-dg/Dms_dgExport.h>

namespace AlibabaCloud
{
	namespace Dms_dg
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_DG_EXPORT GetUserDatabasesResult : public ServiceResult
			{
			public:
				struct DbInstance
				{
					std::string parentId;
					int connectPort;
					std::string instanceId;
					int port;
					std::string host;
					std::string gatewayId;
					std::string dbType;
					std::string dbDescription;
					long gmtCreate;
					std::string connectHost;
					std::string vpcId;
					std::string serviceType;
					std::string networkType;
					std::string instanceStatus;
					std::string userId;
					std::string nodeId;
					std::string vpcInstanceId;
					std::string regionId;
					std::string gatewayName;
				};


				GetUserDatabasesResult();
				explicit GetUserDatabasesResult(const std::string &payload);
				~GetUserDatabasesResult();
				std::vector<DbInstance> getDbInstanceList()const;
				std::string getErrorMsg()const;
				int getCount()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DbInstance> dbInstanceList_;
				std::string errorMsg_;
				int count_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_DG_MODEL_GETUSERDATABASESRESULT_H_