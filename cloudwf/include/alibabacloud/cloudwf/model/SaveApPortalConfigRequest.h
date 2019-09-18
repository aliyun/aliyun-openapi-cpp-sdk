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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPPORTALCONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPPORTALCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT SaveApPortalConfigRequest : public RpcServiceRequest
			{

			public:
				SaveApPortalConfigRequest();
				~SaveApPortalConfigRequest();

				std::string getAuthKey()const;
				void setAuthKey(const std::string& authKey);
				bool getPortalStatus()const;
				void setPortalStatus(bool portalStatus);
				std::string getWhitelist()const;
				void setWhitelist(const std::string& whitelist);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getNetwork()const;
				void setNetwork(int network);
				std::string getPortalUrl()const;
				void setPortalUrl(const std::string& portalUrl);
				std::string getCheckUrl()const;
				void setCheckUrl(const std::string& checkUrl);
				long getApConfigId()const;
				void setApConfigId(long apConfigId);
				std::string getAuthSecret()const;
				void setAuthSecret(const std::string& authSecret);
				std::string getWebAuthUrl()const;
				void setWebAuthUrl(const std::string& webAuthUrl);

            private:
				std::string authKey_;
				bool portalStatus_;
				std::string whitelist_;
				std::string accessKeyId_;
				int network_;
				std::string portalUrl_;
				std::string checkUrl_;
				long apConfigId_;
				std::string authSecret_;
				std::string webAuthUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPPORTALCONFIGREQUEST_H_