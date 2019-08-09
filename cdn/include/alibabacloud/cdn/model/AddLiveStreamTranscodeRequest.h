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

#ifndef ALIBABACLOUD_CDN_MODEL_ADDLIVESTREAMTRANSCODEREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_ADDLIVESTREAMTRANSCODEREQUEST_H_

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
			class ALIBABACLOUD_CDN_EXPORT AddLiveStreamTranscodeRequest : public RpcServiceRequest
			{

			public:
				AddLiveStreamTranscodeRequest();
				~AddLiveStreamTranscodeRequest();

				std::string get_Template()const;
				void set_Template(const std::string& _template);
				std::string getApp()const;
				void setApp(const std::string& app);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				std::string getRecord()const;
				void setRecord(const std::string& record);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSnapshot()const;
				void setSnapshot(const std::string& snapshot);

            private:
				std::string _template_;
				std::string app_;
				std::string securityToken_;
				std::string ownerAccount_;
				std::string domain_;
				std::string record_;
				long ownerId_;
				std::string snapshot_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_ADDLIVESTREAMTRANSCODEREQUEST_H_