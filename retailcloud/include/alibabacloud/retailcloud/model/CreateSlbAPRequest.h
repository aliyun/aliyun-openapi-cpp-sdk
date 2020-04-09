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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATESLBAPREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATESLBAPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateSlbAPRequest : public RpcServiceRequest
			{

			public:
				CreateSlbAPRequest();
				~CreateSlbAPRequest();

				std::string getSslCertId()const;
				void setSslCertId(const std::string& sslCertId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getProtocol()const;
				void setProtocol(const std::string& protocol);
				int getEstablishedTimeout()const;
				void setEstablishedTimeout(int establishedTimeout);
				std::string getSlbId()const;
				void setSlbId(const std::string& slbId);
				int getRealServerPort()const;
				void setRealServerPort(int realServerPort);
				int getStickySession()const;
				void setStickySession(int stickySession);
				int getCookieTimeout()const;
				void setCookieTimeout(int cookieTimeout);
				std::string getName()const;
				void setName(const std::string& name);
				long getEnvId()const;
				void setEnvId(long envId);

            private:
				std::string sslCertId_;
				int listenerPort_;
				std::string protocol_;
				int establishedTimeout_;
				std::string slbId_;
				int realServerPort_;
				int stickySession_;
				int cookieTimeout_;
				std::string name_;
				long envId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATESLBAPREQUEST_H_