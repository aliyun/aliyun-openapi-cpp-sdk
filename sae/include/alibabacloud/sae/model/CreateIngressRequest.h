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

#ifndef ALIBABACLOUD_SAE_MODEL_CREATEINGRESSREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_CREATEINGRESSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT CreateIngressRequest : public RoaServiceRequest
			{

			public:
				CreateIngressRequest();
				~CreateIngressRequest();

				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getSlbId()const;
				void setSlbId(const std::string& slbId);
				std::string getNamespaceId()const;
				void setNamespaceId(const std::string& namespaceId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRules()const;
				void setRules(const std::string& rules);
				std::string getCertId()const;
				void setCertId(const std::string& certId);
				std::string getDefaultRule()const;
				void setDefaultRule(const std::string& defaultRule);

            private:
				int listenerPort_;
				std::string slbId_;
				std::string namespaceId_;
				std::string description_;
				std::string rules_;
				std::string certId_;
				std::string defaultRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_CREATEINGRESSREQUEST_H_