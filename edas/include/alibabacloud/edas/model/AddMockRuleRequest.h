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

#ifndef ALIBABACLOUD_EDAS_MODEL_ADDMOCKRULEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_ADDMOCKRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT AddMockRuleRequest : public RoaServiceRequest
			{

			public:
				AddMockRuleRequest();
				~AddMockRuleRequest();

				std::string getScMockItemJson()const;
				void setScMockItemJson(const std::string& scMockItemJson);
				std::string getDubboMockItemJson()const;
				void setDubboMockItemJson(const std::string& dubboMockItemJson);
				std::string getExtraJson()const;
				void setExtraJson(const std::string& extraJson);
				std::string getProviderAppId()const;
				void setProviderAppId(const std::string& providerAppId);
				std::string getSource()const;
				void setSource(const std::string& source);
				std::string getProviderAppName()const;
				void setProviderAppName(const std::string& providerAppName);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getName()const;
				void setName(const std::string& name);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getConsumerAppsJson()const;
				void setConsumerAppsJson(const std::string& consumerAppsJson);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string scMockItemJson_;
				std::string dubboMockItemJson_;
				std::string extraJson_;
				std::string providerAppId_;
				std::string source_;
				std::string providerAppName_;
				bool enable_;
				std::string name_;
				std::string _namespace_;
				std::string consumerAppsJson_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_ADDMOCKRULEREQUEST_H_