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

#ifndef ALIBABACLOUD_DRDS_MODEL_CREATEMYCATCUSTOMIMPORTREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_CREATEMYCATCUSTOMIMPORTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT CreateMyCatCustomImportRequest : public RpcServiceRequest
			{

			public:
				CreateMyCatCustomImportRequest();
				~CreateMyCatCustomImportRequest();

				int getDstPort()const;
				void setDstPort(int dstPort);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getSchemaUrl()const;
				void setSchemaUrl(const std::string& schemaUrl);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDstUser()const;
				void setDstUser(const std::string& dstUser);
				std::string getDstDbNme()const;
				void setDstDbNme(const std::string& dstDbNme);
				std::string getTableMap()const;
				void setTableMap(const std::string& tableMap);
				std::string getImportDb()const;
				void setImportDb(const std::string& importDb);
				std::string getDstPwd()const;
				void setDstPwd(const std::string& dstPwd);
				std::string getRuleUrl()const;
				void setRuleUrl(const std::string& ruleUrl);
				std::string getDstDrdsInstanceId()const;
				void setDstDrdsInstanceId(const std::string& dstDrdsInstanceId);

            private:
				int dstPort_;
				std::string taskName_;
				std::string schemaUrl_;
				std::string regionId_;
				std::string dstUser_;
				std::string dstDbNme_;
				std::string tableMap_;
				std::string importDb_;
				std::string dstPwd_;
				std::string ruleUrl_;
				std::string dstDrdsInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_CREATEMYCATCUSTOMIMPORTREQUEST_H_