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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTINSTANCESRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTINSTANCESRESULT_H_

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
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					std::string instanceSource;
					std::string instanceId;
					int port;
					std::string databasePassword;
					std::string host;
					int exportTimeout;
					int ddlOnline;
					std::string envType;
					std::string sid;
					int useDsql;
					std::string ecsInstanceId;
					std::string dbaId;
					std::string vpcId;
					std::string instanceAlias;
					std::string state;
					std::string ecsRegion;
					std::string databaseUser;
					std::vector<std::string> ownerNameList;
					std::string instanceType;
					std::string dbaNickName;
					std::string dataLinkName;
					int queryTimeout;
					std::vector<std::string> ownerIdList;
					std::string safeRuleId;
				};


				ListInstancesResult();
				explicit ListInstancesResult(const std::string &payload);
				~ListInstancesResult();
				long getTotalCount()const;
				std::string getErrorCode()const;
				std::vector<Instance> getInstanceList()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string errorCode_;
				std::vector<Instance> instanceList_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTINSTANCESRESULT_H_