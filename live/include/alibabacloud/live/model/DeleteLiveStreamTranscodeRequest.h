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

#ifndef ALIBABACLOUD_LIVE_MODEL_DELETELIVESTREAMTRANSCODEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DELETELIVESTREAMTRANSCODEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DeleteLiveStreamTranscodeRequest : public RpcServiceRequest
			{

			public:
				DeleteLiveStreamTranscodeRequest();
				~DeleteLiveStreamTranscodeRequest();

				std::string getApp()const;
				void setApp(const std::string& app);
				std::string get_Template()const;
				void set_Template(const std::string& _template);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string app_;
				std::string _template_;
				std::string securityToken_;
				std::string domain_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DELETELIVESTREAMTRANSCODEREQUEST_H_