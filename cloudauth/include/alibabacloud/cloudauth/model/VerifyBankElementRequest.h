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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_VERIFYBANKELEMENTREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_VERIFYBANKELEMENTREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT VerifyBankElementRequest : public RpcServiceRequest
			{

			public:
				VerifyBankElementRequest();
				~VerifyBankElementRequest();

				std::string getIdName()const;
				void setIdName(const std::string& idName);
				std::string getMobile()const;
				void setMobile(const std::string& mobile);
				std::string getBankCardUrl()const;
				void setBankCardUrl(const std::string& bankCardUrl);
				std::string getIdNo()const;
				void setIdNo(const std::string& idNo);
				std::string getBankCardNo()const;
				void setBankCardNo(const std::string& bankCardNo);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getOuterOrderNo()const;
				void setOuterOrderNo(const std::string& outerOrderNo);
				std::string getBankCardFile()const;
				void setBankCardFile(const std::string& bankCardFile);
				long getSceneId()const;
				void setSceneId(long sceneId);

            private:
				std::string idName_;
				std::string mobile_;
				std::string bankCardUrl_;
				std::string idNo_;
				std::string bankCardNo_;
				std::string mode_;
				std::string outerOrderNo_;
				std::string bankCardFile_;
				long sceneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_VERIFYBANKELEMENTREQUEST_H_