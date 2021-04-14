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

#ifndef ALIBABACLOUD_GREEN_MODEL_CREATEAUDITCALLBACKREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_CREATEAUDITCALLBACKREQUEST_H_

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
			class ALIBABACLOUD_GREEN_EXPORT CreateAuditCallbackRequest : public RpcServiceRequest
			{

			public:
				CreateAuditCallbackRequest();
				~CreateAuditCallbackRequest();

				std::string getCallbackTypes()const;
				void setCallbackTypes(const std::string& callbackTypes);
				std::string getCallbackSuggestions()const;
				void setCallbackSuggestions(const std::string& callbackSuggestions);
				std::string getUrl()const;
				void setUrl(const std::string& url);
				std::string getCryptType()const;
				void setCryptType(const std::string& cryptType);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string callbackTypes_;
				std::string callbackSuggestions_;
				std::string url_;
				std::string cryptType_;
				std::string sourceIp_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_CREATEAUDITCALLBACKREQUEST_H_