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

#ifndef ALIBABACLOUD_AFS_MODEL_AUTHENTICATESIGREQUEST_H_
#define ALIBABACLOUD_AFS_MODEL_AUTHENTICATESIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT AuthenticateSigRequest : public RpcServiceRequest
			{

			public:
				AuthenticateSigRequest();
				~AuthenticateSigRequest();

				std::string getSig()const;
				void setSig(const std::string& sig);
				std::string getRemoteIp()const;
				void setRemoteIp(const std::string& remoteIp);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getAppKey()const;
				void setAppKey(const std::string& appKey);
				std::string getSessionId()const;
				void setSessionId(const std::string& sessionId);
				std::string getToken()const;
				void setToken(const std::string& token);
				std::string getScene()const;
				void setScene(const std::string& scene);

            private:
				std::string sig_;
				std::string remoteIp_;
				std::string sourceIp_;
				std::string appKey_;
				std::string sessionId_;
				std::string token_;
				std::string scene_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_AUTHENTICATESIGREQUEST_H_