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

#ifndef ALIBABACLOUD_CLOUDAUTH_CONSOLE_MODEL_RETRIEVEFACEREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_CONSOLE_MODEL_RETRIEVEFACEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth-console/Cloudauth_consoleExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth_console
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_CONSOLE_EXPORT RetrieveFaceRequest : public RpcServiceRequest
			{

			public:
				RetrieveFaceRequest();
				~RetrieveFaceRequest();

				std::string getFace64String()const;
				void setFace64String(const std::string& face64String);
				std::string getFaceUrl()const;
				void setFaceUrl(const std::string& faceUrl);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string face64String_;
				std::string faceUrl_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_CONSOLE_MODEL_RETRIEVEFACEREQUEST_H_