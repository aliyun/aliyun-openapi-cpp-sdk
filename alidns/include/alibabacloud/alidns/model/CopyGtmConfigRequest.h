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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_COPYGTMCONFIGREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_COPYGTMCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT CopyGtmConfigRequest : public RpcServiceRequest
			{

			public:
				CopyGtmConfigRequest();
				~CopyGtmConfigRequest();

				std::string getSourceId()const;
				void setSourceId(const std::string& sourceId);
				std::string getTargetId()const;
				void setTargetId(const std::string& targetId);
				std::string getCopyType()const;
				void setCopyType(const std::string& copyType);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string sourceId_;
				std::string targetId_;
				std::string copyType_;
				std::string userClientIp_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_COPYGTMCONFIGREQUEST_H_