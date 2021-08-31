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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETACCOUNTMOCKRULEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_GETACCOUNTMOCKRULEREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT GetAccountMockRuleRequest : public RoaServiceRequest
			{

			public:
				GetAccountMockRuleRequest();
				~GetAccountMockRuleRequest();

				std::string getProviderAppName()const;
				void setProviderAppName(const std::string& providerAppName);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getName()const;
				void setName(const std::string& name);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getConsumerAppName()const;
				void setConsumerAppName(const std::string& consumerAppName);

            private:
				std::string providerAppName_;
				std::string pageNumber_;
				std::string pageSize_;
				std::string name_;
				std::string _namespace_;
				std::string region_;
				std::string consumerAppName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETACCOUNTMOCKRULEREQUEST_H_