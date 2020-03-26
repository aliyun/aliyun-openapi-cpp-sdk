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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeVulListRequest : public RpcServiceRequest
			{

			public:
				DescribeVulListRequest();
				~DescribeVulListRequest();

				std::string getStatusList()const;
				void setStatusList(const std::string& statusList);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDealed()const;
				void setDealed(const std::string& dealed);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getAliasName()const;
				void setAliasName(const std::string& aliasName);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getIds()const;
				void setIds(const std::string& ids);
				std::string getNecessity()const;
				void setNecessity(const std::string& necessity);
				std::string getUuids()const;
				void setUuids(const std::string& uuids);

            private:
				std::string statusList_;
				std::string remark_;
				std::string type_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				std::string dealed_;
				int currentPage_;
				std::string aliasName_;
				std::string name_;
				std::string ids_;
				std::string necessity_;
				std::string uuids_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTREQUEST_H_