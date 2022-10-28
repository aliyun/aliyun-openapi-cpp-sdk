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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETINSTANCERESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETINSTANCERESULT_H_

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
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetInstanceResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct StandardGroup
					{
						std::string groupName;
						std::string groupMode;
					};
					int port;
					std::string databasePassword;
					int exportTimeout;
					std::string envType;
					std::string dbaId;
					std::string instanceAlias;
					std::string ecsRegion;
					std::string instanceType;
					int queryTimeout;
					std::string dataLinkName;
					std::string safeRuleId;
					std::string sellSitd;
					StandardGroup standardGroup;
					std::string instanceSource;
					std::string instanceId;
					std::string host;
					int ddlOnline;
					int useDsql;
					std::string sid;
					std::string ecsInstanceId;
					std::string vpcId;
					std::string state;
					std::string databaseUser;
					std::vector<std::string> ownerNameList;
					std::string dbaNickName;
					std::vector<std::string> ownerIdList;
				};


				GetInstanceResult();
				explicit GetInstanceResult(const std::string &payload);
				~GetInstanceResult();
				Instance getInstance()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Instance instance_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETINSTANCERESULT_H_