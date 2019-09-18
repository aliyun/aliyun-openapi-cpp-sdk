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

#ifndef ALIBABACLOUD_GREEN_MODEL_CREATEKEYWORDLIBREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_CREATEKEYWORDLIBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT CreateKeywordLibRequest : public RpcServiceRequest
			{

			public:
				CreateKeywordLibRequest();
				~CreateKeywordLibRequest();

				std::string getLanguage()const;
				void setLanguage(const std::string& language);
				std::string getServiceModule()const;
				void setServiceModule(const std::string& serviceModule);
				std::string getMatchMode()const;
				void setMatchMode(const std::string& matchMode);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLibType()const;
				void setLibType(const std::string& libType);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getBizTypes()const;
				void setBizTypes(const std::string& bizTypes);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getCategory()const;
				void setCategory(const std::string& category);

            private:
				std::string language_;
				std::string serviceModule_;
				std::string matchMode_;
				std::string sourceIp_;
				std::string libType_;
				bool enable_;
				std::string lang_;
				std::string bizTypes_;
				std::string resourceType_;
				std::string name_;
				std::string category_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_CREATEKEYWORDLIBREQUEST_H_