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

#ifndef ALIBABACLOUD_MOPEN_MODEL_MOPENQUERYCANVASREQUEST_H_
#define ALIBABACLOUD_MOPEN_MODEL_MOPENQUERYCANVASREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mopen/MoPenExport.h>

namespace AlibabaCloud
{
	namespace MoPen
	{
		namespace Model
		{
			class ALIBABACLOUD_MOPEN_EXPORT MoPenQueryCanvasRequest : public RpcServiceRequest
			{

			public:
				MoPenQueryCanvasRequest();
				~MoPenQueryCanvasRequest();

				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);
				std::string getSessionId()const;
				void setSessionId(const std::string& sessionId);
				int getPageId()const;
				void setPageId(int pageId);
				int getStatus()const;
				void setStatus(int status);

            private:
				std::string deviceName_;
				std::string sessionId_;
				int pageId_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MOPEN_MODEL_MOPENQUERYCANVASREQUEST_H_