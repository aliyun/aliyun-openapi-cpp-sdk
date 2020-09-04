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

#ifndef ALIBABACLOUD_DCDN_MODEL_SETDCDNCONFIGOFVERSIONREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_SETDCDNCONFIGOFVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT SetDcdnConfigOfVersionRequest : public RpcServiceRequest
			{

			public:
				SetDcdnConfigOfVersionRequest();
				~SetDcdnConfigOfVersionRequest();

				std::string getVersionId()const;
				void setVersionId(const std::string& versionId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getFunctionName()const;
				void setFunctionName(const std::string& functionName);
				std::string getFunctionArgs()const;
				void setFunctionArgs(const std::string& functionArgs);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getFunctionId()const;
				void setFunctionId(long functionId);
				std::string getConfigId()const;
				void setConfigId(const std::string& configId);

            private:
				std::string versionId_;
				std::string securityToken_;
				std::string functionName_;
				std::string functionArgs_;
				std::string ownerAccount_;
				long ownerId_;
				long functionId_;
				std::string configId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_SETDCDNCONFIGOFVERSIONREQUEST_H_