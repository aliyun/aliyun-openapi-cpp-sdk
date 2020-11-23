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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_ELEMENTSMARTVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_ELEMENTSMARTVERIFYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT ElementSmartVerifyRequest : public RpcServiceRequest
			{

			public:
				ElementSmartVerifyRequest();
				~ElementSmartVerifyRequest();

				std::string getCertFile()const;
				void setCertFile(const std::string& certFile);
				std::string getCertName()const;
				void setCertName(const std::string& certName);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getCertNo()const;
				void setCertNo(const std::string& certNo);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getCertUrl()const;
				void setCertUrl(const std::string& certUrl);
				std::string getCertType()const;
				void setCertType(const std::string& certType);
				long getSceneId()const;
				void setSceneId(long sceneId);

            private:
				std::string certFile_;
				std::string certName_;
				std::string mode_;
				std::string certNo_;
				std::string outerOrderNo_;
				std::string certUrl_;
				std::string certType_;
				long sceneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_ELEMENTSMARTVERIFYREQUEST_H_