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

#ifndef ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEDATASOURCEREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT CreateOrUpdateDataSourceRequest : public RpcServiceRequest
			{

			public:
				CreateOrUpdateDataSourceRequest();
				~CreateOrUpdateDataSourceRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getConfigType()const;
				void setConfigType(const std::string& configType);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLogStoreName()const;
				void setLogStoreName(const std::string& logStoreName);
				std::string getDatasourceDescription()const;
				void setDatasourceDescription(const std::string& datasourceDescription);
				std::string getFields()const;
				void setFields(const std::string& fields);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);

            private:
				std::string projectName_;
				std::string configType_;
				std::string sourceIp_;
				std::string logStoreName_;
				std::string datasourceDescription_;
				std::string fields_;
				std::string regionNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEDATASOURCEREQUEST_H_