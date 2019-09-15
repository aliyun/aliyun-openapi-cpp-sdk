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

#ifndef ALIBABACLOUD_AEGIS_MODEL_EXPORTVULREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_EXPORTVULREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT ExportVulRequest : public RpcServiceRequest
			{

			public:
				ExportVulRequest();
				~ExportVulRequest();

				std::string getStatusList()const;
				void setStatusList(const std::string& statusList);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getLevel()const;
				void setLevel(const std::string& level);
				std::string getResource()const;
				void setResource(const std::string& resource);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				std::string getBatchName()const;
				void setBatchName(const std::string& batchName);
				std::string getAliasName()const;
				void setAliasName(const std::string& aliasName);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getNecessity()const;
				void setNecessity(const std::string& necessity);
				std::string getUuids()const;
				void setUuids(const std::string& uuids);

            private:
				std::string statusList_;
				std::string remark_;
				std::string type_;
				std::string sourceIp_;
				std::string lang_;
				std::string level_;
				std::string resource_;
				std::string dealed_;
				std::string batchName_;
				std::string aliasName_;
				std::string name_;
				std::string necessity_;
				std::string uuids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_EXPORTVULREQUEST_H_