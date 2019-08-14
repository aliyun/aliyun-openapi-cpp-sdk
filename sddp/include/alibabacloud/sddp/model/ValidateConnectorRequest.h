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

#ifndef ALIBABACLOUD_SDDP_MODEL_VALIDATECONNECTORREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_VALIDATECONNECTORREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT ValidateConnectorRequest : public RpcServiceRequest
			{

			public:
				ValidateConnectorRequest();
				~ValidateConnectorRequest();

				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getConnector()const;
				void setConnector(const std::string& connector);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getResourceType()const;
				void setResourceType(int resourceType);
				std::string getServiceRegionId()const;
				void setServiceRegionId(const std::string& serviceRegionId);
				std::string getParentId()const;
				void setParentId(const std::string& parentId);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string password_;
				std::string sourceIp_;
				std::string connector_;
				std::string lang_;
				int resourceType_;
				std::string serviceRegionId_;
				std::string parentId_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_VALIDATECONNECTORREQUEST_H_