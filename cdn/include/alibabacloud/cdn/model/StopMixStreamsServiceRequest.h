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

#ifndef ALIBABACLOUD_CDN_MODEL_STOPMIXSTREAMSSERVICEREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_STOPMIXSTREAMSSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT StopMixStreamsServiceRequest : public RpcServiceRequest
			{

			public:
				StopMixStreamsServiceRequest();
				~StopMixStreamsServiceRequest();

				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getMainDomainName()const;
				void setMainDomainName(const std::string& mainDomainName);
				std::string getMixStreamName()const;
				void setMixStreamName(const std::string& mixStreamName);
				std::string getMixDomainName()const;
				void setMixDomainName(const std::string& mixDomainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getMainAppName()const;
				void setMainAppName(const std::string& mainAppName);
				std::string getMixAppName()const;
				void setMixAppName(const std::string& mixAppName);
				std::string getMainStreamName()const;
				void setMainStreamName(const std::string& mainStreamName);

            private:
				std::string securityToken_;
				std::string mainDomainName_;
				std::string mixStreamName_;
				std::string mixDomainName_;
				long ownerId_;
				std::string mainAppName_;
				std::string mixAppName_;
				std::string mainStreamName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_STOPMIXSTREAMSSERVICEREQUEST_H_