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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_INITSMARTVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_INITSMARTVERIFYREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT InitSmartVerifyRequest : public RpcServiceRequest
			{

			public:
				InitSmartVerifyRequest();
				~InitSmartVerifyRequest();

				std::string getIp()const;
				void setIp(const std::string& ip);
				std::string getCertName()const;
				void setCertName(const std::string& certName);
				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getCertNo()const;
				void setCertNo(const std::string& certNo);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getCertType()const;
				void setCertType(const std::string& certType);
				long getSceneId()const;
				void setSceneId(long sceneId);
				std::string getMetaInfo()const;
				void setMetaInfo(const std::string& metaInfo);
				std::string getOcr()const;
				void setOcr(const std::string& ocr);

            private:
				std::string ip_;
				std::string certName_;
				std::string mobile_;
				std::string userId_;
				std::string mode_;
				std::string certNo_;
				std::string outerOrderNo_;
				std::string certType_;
				long sceneId_;
				std::string metaInfo_;
				std::string ocr_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_INITSMARTVERIFYREQUEST_H_